/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_10 ? 86 : var_11))) >> var_8));
    var_16 += var_0;
    var_17 = -var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [0] [10] = max(2838241617951288348, (max(((max(0, 1))), -131072)));
                var_18 = (min(var_18, ((((((-(~var_13)))) ? (~-43) : ((10178 ? -0 : (!10178))))))));
            }
        }
    }
    #pragma endscop
}
