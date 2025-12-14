/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33044
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)12))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) (signed char)-64)) ^ (arr_1 [i_0] [(signed char)2]))))), (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) arr_0 [0U])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
                        var_15 ^= ((/* implicit */short) (signed char)-124);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)-84)))), (((((/* implicit */_Bool) 2970234298U)) ? (((/* implicit */unsigned long long int) 1617690790)) : (arr_4 [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 3) 
        {
            var_17 = ((/* implicit */long long int) (signed char)-123);
            arr_16 [i_5] [i_5] = ((/* implicit */short) var_7);
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
                    var_19 ^= ((/* implicit */unsigned int) ((long long int) max(((~(((/* implicit */int) arr_12 [i_4] [i_7])))), (((var_2) & (((/* implicit */int) (short)18056)))))));
                    var_20 = ((/* implicit */signed char) 8241254784306260868LL);
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (int i_8 = 1; i_8 < 8; i_8 += 3) 
    {
        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_23 [i_8 + 2]))))));
        var_22 = ((((((/* implicit */_Bool) arr_21 [i_8 + 2] [i_8 + 2])) ? (((/* implicit */int) arr_21 [i_8 + 2] [i_8 + 1])) : (((/* implicit */int) (signed char)105)))) > (((/* implicit */int) arr_21 [i_8] [i_8])));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), ((unsigned short)28495)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_26 [i_8] [i_9])))))), (arr_0 [(_Bool)1])));
            arr_27 [i_8] [i_8] [i_8] = ((long long int) arr_18 [(short)5] [i_8]);
            arr_28 [i_8] [i_8] [i_8 - 1] = ((/* implicit */short) var_5);
        }
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
        {
            var_24 ^= ((/* implicit */unsigned short) ((short) ((_Bool) (signed char)-105)));
            var_25 = (-((-(arr_19 [i_10] [i_8] [i_8 + 1]))));
            /* LoopNest 3 */
            for (short i_11 = 2; i_11 < 8; i_11 += 2) 
            {
                for (int i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    for (unsigned short i_13 = 3; i_13 < 8; i_13 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (signed char)-108))));
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_20 [(signed char)12] [i_11] [i_10] [i_8 + 3])), (min((((/* implicit */unsigned short) (_Bool)1)), (var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_8 [i_8] [i_11] [i_12 - 1] [i_13 + 1] [i_11 - 1] [i_8 - 1])))))) : (min((((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [(unsigned short)4] [i_11]))), (((/* implicit */long long int) arr_33 [i_11] [i_11] [6LL]))))));
                            arr_42 [i_12 - 1] [i_12 - 1] [i_8] [i_12 + 1] [i_12] [i_12] [i_12 + 1] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_40 [(short)6] [10U] [i_10] [(signed char)3] [i_10] [(short)6])) ? (var_11) : (((/* implicit */int) (signed char)-78)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_8 + 1] [i_10] [i_8 + 1] [i_8])) && (((/* implicit */_Bool) (signed char)-92))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)41))) : ((+(var_3)))));
                        }
                    } 
                } 
            } 
            var_28 ^= ((unsigned short) arr_31 [(short)2] [i_10]);
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
        {
            var_29 ^= ((/* implicit */unsigned int) (signed char)-127);
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_26 [1U] [i_8]))));
                var_31 = ((/* implicit */unsigned char) ((arr_45 [i_8]) ? (((/* implicit */int) arr_0 [i_15])) : (((/* implicit */int) arr_31 [i_8] [i_8]))));
                var_32 = ((/* implicit */short) (~(((/* implicit */int) ((var_8) || (((/* implicit */_Bool) arr_22 [i_15] [i_8])))))));
                var_33 = ((/* implicit */signed char) ((long long int) (!(arr_0 [(short)9]))));
            }
            for (unsigned int i_16 = 1; i_16 < 8; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 1; i_17 < 10; i_17 += 2) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_53 [0U] [0U] [i_8] [i_17] [(unsigned short)5] [i_8] [i_17 + 1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_25 [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_50 [i_8] [i_16 + 3] [i_8])))));
                            var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) & (4292609814498037568LL)))) ? (((/* implicit */int) ((short) arr_11 [i_8]))) : (((((/* implicit */_Bool) arr_10 [i_18 - 1] [(short)12] [i_8 + 2] [i_14] [(short)12] [i_8 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)26925))))));
                            var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_8 + 2] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_8 + 2] [i_8]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_19 = 3; i_19 < 8; i_19 += 3) 
                {
                    arr_57 [i_16] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((int) arr_0 [i_8 + 3]));
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        var_36 = ((/* implicit */short) (!(((15633958717488641594ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8] [i_16] [i_16])))))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (signed char)104))));
                    }
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        var_38 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_19 + 3]))));
                        var_39 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (arr_29 [8U])));
                        arr_62 [i_8] [i_8 + 1] [i_8] [i_16] [i_16] [i_19] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)204))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        var_40 ^= ((/* implicit */short) ((arr_7 [i_22] [i_22] [0LL] [i_16] [i_8 + 3]) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) arr_7 [12LL] [i_19] [(_Bool)1] [i_8] [i_8 + 3]))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_19 + 3] [i_8] [i_22] [(unsigned char)7] [i_22] [1U])) ? (((/* implicit */unsigned long long int) var_7)) : (3590612411298378818ULL)));
                        arr_66 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_8 + 3] [i_8 + 2])) || (((/* implicit */_Bool) ((long long int) var_4)))));
                        var_42 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    }
                    var_43 ^= (unsigned char)160;
                    var_44 = ((/* implicit */_Bool) arr_65 [i_8] [i_14] [i_16] [i_14] [i_16]);
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        var_45 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)96)))));
                        var_46 = arr_8 [i_8] [i_8] [i_16] [i_19] [i_19 + 3] [i_8 + 2];
                        arr_70 [i_8] [i_19] [i_16] [i_14] [i_8] = ((/* implicit */unsigned short) arr_64 [i_8 - 1] [i_8] [i_16 - 1] [3] [i_16 - 1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 2; i_24 < 10; i_24 += 2) 
            {
                for (unsigned short i_25 = 3; i_25 < 7; i_25 += 3) 
                {
                    {
                        var_47 ^= ((((/* implicit */int) arr_52 [i_24 - 1] [i_24] [i_8] [i_24] [i_8])) != (((/* implicit */int) arr_52 [i_24 + 1] [i_24] [0] [i_24] [0LL])));
                        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24 + 1]))) : (arr_36 [i_8])));
                        var_49 = ((arr_4 [(_Bool)1] [i_8]) ^ (18055778261311596295ULL));
                        var_50 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)43629)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_14] [i_8]))) : (arr_64 [7LL] [i_8] [i_24] [i_8] [i_8]))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [i_8 + 3] [i_14] [i_8] [5U] [i_25])) / (arr_1 [3ULL] [3ULL]))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
    {
        var_51 = ((/* implicit */short) (unsigned char)60);
        arr_80 [i_26] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_12 [i_26] [i_26])))));
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
    {
        arr_84 [i_27] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_14 [i_27] [i_27] [i_27])) & (((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_27] [i_27] [i_27])), ((unsigned short)34203)))))), (((/* implicit */int) ((short) arr_78 [i_27])))));
        var_52 = ((/* implicit */unsigned char) arr_78 [i_27]);
        arr_85 [i_27] [i_27] = (unsigned short)31;
        var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_83 [i_27])) ? (arr_77 [(short)15] [i_27]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_83 [i_27]), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))))));
    }
    var_54 = ((/* implicit */unsigned short) var_3);
}
