/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = var_14;
                                arr_16 [i_3 - 1] [i_3 - 1] [i_2] = (((!var_13) % ((((min(var_18, (arr_12 [i_0] [i_0] [18] [i_3 - 1] [1]))) < var_12)))));
                                var_19 ^= ((((max((arr_11 [14] [i_1] [16] [i_2 + 2] [i_1 + 1]), (arr_11 [i_0] [i_1] [i_0] [i_2 - 2] [i_1 + 1])))) ? (((arr_11 [i_0] [8] [i_3] [i_2 - 2] [i_1 + 1]) ? (arr_11 [i_0] [i_2 - 1] [i_2] [i_2 - 3] [i_1 - 1]) : (arr_11 [i_1] [i_1] [i_2] [i_2 - 3] [i_1 - 1]))) : ((min((arr_11 [1] [i_1 - 1] [i_2 + 1] [i_2 + 2] [i_1 + 1]), (arr_11 [i_0] [i_2] [14] [i_2 - 2] [i_1 - 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 ^= max(var_8, (arr_13 [i_2 + 1] [i_2] [i_2] [i_2]));
                                var_21 = (min(var_5, (((!((min(65527, (arr_22 [11] [i_1] [i_1] [i_1] [16] [i_1] [i_1])))))))));
                                arr_23 [i_0] [1] [i_2] [i_5] [i_6] = (arr_18 [i_0] [i_1 + 1] [7] [11]);
                                var_22 = ((((((!4) % var_17))) % (min((max(var_2, var_11)), ((min(1, 228)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 52;
    var_24 = ((~var_18) ? ((((max(var_1, var_12)) >= (((max(var_18, var_12))))))) : var_13);
    #pragma endscop
}
