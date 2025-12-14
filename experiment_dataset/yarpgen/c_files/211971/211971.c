/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = arr_2 [i_0 - 3];
                var_10 = (min(var_10, (((~((~(arr_1 [i_1 + 2]))))))));
            }
        }
    }
    var_11 = var_6;
    #pragma endscop
}
