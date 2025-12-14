/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26506
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31527)) ? (-5050399082501348887LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29831)))))) ? (((/* implicit */int) max((arr_1 [i_0 + 3]), (arr_1 [i_0 + 3])))) : ((+(((/* implicit */int) (unsigned short)13445))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0 + 3] [i_1] = ((/* implicit */unsigned long long int) var_16);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(0))))));
                            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [0LL] [i_2] [0LL] [i_4])) || (((/* implicit */_Bool) var_7))))) | (((/* implicit */int) var_13))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (var_0)));
                            arr_14 [i_0] [i_1] [i_1] [(unsigned short)8] [i_3] [i_4] [i_3] = ((/* implicit */int) (unsigned short)9504);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((arr_12 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) -8548032948321187458LL)) ? (((/* implicit */long long int) arr_12 [i_3])) : (arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [(_Bool)1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)3580))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned short) (unsigned char)44);
                            var_22 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) 1574623421U);
                arr_20 [i_1] [i_1] [i_1] [i_2] = 1835008U;
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_23 [i_1] = ((/* implicit */_Bool) arr_7 [i_1]);
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 2] [i_0 + 2] [16LL] [16LL] [i_0 + 1]))) : (arr_12 [i_1])));
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    arr_27 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_8] [9LL])) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_8])))));
                    arr_28 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)770))));
                    arr_29 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */int) ((unsigned short) (unsigned char)243));
                    var_24 = ((/* implicit */unsigned long long int) ((long long int) arr_16 [i_1] [i_1]));
                    arr_30 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) arr_4 [i_1]))));
                }
                for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    arr_33 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) > (((/* implicit */int) (_Bool)1))))) % (((/* implicit */int) (unsigned short)8))));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1])) ? (((/* implicit */long long int) 2147483624)) : (arr_13 [i_0 + 2] [i_1 + 1] [i_1] [i_1] [i_1 + 1])));
                    arr_34 [17] [i_1] [20U] = 9223372036854775807LL;
                    arr_35 [(unsigned short)20] [i_2] [i_1] [4U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((unsigned short) var_4)))));
                    var_26 = ((/* implicit */_Bool) arr_0 [i_1] [(unsigned short)14]);
                }
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        arr_41 [i_0] [i_2] [i_10] [i_1] = ((((/* implicit */_Bool) arr_40 [i_0 - 1] [i_0] [i_0 + 2] [i_1 + 1] [i_11 + 1])) ? (arr_10 [i_0 + 2] [i_0 + 2] [i_1] [i_1 - 1]) : (((/* implicit */long long int) 3785517361U)));
                        var_27 *= ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) < (arr_24 [i_11]))) ? (var_4) : (((/* implicit */unsigned long long int) arr_21 [i_0 + 2] [i_0] [i_0 + 2] [i_0])));
                        arr_42 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_26 [i_0 + 3] [i_0 + 3]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)11));
                        arr_47 [i_1] [i_2] [i_1] [i_12] = ((((/* implicit */_Bool) arr_37 [i_0])) ? (arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */int) (short)27547)));
                        arr_48 [i_0] [i_2] &= ((/* implicit */signed char) ((_Bool) 9223372036854775807LL));
                        arr_49 [i_0] [i_1] [i_0] [i_10] [i_12] [i_12] = ((short) ((((/* implicit */_Bool) var_9)) ? (arr_45 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_1))));
                    }
                    var_29 += ((/* implicit */unsigned short) ((long long int) 0LL));
                    var_30 -= ((/* implicit */unsigned short) arr_24 [i_0 + 3]);
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0 + 2] [i_0 + 3] [i_1 - 1] [i_0 + 2])) ? (arr_32 [i_0] [i_0 - 1] [i_1 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) 3746456418U)))))));
                }
            }
            /* LoopNest 3 */
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                for (int i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (long long int i_15 = 1; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_58 [i_0] [i_0] [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_13] [i_14] [16])) ? (min((var_8), (((/* implicit */unsigned long long int) ((int) -1497357533))))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1])) ? (3490922687269118264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            arr_59 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), (((arr_38 [i_0] [i_1 + 1] [i_13] [i_1 - 1] [i_15]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1] [i_15 + 1])))))));
                        }
                    } 
                } 
            } 
            arr_60 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]);
        }
    }
    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551589ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
    var_33 = ((/* implicit */long long int) max((var_33), (max((((/* implicit */long long int) (short)258)), (3243552516209196548LL)))));
    var_34 = ((/* implicit */int) var_1);
}
