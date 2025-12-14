/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((((~((((arr_0 [i_2]) <= (arr_9 [i_1] [i_1] [i_1] [13]))))))) ? ((((min((arr_7 [15] [15] [15]), (arr_2 [i_1])))) ? (((arr_6 [i_0] [11] [i_2]) ? -20589 : 2147483647)) : (-2147483647 - 1))) : ((16384 ? 0 : ((-1 ? 16387 : (arr_7 [17] [17] [i_2]))))));
                    arr_10 [i_0] [i_0] = arr_3 [i_0] [1];
                    var_21 = (-164638624 ? (min((((arr_5 [i_2] [i_1]) ? -16385 : 0)), (((arr_9 [i_0] [i_1] [i_1] [i_1]) | var_3)))) : ((1823236066 ? ((var_3 ? (arr_1 [1]) : var_17)) : (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                }
            }
        }
    }
    var_22 = (max(((~((var_7 ? var_15 : 1)))), 8064));
    var_23 |= var_17;
    #pragma endscop
}
