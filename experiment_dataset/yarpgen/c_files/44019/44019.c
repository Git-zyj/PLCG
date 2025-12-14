/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_2 [i_0] [i_0]) && 52));
                                var_19 = ((((((((1328702952665634810 ? var_12 : 1))) ? -17 : (((((arr_10 [i_4] [i_4] [i_1] [i_4] [i_2] [i_1] [i_4]) + 2147483647)) >> (-26 + 43)))))) ? (max((((arr_2 [i_0] [i_0]) ? var_11 : var_13)), ((((arr_4 [i_0] [i_1] [6]) > 6207319596710513125))))) : (((arr_7 [i_2]) | (min((arr_5 [i_3] [i_4]), var_12))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_20 = (min(var_20, -79503586996896367));
                                var_21 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((var_11 ? var_0 : (((-5 / (arr_1 [i_9]))))))) > (((arr_14 [1] [1] [i_9] [i_10]) | var_7)))))));
                                arr_27 [i_0] [i_0] [i_8] [i_8] [i_0] = ((var_2 ? (((arr_13 [i_1]) >> (((arr_8 [i_10] [i_0] [i_8] [i_0] [i_0] [i_0]) - 4031961498)))) : (((((arr_13 [i_0]) || (arr_13 [i_10])))))));
                                var_23 = (max(var_23, ((((((((((min(-26, (arr_23 [i_10] [i_1] [i_1] [i_0]))))) == (((arr_5 [i_9] [i_10]) ? (arr_0 [i_9]) : var_11)))))) + (min((((arr_16 [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_25 [i_0] [8] [i_1] [i_1] [0] [8] [8]))), var_12)))))));
                                arr_28 [11] [1] [4] [i_8] = ((((min((arr_23 [i_0] [i_8] [i_8] [i_10]), (((-17 != (arr_13 [i_1]))))))) || ((!((min(var_12, var_12)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_13;
    #pragma endscop
}
