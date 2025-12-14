/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((max(((var_10 ? var_0 : var_2)), (var_8 - var_0)))) || ((max(var_1, (!var_9))))))));
                    arr_7 [i_0 - 1] [i_1] [i_2] = (((!127) ? (((var_6 >= 5847163231515229211) ? var_4 : var_2)) : var_4));
                    var_12 -= (max(((max(13, (min(-13, -14))))), (-8336 > 161)));
                }
            }
        }
        arr_8 [i_0 - 1] [i_0 - 1] = (((1879048192 ? ((max(var_7, var_5)) : (127 | 25)))));
        arr_9 [i_0 - 1] = -119;
        arr_10 [i_0 - 1] = ((!(((-((max(1, -65))))))));
    }
    var_13 *= var_2;
    var_14 = ((((248 % 7) >= var_1)));
    #pragma endscop
}
