/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_7 ? (min((min(var_2, var_3)), var_9)) : ((var_4 ? (max(var_2, -25099)) : ((-72 ? -1595232308 : (-2147483647 - 1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [9] [i_2] [i_0] = ((arr_3 [1]) ? (((!(((-53 ? var_10 : (arr_7 [i_0] [i_1] [i_0] [i_3]))))))) : (max(((-33554432 ? 63 : 11499)), ((max(-29248, -27095))))));
                            var_12 = ((var_7 ? (((arr_3 [i_0]) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 - 1]))) : 11499));
                            var_13 = (~((((var_2 >= (arr_4 [i_0]))) ? (arr_9 [i_0] [i_0 - 1]) : (max(var_7, 11499)))));
                            var_14 = (max(((min(var_6, -66))), var_8));
                        }
                    }
                }
                var_15 = (min(var_15, (((((min(-28717, 66))) ? -13603 : 76)))));
                var_16 = (max(var_16, (((28133 ? 1997022492 : 1595232312)))));
            }
        }
    }
    #pragma endscop
}
