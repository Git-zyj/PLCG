/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = 2147483647;
                arr_7 [i_1] = (min((arr_0 [i_0 + 1] [13]), ((-((min(0, 1)))))));
            }
        }
    }
    var_20 = var_13;
    var_21 = (235 & 7);
    #pragma endscop
}
