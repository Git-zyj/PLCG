/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (((((((~(arr_7 [1])))) ? (arr_6 [i_0] [i_0] [i_2]) : var_5)) <= ((max((arr_4 [i_0] [i_3]), 65535)))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = arr_3 [i_0 + 3] [i_1] [i_1];
                            var_19 |= (min(((((((arr_3 [i_0 + 4] [i_1] [i_2]) >= var_17)) && (var_5 * var_1)))), ((((max(32, (arr_7 [i_0])))) ? (~70) : var_5))));
                            var_20 = (arr_5 [i_0] [i_0]);
                        }
                    }
                }
                var_21 = (((((166 ? ((-4 ? 8610 : 88)) : ((var_3 ? 0 : 255))))) ? (min((max(27192, var_5)), var_8)) : var_8));
                var_22 = (arr_0 [i_0 + 1]);
            }
        }
    }
    var_23 = ((~((min(10, var_14)))));
    #pragma endscop
}
