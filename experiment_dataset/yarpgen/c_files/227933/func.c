/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227933
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)-31219))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((1381752857U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-19189)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)12082), ((short)(-32767 - 1)))))) : (min((0U), (((/* implicit */unsigned int) (short)12066)))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (short)19188)) + (((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_20 [i_4] [(short)2] [i_4] [i_3] [i_3] [i_3] [i_4] |= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_5])) : (((/* implicit */int) (unsigned short)0))))))));
                                arr_21 [i_2] [i_2] [i_5] [i_2] [i_6] [i_2] = ((/* implicit */short) var_8);
                                arr_22 [i_2] [(short)11] [i_4] [i_5] = ((/* implicit */short) (~(max((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) arr_4 [i_5] [i_6])))), (((/* implicit */int) ((short) -1360911722)))))));
                                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) max((arr_8 [i_4]), (arr_7 [i_2 + 1])))) : ((-(((/* implicit */int) arr_2 [i_3])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4223950007U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-8616))))))))));
                                arr_23 [i_2 - 1] [i_3 - 1] [i_5] [i_4] [i_5 - 3] [i_5] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_3 - 3] [(unsigned short)0])) ? (arr_1 [i_3 + 1] [i_2]) : (((/* implicit */int) arr_7 [i_5 - 2]))))));
                            }
                        } 
                    } 
                    arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_9 [i_3 - 3])) || (((/* implicit */_Bool) (short)12082))))));
                    arr_25 [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)26320)) - ((+(max((((/* implicit */int) var_11)), (-1124310864)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35568)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) arr_7 [(unsigned short)11]))))) ? (max((var_8), (((/* implicit */int) (short)-32748)))) : (((/* implicit */int) max((arr_14 [i_2 - 1] [i_2]), (arr_7 [i_2 + 1]))))))) : (((unsigned int) 962466287))));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) 3327300657U))));
        arr_28 [i_7] = max((((/* implicit */int) ((short) ((unsigned int) 1433197748U)))), (var_10));
    }
    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */short) ((((/* implicit */int) (short)32764)) <= (((/* implicit */int) (unsigned short)1792))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) min((((((/* implicit */int) min(((short)18108), ((short)30969)))) + (((((/* implicit */_Bool) (short)18115)) ? (((/* implicit */int) (short)19198)) : (((/* implicit */int) var_16)))))), (((((/* implicit */_Bool) (unsigned short)1984)) ? (((/* implicit */int) (unsigned short)1980)) : (((/* implicit */int) (unsigned short)8191))))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) arr_38 [i_11 - 1] [i_9] [i_8 - 1] [i_8])) ? (arr_38 [i_11 + 1] [i_11 + 1] [i_8 + 2] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30870)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)29956))))))))));
                    }
                } 
            } 
        } 
    }
}
