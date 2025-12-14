/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211785
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_3] [i_1] [i_1] [i_0]), (var_3)))) ? (((/* implicit */int) min((arr_7 [i_0] [5ULL] [5ULL]), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (min((((/* implicit */int) (_Bool)0)), (arr_8 [i_1] [i_2] [(_Bool)1])))))) ? (min((((/* implicit */unsigned int) arr_8 [i_1] [i_2 - 1] [i_2])), (arr_5 [i_0] [i_1] [i_2 + 1] [(unsigned short)5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58956))))))));
                        var_11 *= ((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
                        arr_11 [i_1] = var_8;
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 2] [i_3])) || ((!((_Bool)1)))))));
                        arr_13 [i_3] [(short)12] [i_1] [(unsigned short)5] [(unsigned short)12] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)6585), ((unsigned short)17346)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_7 [i_3] [i_2] [(_Bool)1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : ((-(arr_1 [(unsigned short)0])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                var_12 -= (~(var_1));
                var_13 *= ((/* implicit */unsigned long long int) arr_5 [i_0] [i_4] [i_4] [1ULL]);
            }
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_14 = (unsigned short)6580;
                var_15 = arr_16 [i_0] [i_6];
                arr_22 [i_0] [i_4] [i_4] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (unsigned short)10572)), (1607872511U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    arr_27 [i_0] [i_0] [i_4] [i_4] [i_7] [i_7] = ((/* implicit */short) arr_26 [(unsigned short)5] [i_0] [i_0] [(unsigned short)5] [i_7]);
                    arr_28 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_4] [i_6] [i_6] [i_7])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_4] [i_6])))));
                }
            }
            /* vectorizable */
            for (unsigned int i_8 = 3; i_8 < 11; i_8 += 4) 
            {
                arr_31 [i_8] [i_8 + 1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)10572))));
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    arr_34 [i_8] [i_8] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_8 [i_9] [i_8 - 1] [i_8 + 2]))));
                    var_17 ^= ((/* implicit */long long int) (unsigned short)10573);
                }
                for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    arr_37 [i_0] [i_4] = ((/* implicit */short) (~(arr_5 [i_0] [i_4] [(unsigned short)5] [i_0])));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_4])) && (((/* implicit */_Bool) var_7))));
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(2131118292)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))) : ((-(17576028751660673728ULL)))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)5490)))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    arr_44 [i_0] [(_Bool)1] [i_4] [i_8 + 1] [i_8] [i_8] = ((unsigned long long int) ((arr_40 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0]) & (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
                    arr_45 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_8] [i_8 - 2] [i_8] [i_12] [i_12]))));
                }
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        arr_52 [i_0] [i_4] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_8] [i_4] [i_8 - 1] [i_4])) || (((/* implicit */_Bool) arr_9 [i_8] [i_4] [i_8 + 2] [i_8 + 1]))));
                        arr_53 [i_4] [i_4] [i_8 + 3] [i_14] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36982)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36989))) : (2687094784U)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_0] [i_4] [i_14]))));
                    }
                    var_22 *= ((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_0] [i_0]);
                    arr_54 [i_4] [i_8 - 2] [i_8 - 2] [i_4] [i_0] [i_4] = ((/* implicit */short) var_6);
                    arr_55 [(unsigned short)4] [(unsigned short)4] [i_4] [i_13] [i_4] = ((/* implicit */short) 24);
                }
                arr_56 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_8 + 2] [i_8 + 2] [i_8 + 4]))));
                arr_57 [i_8] [i_4] [i_4] [i_0] = ((/* implicit */short) ((unsigned long long int) var_9));
            }
            for (short i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                arr_61 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) arr_23 [(short)7] [i_15] [i_0] [i_0] [i_0]);
                arr_62 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) max(((-((+(3588782875U))))), (((/* implicit */unsigned int) var_0))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        {
                            var_23 *= arr_32 [i_17] [i_17] [i_17];
                            var_24 ^= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_0] [i_0] [i_17] [i_16] [i_17])))));
                        }
                    } 
                } 
            }
            arr_69 [i_0] [i_4] [i_0] = ((/* implicit */short) var_1);
        }
        for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 1) 
        {
            arr_72 [(unsigned short)2] [(unsigned short)2] |= ((/* implicit */unsigned int) max((((((unsigned long long int) arr_42 [10U] [i_18])) ^ (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_35 [i_18 + 2] [(short)0] [i_18] [(_Bool)1] [(short)0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_18] [0ULL] [i_18] [i_18 - 1]))))) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) var_0)))))));
            var_25 *= ((/* implicit */int) min((5065832330990881248ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
        }
        arr_73 [i_0] [i_0] = ((/* implicit */short) min(((+(536870911))), (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_19 = 2; i_19 < 12; i_19 += 1) 
    {
        arr_77 [i_19] = ((/* implicit */int) var_0);
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) arr_36 [i_19] [i_19]))))) || (((/* implicit */_Bool) -9223372036854775799LL)))) || (((/* implicit */_Bool) var_1)))))));
        var_27 *= ((/* implicit */_Bool) min(((-((-(var_1))))), (((/* implicit */unsigned int) (signed char)116))));
    }
    var_28 = ((/* implicit */signed char) var_8);
    var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58956))) >= (-9223372036854775799LL)));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) | (((((/* implicit */_Bool) var_6)) ? (var_4) : (10304521861340496890ULL))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_4))))))));
}
