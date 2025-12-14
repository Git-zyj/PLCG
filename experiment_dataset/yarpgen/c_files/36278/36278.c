/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [12] &= var_15;
                arr_6 [i_0] [i_0] = (arr_0 [15]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = (((((var_6 ? 4 : (min(6, var_13))))) ? (((var_14 != (min(0, -32757))))) : var_15));
                    var_21 = ((1 ? ((((min((arr_15 [i_2]), (arr_11 [i_4] [10]))) ^ ((0 ? var_15 : -15))))) : (((((-(arr_10 [i_3])))) ? -14 : ((0 ? 15058346776494108650 : -32740))))));
                    var_22 = (min(var_22, var_3));
                }
            }
        }
    }
    var_23 = (max(var_23, (~var_2)));
    #pragma endscop
}
