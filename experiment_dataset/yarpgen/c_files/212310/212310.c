/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 *= 16777216;
                arr_6 [i_0] [i_1] [i_1] = ((-((var_10 ? 0 : (arr_1 [i_0] [i_1 + 2])))));
            }
        }
    }
    var_14 += ((((((var_12 == var_11) ? var_9 : ((1152921504573292544 ? -715436156 : 9223372036854775807))))) - (max((max(48, 14200870635941080216)), 0))));
    var_15 = 512;
    #pragma endscop
}
