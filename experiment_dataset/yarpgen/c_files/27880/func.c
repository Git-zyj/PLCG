/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27880
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_1 - 2]))) / (var_0)));
            var_20 *= ((/* implicit */int) ((_Bool) arr_2 [12ULL] [i_1 - 2]));
            var_21 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_4 [4] [i_0] [i_0])))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])) + (((/* implicit */int) (signed char)(-127 - 1)))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_10 [13ULL] [13ULL] [(unsigned char)4] [(unsigned char)4] [i_2] [5U]))) ^ (((/* implicit */int) (signed char)127))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(-144005776))))));
                        var_25 = ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_2] [i_3 + 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_3 - 1])));
                        arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_11 [0ULL] [i_1 - 2] [i_1 - 2])))) - (((/* implicit */int) arr_5 [i_3 - 1] [i_0 - 1]))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_16 [i_0] [i_4] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((-1), (((/* implicit */int) arr_5 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)29021))))) : (max((7745189019297279977ULL), (((/* implicit */unsigned long long int) (signed char)38)))))), (((/* implicit */unsigned long long int) (+(arr_8 [i_0] [9] [i_0 + 1]))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned short) ((((int) arr_22 [i_0 + 3] [i_0 + 3] [10])) & (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_6))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)53358))))))))));
                            arr_24 [i_0] [i_4] [(unsigned char)1] [i_6 + 1] [i_4] = ((/* implicit */long long int) (signed char)(-127 - 1));
                            arr_25 [4] [(_Bool)1] [(_Bool)1] [i_6] [i_6] [i_4] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned int) var_2)) : (max((arr_14 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_2))))))) > ((((+(8062068045362992707ULL))) >> (((max((((/* implicit */int) (signed char)0)), (815624562))) - (815624548)))))));
            var_28 += ((/* implicit */unsigned char) (+(((((arr_18 [i_0] [i_0] [i_8]) + (2147483647))) << (((((/* implicit */int) arr_11 [i_0 + 2] [12] [i_0 + 2])) - (23983)))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    {
                        arr_35 [i_0] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_8] [i_0 + 3]))));
                        arr_36 [i_0 + 3] [i_8] [8] [i_8] [i_0 + 3] [i_9] = ((((/* implicit */_Bool) (+(arr_14 [(short)6] [i_0 + 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 2] [i_0])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0 + 3] [i_0 + 2])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) * (arr_14 [(signed char)11] [i_0 + 3] [i_0]))));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (short)29021)))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                for (short i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        var_30 -= ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_21 [(short)10] [i_11] [i_12] [i_12])) ? (arr_14 [2] [i_11] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29021))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19148))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) >> (((int) arr_17 [2ULL] [i_13] [6U])))))));
                        var_31 = ((/* implicit */unsigned char) min((((int) ((_Bool) (signed char)2))), (((/* implicit */int) ((short) arr_45 [i_0 - 2] [i_0 - 2] [i_12 + 1] [i_11] [i_0 + 1] [i_12])))));
                    }
                } 
            } 
        } 
        arr_47 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) != (((/* implicit */int) max((arr_42 [i_0] [i_0] [i_0 + 1] [i_0 + 2]), ((_Bool)1))))))) : (((/* implicit */int) arr_5 [(unsigned short)2] [(short)3]))));
        /* LoopSeq 4 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            var_32 = (+(((((/* implicit */_Bool) arr_38 [i_0] [i_0 - 1] [i_14 + 1])) ? (((/* implicit */long long int) arr_9 [i_14] [i_14] [(_Bool)1] [i_0])) : (max((((/* implicit */long long int) (_Bool)0)), (var_0))))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) -144005776))));
        }
        for (unsigned char i_15 = 3; i_15 < 11; i_15 += 3) 
        {
            var_34 = -144005776;
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) -385292482))));
            var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_0 - 1] [i_0 + 2]))))), (max((min((((/* implicit */unsigned int) (signed char)74)), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-105)))))))));
        }
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_17 = 2; i_17 < 11; i_17 += 3) 
            {
                arr_59 [i_0] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_55 [i_0 + 1] [(signed char)11] [6LL]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_17 [(_Bool)1] [i_0] [i_17 + 3]), (arr_17 [i_17] [i_0] [i_17 + 2]))))) : ((+(max((((/* implicit */unsigned long long int) 32400362)), (0ULL)))))));
                arr_60 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_1)))) ? (((/* implicit */int) arr_37 [(unsigned short)7] [i_16] [i_0 - 2])) : (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) (short)-22449)) ? (arr_9 [i_17 + 4] [i_17 + 4] [i_17 + 4] [i_0 - 1]) : (arr_18 [i_0 - 1] [i_16] [i_0 - 1]))) : (arr_13 [i_0])));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 1; i_18 < 14; i_18 += 3) 
            {
                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_20 [(_Bool)1] [i_0] [i_0] [i_0])))))))));
                var_38 = ((/* implicit */signed char) max((var_38), (((signed char) ((((/* implicit */_Bool) arr_41 [i_0] [4U] [i_16] [i_18 + 1])) ? (((/* implicit */int) arr_41 [i_16] [i_16] [12U] [i_16])) : (((/* implicit */int) arr_41 [i_16] [i_0] [i_16] [i_18])))))));
            }
        }
        for (int i_19 = 1; i_19 < 13; i_19 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((unsigned short)65535), ((unsigned short)3779)))), (max((arr_30 [i_19] [i_19] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3188101488U)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_19] [i_0] [i_0 + 2] [i_0] [i_0 + 3])) == (((/* implicit */int) ((_Bool) arr_15 [i_0] [i_0]))))))));
            arr_67 [7LL] [7LL] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -6726124042900057607LL)) ? (((/* implicit */int) arr_52 [i_0] [i_19 + 1] [i_0])) : (((/* implicit */int) arr_52 [i_0] [i_0] [i_0]))))));
        }
    }
    for (unsigned short i_20 = 3; i_20 < 15; i_20 += 3) 
    {
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_68 [i_20]))))) ? (((/* implicit */int) ((signed char) ((signed char) -32400362)))) : ((+((+(32400362)))))));
        arr_71 [i_20] [i_20 - 2] = ((/* implicit */unsigned char) (unsigned short)65535);
        arr_72 [i_20] [(unsigned short)9] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_69 [i_20 + 1] [i_20])), (8160606898880779801ULL))) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_70 [i_20] [i_20])) ? (462983526U) : (((/* implicit */unsigned int) 1022597690)))) >> (((/* implicit */int) ((_Bool) arr_69 [i_20] [15]))))))));
    }
    var_41 -= ((/* implicit */unsigned int) var_18);
    /* LoopSeq 1 */
    for (unsigned int i_21 = 2; i_21 < 21; i_21 += 1) 
    {
        var_42 += max((((/* implicit */unsigned long long int) ((((_Bool) arr_74 [i_21 - 2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) max(((signed char)127), (arr_73 [(signed char)5]))))))), ((+(10286137174828771814ULL))));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_21 - 2])) ? (arr_75 [i_21 - 1]) : (((/* implicit */int) arr_73 [i_21 - 1]))))) ? (((unsigned long long int) 10286137174828771814ULL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_75 [i_21 - 1])) ? (arr_75 [i_21 - 1]) : (((/* implicit */int) (signed char)15)))))));
        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) ((short) (unsigned short)3))) : (((/* implicit */int) ((unsigned short) 230714010U)))))) ? (1437076928U) : (((/* implicit */unsigned int) (((+(arr_75 [i_21]))) - (var_15))))));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 951905870U)) ? (min((((/* implicit */long long int) max((arr_75 [(unsigned char)15]), (((/* implicit */int) arr_74 [i_21]))))), (((arr_74 [i_21]) ? (((/* implicit */long long int) ((/* implicit */int) (short)22288))) : (9223372036854775807LL))))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_3))))), (((var_16) ^ (-1917019509))))))));
    }
}
