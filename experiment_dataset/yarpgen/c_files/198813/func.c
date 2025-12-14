/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198813
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 3])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_12);
        arr_5 [i_0] = ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        arr_6 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((unsigned int) arr_1 [i_0])) : ((+(676042771U)))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((short) 129517430U));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_18 [i_1 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) (-(3395705178604936140ULL))));
                    arr_19 [10U] [i_2] [22U] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(arr_11 [i_1] [i_1]))))));
                    arr_20 [i_1] &= ((/* implicit */unsigned short) min((var_6), (max((((((/* implicit */_Bool) 2106039103U)) ? (384939870U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22110))))), (((unsigned int) var_1))))));
                    arr_21 [i_1] = ((/* implicit */unsigned short) ((short) ((short) (short)-22134)));
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((arr_11 [i_1] [i_1]) / (arr_15 [i_1] [i_1] [i_1])))) ? ((~(arr_9 [i_1 - 1]))) : ((~(arr_12 [i_1])))))));
        arr_23 [i_1] |= ((((/* implicit */_Bool) var_6)) ? ((-(((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) ((int) arr_12 [i_1 + 1]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            {
                arr_28 [19U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) % (((/* implicit */int) var_12))))) ? (((min((var_0), (4130959045U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [12U] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3910027426U) <= (526535126U)))))));
                arr_29 [i_4] [i_4] [i_4] |= ((/* implicit */int) ((unsigned int) arr_12 [i_4]));
                arr_30 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) var_12);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (unsigned int i_7 = 2; i_7 < 24; i_7 += 2) 
        {
            {
                arr_36 [i_6] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(arr_33 [i_6] [i_6] [i_7])))) ? (min((((/* implicit */unsigned int) (unsigned short)64721)), (4130959045U))) : (arr_34 [21] [21] [i_7]))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((-(((/* implicit */int) var_3)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            arr_43 [i_6] [18U] [18U] [18U] [(unsigned short)21] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) >= (arr_33 [i_6] [i_7] [i_8])))) < (((((/* implicit */_Bool) arr_41 [i_6] [i_6] [i_8 - 2] [(short)8] [i_6])) ? (var_11) : (var_11)))))) != (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 733772358)), (arr_33 [i_9] [i_8] [i_6])))) || (((/* implicit */_Bool) ((unsigned int) arr_37 [23ULL] [23ULL] [i_8 + 2]))))))));
                            arr_44 [i_7 + 1] [i_8 + 3] [i_9] = ((/* implicit */int) (((+(((((/* implicit */_Bool) 1916240421U)) ? (var_4) : (3835950398U))))) & ((+((-(arr_35 [i_6])))))));
                            arr_45 [i_8] [10] [i_6] [i_7 + 1] [i_6] [i_7 + 1] = max((((unsigned int) arr_32 [(unsigned short)11])), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 151268953U)) || (((/* implicit */_Bool) 705279902U)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
