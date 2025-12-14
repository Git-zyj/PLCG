/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (max(var_14, -var_1));
                arr_4 [i_0] [i_1] = (!((((arr_1 [i_0] [i_0]) - ((var_13 ? 255 : (arr_0 [i_0])))))));
                var_15 = (max((((min(0, 1)) ? (!var_3) : (arr_2 [i_0] [i_1]))), (((((var_9 ? var_0 : var_10))) ? (!var_13) : (min(-13, 0))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (arr_5 [i_0] [i_1] [i_1] [i_1]);
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (max(0, 18446744073709551615));
                            var_17 = (max(((((arr_6 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_6 [i_0])))), (((((1 ? (arr_5 [i_3] [i_1] [i_1] [i_0]) : var_4))) ? (((~(arr_1 [i_0] [i_0])))) : var_11))));
                            arr_11 [i_0] [i_1] = -32;
                        }
                    }
                }
                var_18 = ((((~((var_9 ^ (arr_1 [i_0] [i_0]))))) + (max(-1, (-22 - var_6)))));
            }
        }
    }
    var_19 = -var_2;
    var_20 = var_8;
    var_21 &= (((((((~1) + 2147483647)) << (var_1 == var_3))) ^ -5));
    var_22 = ((((((var_7 ? var_11 : var_7)) / var_13)) - var_12));
    #pragma endscop
}
