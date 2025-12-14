/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 ? ((((var_14 >= var_16) * var_9))) : ((max(72, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((-var_4 == ((((!(((0 ? (-32767 - 1) : 1)))))))));
                var_21 = (((+((var_12 ? (arr_0 [13]) : (arr_0 [i_1]))))));
                arr_4 [i_0] [4] = (-(arr_2 [i_0] [i_1]));
            }
        }
    }
    #pragma endscop
}
