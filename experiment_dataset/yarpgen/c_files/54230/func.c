/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54230
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (var_3)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50799))))));
                                arr_13 [i_1] = ((/* implicit */short) min((((/* implicit */int) max((arr_6 [i_0 - 2] [i_0] [i_2 - 1] [i_1]), (arr_6 [i_0 - 1] [i_2] [i_2 + 3] [i_3])))), ((-(((/* implicit */int) (unsigned short)19797))))));
                                arr_14 [6U] [i_2] [i_1] [i_2] [i_3] [(signed char)14] [i_4] = ((/* implicit */unsigned int) (-((-(max((var_3), (4603162899655518367ULL)))))));
                                arr_15 [i_2] [i_2] [i_3] [i_2 + 3] [i_2] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2]))) : (arr_1 [i_0 - 4]))), (min((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0 - 3]))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) 10854800234444198837ULL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        arr_30 [i_8] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 79169837U)), (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned short)2271))))))) ? (((/* implicit */unsigned long long int) ((-2031742369) - (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (signed char)-29)))))))) : (((4603162899655518367ULL) - (((/* implicit */unsigned long long int) arr_28 [i_5] [22U] [i_7] [i_8]))))));
                        arr_31 [i_5] [i_5] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2589690272U)) ? (((/* implicit */unsigned long long int) var_7)) : (18446744073709551598ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) var_1))))) % (((/* implicit */int) ((signed char) var_3)))))) : (max((((((/* implicit */_Bool) 5199913210693161172ULL)) ? (arr_28 [i_5] [i_6] [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))), (max((((/* implicit */unsigned int) (unsigned short)2271)), (4294967285U))))));
                        arr_32 [i_5] [i_6] [i_7] = max((arr_29 [i_7] [i_7 + 2] [i_5] [i_7 - 1]), (((/* implicit */unsigned int) arr_26 [i_5])));
                        arr_33 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (signed char)33)), (((var_10) << (((var_10) - (13551965620508906425ULL)))))))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_40 [i_10] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((unsigned int) arr_26 [i_9 - 1]))));
                            arr_41 [i_10] [i_6] = ((/* implicit */unsigned short) ((unsigned int) max((min((((/* implicit */unsigned long long int) 724683895)), (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (1409756290U)))))));
                            arr_42 [i_5] [i_6] [i_5] [i_5] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((3055160453U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 2) 
                        {
                            arr_45 [i_5] [i_6] [i_7] [i_5] [i_11] = ((/* implicit */short) var_6);
                            arr_46 [8U] [22U] [i_7] [22U] [i_11] = ((/* implicit */unsigned int) 13246830863016390443ULL);
                        }
                        arr_47 [i_5] [i_6] [i_5] [i_6] [i_9] = ((/* implicit */short) (((-(2111261062U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (2147483637))))))))));
                        arr_48 [(unsigned short)2] [(unsigned short)2] [i_7] [i_9 + 3] = ((/* implicit */signed char) var_4);
                        arr_49 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_37 [i_5] [i_7] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7]))) : (min((0ULL), (((/* implicit */unsigned long long int) var_9))))));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        arr_52 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_7)), (4145016627036974897ULL)));
                        arr_53 [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(3009832054U)));
                    }
                    arr_54 [i_5] [i_5] [i_6] [i_7] = max((max((arr_39 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_5]), (5U))), (((/* implicit */unsigned int) ((unsigned short) arr_39 [i_7 + 3] [i_7 - 1] [i_7 + 1] [i_5]))));
                    arr_55 [i_5] [(signed char)6] [12U] = max((min((((18446744073709551615ULL) / (var_10))), (((/* implicit */unsigned long long int) (unsigned short)65130)))), (((/* implicit */unsigned long long int) (-(1985505036U)))));
                    arr_56 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((short) (+(max((arr_28 [i_5] [i_5] [i_6] [i_7]), (((/* implicit */unsigned int) (unsigned short)33368)))))));
                    arr_57 [i_5] [i_5] [17U] = ((/* implicit */signed char) max((((/* implicit */int) arr_23 [i_5] [20U])), (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63113))) - (1ULL))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) 5199913210693161173ULL));
}
