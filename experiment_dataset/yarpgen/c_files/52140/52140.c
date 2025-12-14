/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] = ((var_4 ? 2172108941 : (arr_10 [i_2] [i_2] [i_2 + 1])));
                        var_11 = var_2;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_14 [3] [i_2] [3] [i_2] [i_0] = (max(34359738367, (max(1, var_1))));
                        var_12 = (max((((0 ? 3015781759 : 4080))), (arr_7 [i_0])));
                        var_13 = ((((2526996931 || var_7) ? (arr_2 [7] [i_2 + 3]) : -828257655)) >> (arr_12 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 3] [i_4] [3]));
                        var_14 = (!var_2);
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_2] [i_1] [i_1] [i_1] = (((-5716384497603101641 ? 6168367555520785509 : 18446744073709551615)));
                        var_15 = (arr_6 [i_2 + 2] [i_2]);
                    }
                    arr_20 [i_1] [i_1] [i_2] = 33776997205278720;
                    var_16 = (min(var_16, var_2));
                }
            }
        }
    }
    #pragma endscop
}
