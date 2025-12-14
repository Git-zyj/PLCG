/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!703675908300129724);
    var_12 = (min(var_12, (((var_9 & (max(0, -8261234766342862410)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 -= ((((((arr_2 [i_0 - 3] [i_0 - 3] [i_0 + 1]) < var_5))) + (((!(arr_0 [i_0 + 3]))))));
                arr_4 [i_0] = ((!(-3854124837991387071 <= -703675908300129724)));
                arr_5 [i_0] [i_1] = (((!(arr_0 [i_0 - 3]))));
            }
        }
    }
    var_14 &= var_0;
    #pragma endscop
}
