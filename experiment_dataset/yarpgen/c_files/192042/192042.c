/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((~((~(arr_0 [i_0] [i_1 - 4])))));
                var_17 = (min(var_17, (arr_1 [i_1 + 2] [i_0])));
                arr_6 [9] [i_1 - 3] [9] = (max(((min((arr_0 [i_1 - 1] [i_0]), 1))), (max((734824737 * var_6), var_7))));
            }
        }
    }
    var_18 = (min(4294967295, 196));
    #pragma endscop
}
