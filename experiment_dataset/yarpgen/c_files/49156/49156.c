/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((311112759472047417 ? 0 : var_11)), (((((var_1 ? 18446744073709551615 : 18446744073709551615))) ? var_10 : (min(var_10, 3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (((((~(arr_2 [i_0])))) ^ (max(2222250122353709124, (arr_2 [i_1])))));
                var_15 *= 18446744073709551609;
            }
        }
    }
    #pragma endscop
}
