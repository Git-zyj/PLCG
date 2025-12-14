/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [18]);
                    var_15 = ((+(((-1 + -444579195) - -742805228))));
                }
            }
        }
    }
    var_16 = (255 % var_10);
    var_17 += (max((max(-742805221, 1)), 1));
    #pragma endscop
}
