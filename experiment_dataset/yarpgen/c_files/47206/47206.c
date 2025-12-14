/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (((arr_1 [i_0]) ^ 175));
                arr_5 [1] [i_1] = ((~(max(var_5, (81 >> var_8)))));
                arr_6 [i_1] [i_0] = var_11;
            }
        }
    }
    var_18 -= ((0 <= (((min(104, 151))))));
    #pragma endscop
}
