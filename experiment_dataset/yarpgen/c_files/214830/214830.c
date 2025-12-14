/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((max((-9223372036854775807 - 1), (((15872 ? var_5 : var_3)))))) ? (15860 & var_3) : ((var_6 ? var_0 : var_7)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((15874 >= (1729382256910270464 % -959077942)));
                    arr_6 [i_0] [i_0] [i_0] [14] = -7255785068343585000;
                }
            }
        }
    }
    var_12 = (max((((!((max(-7255785068343585004, var_7)))))), var_6));
    var_13 = ((((min(((min(var_2, var_7))), (var_6 + var_0)))) ? (((((-1729382256910270465 ? var_0 : var_9))) ? var_3 : (max(var_5, var_2)))) : var_3));
    #pragma endscop
}
