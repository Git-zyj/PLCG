/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-4026531840 <= var_0);
    var_17 = ((max(((var_13 ? 4026531821 : 4026531820)), var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_18 = ((((arr_6 [i_0] [i_1] [i_2 - 2]) ? var_13 : (min(4026531840, var_10)))));
                    var_19 = ((!(((max(4026531840, 268435463))))));
                    var_20 = (((((4026531840 & (max(4026531840, 4026531826))))) ? (min(268435469, (((268435469 ? var_9 : 4026531843))))) : 268435477));
                    var_21 = -4026531827;
                }
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_0] = 4026531827;
                    var_22 = 4026531860;
                }
                var_23 = (((min(4026531840, 268435434)) >= (arr_1 [i_0])));
            }
        }
    }
    var_24 = ((((var_9 << ((4026531862 ? var_5 : var_3)))) ^ var_3));
    #pragma endscop
}
