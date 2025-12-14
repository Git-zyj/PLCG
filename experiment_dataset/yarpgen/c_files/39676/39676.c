/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = ((((((arr_2 [i_0] [i_0]) ? var_11 : (arr_0 [i_0])))) ? var_0 : (((((var_11 ^ (arr_1 [7] [7])))) ? var_9 : var_4))));
        var_15 = 3574619158126367989;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = ((-(arr_0 [i_2])));
                                var_17 *= ((-((~(!var_3)))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_2] [i_2] = var_10;
                    arr_17 [i_0] [6] [i_2] = var_0;
                }
            }
        }
        var_18 = ((!(((~(arr_10 [12] [i_0] [8] [8] [i_0] [i_0]))))));
    }
    var_19 *= ((9223372036854775807 ? 2 : var_2));
    var_20 |= 242;
    #pragma endscop
}
