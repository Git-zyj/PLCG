/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230300
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] = max((max((arr_2 [i_0]), (arr_0 [i_1]))), (arr_3 [i_0] [i_0]));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_0] [i_1] [i_0] = min((((/* implicit */unsigned int) ((max((arr_10 [i_4] [i_4] [i_2] [i_4] [i_4]), (arr_8 [i_0]))) > (arr_2 [i_3])))), (((min((arr_0 [i_0]), (arr_3 [i_0] [i_0]))) * (max((arr_9 [i_4] [i_2] [i_2] [i_1]), (arr_11 [11U] [i_1] [11U] [15U] [i_1] [i_1]))))));
                                arr_14 [i_4] [i_4] [6U] [i_4] [i_0] = arr_6 [i_4] [i_4] [i_4];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                arr_21 [i_5] [i_5] [i_6] = arr_18 [i_6];
                /* LoopNest 3 */
                for (unsigned int i_7 = 2; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_5] [22U] [22U] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_16 [i_7]) < (arr_20 [i_5])))) >> (((max((3011808927U), (((/* implicit */unsigned int) ((2283072705U) != (arr_15 [i_5])))))) - (3011808917U)))));
                                arr_30 [i_5] [i_8] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_9])) || (((/* implicit */_Bool) arr_17 [i_5]))));
                                arr_31 [i_9] [i_9] [i_6] [i_7] [i_6] [i_5] [i_5] = max((arr_19 [i_6] [i_7 - 1]), (arr_17 [i_9]));
                                arr_32 [23U] [23U] [i_6] [i_8] [i_9] = max((arr_16 [i_5]), (arr_26 [i_5]));
                                arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = (i_6 % 2 == 0) ? (((arr_24 [i_7] [i_7]) << (((((arr_22 [i_5] [i_6]) >> (((((arr_15 [i_6]) - (arr_17 [i_6]))) - (796720942U))))) - (17768U))))) : (((arr_24 [i_7] [i_7]) << (((((((arr_22 [i_5] [i_6]) >> (((((arr_15 [i_6]) - (arr_17 [i_6]))) - (796720942U))))) - (17768U))) - (28469U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_10 = 3; i_10 < 15; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                {
                    arr_44 [i_10] [i_10] [i_10] = arr_2 [i_10];
                    arr_45 [i_10 - 3] [i_10 - 3] [i_12] = arr_23 [i_10] [i_10];
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 16; i_14 += 2) 
                        {
                            {
                                arr_53 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1] = arr_40 [i_10];
                                arr_54 [i_10] [7U] [i_12] [i_13 + 2] [9U] = arr_41 [i_12];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        for (unsigned int i_16 = 1; i_16 < 15; i_16 += 2) 
        {
            for (unsigned int i_17 = 1; i_17 < 17; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 1; i_18 < 16; i_18 += 2) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 16; i_19 += 1) 
                        {
                            {
                                arr_67 [i_15] [i_15] [i_15] [i_16] [8U] [i_18 + 2] [i_15] = ((((min((arr_3 [i_15] [i_15]), (arr_1 [i_16] [i_16]))) + (((arr_64 [6U]) - (arr_17 [i_15]))))) | (arr_11 [i_15] [i_16 + 3] [i_17] [i_18] [i_19 - 2] [i_18 - 1]));
                                arr_68 [i_15] [i_16 + 1] [i_17] [i_17] [i_17] [i_17] = arr_58 [i_15];
                            }
                        } 
                    } 
                    arr_69 [i_15] [i_16] [i_16] [i_15] = arr_2 [i_15];
                }
            } 
        } 
    } 
    var_11 = var_1;
}
