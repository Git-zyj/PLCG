/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_5, (1 <= -8)));
    var_11 += (min((min((126 | -109), -109)), ((((~0) > 30)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 0;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] = ((((-((min(1, -2))))) < (~0)));
                    var_12 = (((var_3 / -116) < ((min((1 < 1), -111)))));
                }
                arr_9 [i_0] [i_1] = ((!0) > 0);
            }
        }
    }
    var_13 = ((var_3 ? (((min(0, var_9)))) : 0));
    #pragma endscop
}
