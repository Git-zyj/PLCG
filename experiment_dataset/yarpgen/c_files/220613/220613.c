/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = -28;
                var_18 *= min((34 || 216), ((((min((arr_2 [i_1]), -26))) ? 1 : (arr_0 [i_0]))));
                var_19 = (max(var_19, (((!((max(1555539167, 15849))))))));
                var_20 += ((((36445 ? -0 : ((var_7 ? 0 : -467515794493517356)))) * (((((!(arr_2 [10]))))))));
            }
        }
    }
    var_21 = (min(var_21, var_1));
    var_22 = (max(var_22, var_11));
    var_23 = ((((2714196954 ? var_4 : -2))));
    #pragma endscop
}
