/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_10;
                var_11 ^= ((var_3 ? ((var_10 ? 1605413139 : (min(var_8, 3676795935)))) : (((((265372835 ? var_8 : var_2))) ? (arr_0 [i_0]) : (-1 || -2147483647)))));
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
