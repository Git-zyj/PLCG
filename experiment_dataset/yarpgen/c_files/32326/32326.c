/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_4 ? (~var_16) : (!15273405389257311522))) + 2147483647)) << (((1 & 1977210551739485288) & (-1 | var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = var_6;
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] = (max(65, ((~(arr_8 [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_2 + 1] [i_2 - 3])))));
                        }
                    }
                }
                var_20 = (max(var_20, var_11));
            }
        }
    }
    #pragma endscop
}
