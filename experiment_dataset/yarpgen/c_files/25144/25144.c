/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 ? ((4294967273 ? 1323381507 : 4294967295)) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = var_4;
                var_20 += ((2147483628 ? 23 : 1535021119));
            }
        }
    }
    #pragma endscop
}
