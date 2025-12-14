/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216076
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (max((max((max((((/* implicit */unsigned int) 201326592)), (var_4))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) ((((int) var_4)) | (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                arr_5 [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) 2147483623)) : (var_4)))), (5830801294470636890ULL)))) ? (((unsigned int) ((var_5) / (var_4)))) : ((+(max((295370158U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))));
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 + 1] [13])))), (min((262144U), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        arr_16 [i_2] [i_3] [i_4 - 2] [i_4 - 2] = ((/* implicit */short) var_11);
                        var_20 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))))) && (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_1))))))) ? (339903795U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                        arr_17 [(short)13] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32761))))) > (((((/* implicit */_Bool) (unsigned char)6)) ? (var_13) : (var_11)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_4] &= max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_12 [i_2])) ? (var_5) : (((/* implicit */unsigned int) arr_12 [i_3])))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [i_2] [i_2] [2U] [i_2] [i_2] = ((/* implicit */int) max((max((arr_18 [i_2] [i_2] [i_2]), (arr_18 [(short)21] [i_4 - 2] [i_2]))), (arr_18 [i_2] [i_3] [i_7])));
                            var_21 = max((max((((var_16) << (((var_16) - (1831516105U))))), (((/* implicit */unsigned int) (+(var_7)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_2] [i_3] [(unsigned short)6]), (arr_12 [i_2])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_11 [i_6] [i_3] [i_2]))))))));
                        }
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(15762598695796736ULL))))));
                        var_23 -= max((((/* implicit */int) arr_8 [(short)17])), (arr_19 [i_4] [i_4 + 1] [i_4 - 1] [(short)21] [i_4 - 1] [i_4]));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        arr_27 [i_2] = ((/* implicit */short) ((int) arr_22 [i_4]));
                        var_24 = (~((-(((/* implicit */int) arr_25 [i_4 - 1] [i_3] [i_4 - 1])))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)30)) & (((/* implicit */int) arr_6 [i_3])))), (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned long long int) 0)) * (min((((/* implicit */unsigned long long int) var_14)), (1392132717762405861ULL)))))));
                        arr_28 [i_2] [i_2] [(short)0] [i_2] [i_2] [i_2] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) var_5))), (max((((/* implicit */int) arr_22 [i_3])), (arr_15 [19] [(short)11] [i_8])))))), (arr_18 [i_2] [i_2] [i_3])));
                    }
                    arr_29 [i_3] = ((/* implicit */unsigned int) (-(min((arr_15 [i_4 - 1] [i_3] [i_4 + 1]), (var_1)))));
                }
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_34 [i_2] [11U] [10] = min((max((((/* implicit */unsigned long long int) arr_31 [i_2] [6ULL] [i_9])), (0ULL))), (((/* implicit */unsigned long long int) ((var_0) < (arr_15 [i_2] [i_2] [i_3])))));
                    arr_35 [i_9] [(short)19] [i_3] [i_2] = ((/* implicit */short) arr_10 [i_3] [i_3]);
                }
                for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_12))));
                    var_27 = ((/* implicit */_Bool) ((((arr_32 [i_2] [i_3] [i_10]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32266))))) ? (arr_32 [i_2] [i_3] [i_10]) : (max((8924828598679351988ULL), (arr_32 [i_2] [i_2] [i_2])))));
                    var_28 = ((/* implicit */short) var_4);
                }
                for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    arr_42 [11] [11] = var_3;
                    arr_43 [i_11] [i_11] [(_Bool)1] [(short)20] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 177654698U)) ? (((/* implicit */unsigned int) var_0)) : (max((arr_21 [i_2] [i_3] [i_11]), (arr_21 [i_2] [i_3] [i_11])))));
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), ((~(((/* implicit */int) arr_40 [i_2] [i_3] [i_12]))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-8192)), (max((((/* implicit */unsigned long long int) 1397155789)), (arr_41 [i_2] [i_3] [i_11] [i_12])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (var_4)));
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_3] [i_11])))))));
                        arr_48 [i_2] [i_3] [i_11] [i_2] = (((-(arr_46 [i_2] [i_3] [i_3] [i_11] [(unsigned short)17]))) >= (((/* implicit */int) arr_38 [i_2] [(unsigned short)6])));
                    }
                    arr_49 [i_2] [i_2] [i_11] [13U] = ((/* implicit */unsigned int) max((((/* implicit */int) max(((short)0), (((/* implicit */short) var_14))))), (((((/* implicit */int) arr_40 [i_2] [i_11] [i_11])) & (((/* implicit */int) arr_40 [i_11] [i_3] [i_2]))))));
                }
                var_32 = ((short) ((((/* implicit */int) (unsigned short)17855)) + (((/* implicit */int) arr_26 [i_2] [i_2] [i_3]))));
                var_33 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_2] [i_2]))));
            }
        } 
    } 
}
