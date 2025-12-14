/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] &= var_1;
                var_17 = ((43637 ? 5494518702299065893 : 0));
            }
        }
    }
    var_18 = (min(var_18, ((((((-((var_2 ? var_0 : var_10))))) ? var_12 : (((var_7 ? 153 : 32767))))))));
    var_19 = -26003;
    #pragma endscop
}
