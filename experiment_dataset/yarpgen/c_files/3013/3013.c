/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = (max(var_11, -1));
                            var_12 += ((-(~17517508606135783419)));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_13 [i_0] [i_1] = (((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) != 16244929757205001195));
                    arr_14 [i_0] [i_0] [i_0] [i_4] = (~-493325039782093822);
                    var_13 = var_0;
                }
                arr_15 [i_0] = (max((arr_2 [i_1] [i_0 - 1] [i_0 - 1]), ((-(arr_2 [i_0 - 1] [i_0 - 1] [3])))));
            }
        }
    }
    var_14 = (~(3931 * var_1));
    #pragma endscop
}
