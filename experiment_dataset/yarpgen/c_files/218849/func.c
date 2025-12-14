/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218849
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1 + 3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_4])) : (((/* implicit */int) arr_8 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) != (arr_5 [i_0] [i_1] [i_2]))))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-5721)))) : (max((((/* implicit */unsigned long long int) var_11)), (var_10))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))))))));
                                var_14 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_9 [i_4] [i_3] [i_2] [i_2] [i_1 + 2] [i_0])), (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                                arr_12 [i_1] [i_2] [i_1] &= ((/* implicit */unsigned int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1] [i_1] [i_1 - 3]);
                                var_15 = ((/* implicit */unsigned int) arr_9 [i_0] [i_1 + 3] [i_4] [i_4] [i_4] [i_4]);
                                var_16 = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2])))))) & (((arr_9 [i_0] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_2]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1])))));
                }
                for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max(((+((-(((/* implicit */int) (signed char)127)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5 - 1] [i_1 + 2]))) >= (((((/* implicit */_Bool) (signed char)62)) ? (arr_10 [i_5 - 1] [i_1] [i_1 - 3] [i_1 + 3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21963))))))))));
                    arr_17 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 4]))))), (min((((/* implicit */unsigned long long int) var_4)), (11969570742957185904ULL)))));
                }
                for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1 - 1] [i_6])))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_3))) ? ((-(arr_10 [i_0] [i_0] [i_0] [i_1 - 3] [i_0] [i_6]))) : (max((6477173330752365712ULL), (((/* implicit */unsigned long long int) 11U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                    {
                        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_6] [i_1 - 2])) ? (((/* implicit */unsigned long long int) max((arr_14 [i_7] [i_7] [i_7] [i_1 - 1]), (arr_14 [i_6] [i_6] [i_6] [i_1 - 1])))) : ((+(var_10)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            var_21 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]))));
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_7] [i_8] = var_9;
                            var_22 = ((/* implicit */unsigned short) (signed char)127);
                            arr_27 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1152921229728940032ULL)));
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_9])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) >= (var_3)))), (arr_21 [i_9] [i_6] [i_1] [i_1 - 1] [i_1] [i_0]))))));
                        arr_30 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_6] [i_9]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_6] [i_9])) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))))) : (max((((/* implicit */long long int) arr_13 [i_1 - 3])), (arr_20 [i_9] [i_6] [i_1] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            {
                                arr_37 [i_1] [i_6] [i_1] &= ((/* implicit */unsigned long long int) max((min(((+(((/* implicit */int) (unsigned char)184)))), (((/* implicit */int) ((14756524178007446998ULL) <= (((/* implicit */unsigned long long int) var_13))))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_6] [i_10] [i_11]))) : (var_9))) < (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_1] [i_1] [i_1 - 4]))))))));
                                var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) / (1056964608)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_1 - 4] [i_12] [i_12] [i_1 - 4] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_6)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (11969570742957185904ULL)))))));
                        var_25 = ((/* implicit */unsigned int) arr_4 [i_0]);
                        arr_41 [i_0] [i_1] [i_12] [i_12] [i_12] = arr_39 [i_12] [i_6] [i_0] [i_12];
                        arr_42 [i_12] [i_0] [i_6] [i_1] [i_12] = ((/* implicit */unsigned int) var_11);
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 2; i_14 < 18; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)168)) ? (575037789U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_14 - 2] [i_1 - 2])))));
                            arr_48 [i_14 - 1] [i_13] [i_6] [i_13] [i_0] = ((/* implicit */unsigned long long int) (signed char)-111);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            arr_52 [i_15] [i_13] [i_6] [i_13] [i_0] = (~(14756524178007446983ULL));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((arr_39 [i_1] [i_1 + 3] [i_15] [i_6]) + (2147483647))) >> (((arr_39 [i_0] [i_1 + 2] [i_15] [i_15]) + (934617392))))))));
                        }
                        arr_53 [i_1 + 1] [i_6] [i_13] = ((/* implicit */unsigned long long int) var_3);
                    }
                }
                var_28 = ((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (min((((18446744073709551613ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8128))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-62)))))))))));
    var_30 |= ((/* implicit */int) var_8);
}
