/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((198 ? (65535 >= 57) : (min(var_3, ((var_13 ? var_8 : var_5))))));
    var_16 = ((((!(~95))) ? (max(134, (min(2519983102, 1)))) : 3959142296));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 &= ((4413 ? (!var_11) : ((~(335824996 > 135)))));
                var_18 = (min(var_18, (((1 ? -4410 : 0)))));
            }
        }
    }
    #pragma endscop
}
