/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((min(var_7, (var_6 * var_6))) + 2147483647)) >> (var_1 + 3844)));
    var_11 = (min(var_11, (max(var_0, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((var_5 ^ ((max((min((arr_0 [7]), var_2)), (var_9 > var_2)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_1] [17] [i_3]);
                            var_13 = (min(((-17077 ? (min(var_4, var_9)) : -17077)), (max((min(var_6, (arr_8 [i_0] [19] [i_2] [i_2]))), 20))));
                            var_14 = ((+(((arr_7 [i_2]) ? -var_0 : var_4))));
                            var_15 = var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
