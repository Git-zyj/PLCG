/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237898
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (+(((arr_1 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)7])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) var_17);
            var_22 = ((/* implicit */_Bool) arr_3 [i_1] [i_0 - 2] [i_0 - 1]);
            arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) ((unsigned short) arr_3 [i_0 + 2] [i_0 + 1] [i_0]));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 1) /* same iter space */
            {
                arr_9 [(unsigned char)1] [i_0] [(unsigned char)10] [i_2 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_18))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((-(arr_1 [i_0])))));
                arr_10 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2] [(unsigned char)11] [i_2 + 2])) ? (var_3) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)0] [i_2 - 4] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [12U] [i_0]))))));
                var_23 = ((/* implicit */unsigned int) arr_8 [i_0] [i_1] [6U] [i_0]);
                arr_11 [(unsigned char)5] [i_0] [i_2] = ((/* implicit */unsigned short) (~(var_4)));
            }
            for (unsigned char i_3 = 4; i_3 < 12; i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(unsigned char)6] [4U] [i_3] [i_0 + 1])))))));
                arr_15 [(unsigned short)8] [(unsigned short)8] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0]))))) >> (((1099511627264LL) - (1099511627249LL)))));
            }
        }
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [6U] [(unsigned char)9] [i_0] [i_0 + 2])) != (((((/* implicit */int) var_9)) - (((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_25 = arr_16 [i_4] [i_4];
        arr_18 [i_4] = ((/* implicit */long long int) var_12);
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_21 [(unsigned short)2]);
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) arr_16 [i_5] [i_6]);
        }
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) <= (((/* implicit */int) arr_16 [i_5] [i_7]))));
            var_28 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_28 [(unsigned char)10] [i_7] [i_7])))))));
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                arr_33 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_0))))));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 2; i_9 < 16; i_9 += 3) 
                {
                    var_29 = ((/* implicit */unsigned char) ((unsigned short) var_9));
                    var_30 = ((/* implicit */unsigned char) arr_28 [5] [13U] [i_5]);
                }
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    arr_40 [i_8] [i_7] [15LL] [i_8 + 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4940)) - (var_6)));
                    var_31 = ((/* implicit */_Bool) ((5833611287880904055ULL) >> (((arr_34 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [(unsigned short)2] [i_8 + 1]) - (4211579454U)))));
                    var_32 = ((/* implicit */_Bool) var_11);
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((12613132785828647583ULL) >> (((var_6) - (1085197532)))))) ? ((~(var_17))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    arr_44 [i_8] [3U] [(unsigned char)2] [i_8] = ((/* implicit */int) var_9);
                    var_34 &= ((/* implicit */long long int) (~(2128487461866161814ULL)));
                }
                var_35 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_23 [i_5] [i_7] [10ULL])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                arr_45 [i_8] = ((/* implicit */unsigned char) var_1);
            }
            for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 3; i_13 < 14; i_13 += 1) 
                {
                    arr_50 [i_5] [8LL] [6LL] [i_5] [i_5] = ((((((/* implicit */int) var_14)) & (((/* implicit */int) arr_46 [i_13 + 1] [(unsigned char)8] [i_13 + 1])))) | (((/* implicit */int) ((_Bool) var_6))));
                    arr_51 [10LL] [10LL] [10LL] [i_13] [i_12] [12ULL] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))));
                }
                var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_15))));
            }
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_17)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [(unsigned short)2])))))));
            /* LoopSeq 2 */
            for (unsigned short i_14 = 3; i_14 < 15; i_14 += 1) 
            {
                arr_55 [i_14] = ((/* implicit */unsigned int) var_3);
                var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                arr_56 [15ULL] [i_14] [i_14] = ((/* implicit */unsigned int) arr_42 [i_14 + 3]);
            }
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                var_39 = ((/* implicit */unsigned long long int) arr_49 [(unsigned short)4]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    for (int i_17 = 4; i_17 < 14; i_17 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) var_15);
                            var_41 = ((/* implicit */long long int) arr_38 [i_15]);
                        }
                    } 
                } 
                var_42 = var_6;
                arr_66 [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) >= (var_3))) ? (16318256611843389801ULL) : (((/* implicit */unsigned long long int) arr_34 [i_5] [i_7] [i_5] [14U] [(unsigned short)8] [i_7]))));
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 18; i_18 += 1) 
                {
                    arr_71 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_63 [(short)14] [i_7])) ? (((var_13) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [(unsigned char)8] [(unsigned short)10] [(short)17] [(unsigned short)10]))))) : (arr_58 [i_5] [(unsigned short)1] [i_5])));
                    var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))) % (((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */int) var_13))))));
                }
            }
        }
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
        {
            arr_74 [i_19] = ((/* implicit */unsigned long long int) var_19);
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_6) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((arr_29 [9U] [16] [i_19]) / (((/* implicit */int) arr_36 [i_19]))))));
            arr_75 [i_19] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_12)))));
            var_45 = ((unsigned long long int) arr_17 [i_5]);
            var_46 *= ((/* implicit */unsigned char) ((unsigned short) arr_54 [i_5] [i_5] [i_19] [10]));
        }
    }
    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_7)))) : (((/* implicit */int) var_11))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) var_2)), (var_19)))))))));
    var_48 = (~(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)2547), (((/* implicit */unsigned short) var_11)))))))));
}
