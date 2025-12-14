/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((((var_6 ? 166 : 1243206561))), 18446744073709551601))) & var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [4] = (((((var_4 ? var_1 : var_0))) ? (max((arr_13 [i_2 - 3]), (min(var_14, var_5)))) : 3051760711));
                            arr_15 [i_1] [i_2 - 2] [i_1] [i_0] [i_1] = var_13;
                        }
                    }
                }
                arr_16 [i_0] [12] = ((((((arr_7 [i_0] [i_1]) & (arr_7 [i_0] [i_0])))) ? (!3051760727) : (((arr_11 [3] [i_1] [i_1] [i_1] [i_1] [i_1]) ? 18446744073709551601 : 4983))));
            }
        }
    }
    var_16 = var_1;
    var_17 = var_0;
    #pragma endscop
}
