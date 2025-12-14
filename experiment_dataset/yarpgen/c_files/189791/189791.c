/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 1210538661447849018;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_19 = ((-((~(arr_3 [i_0])))));
                    var_20 = ((+(((arr_5 [i_1] [i_2]) ? (((min((arr_2 [i_2]), var_13)))) : (arr_5 [i_0] [11])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_1 - 2]);
                    arr_10 [i_2] [i_0] [i_0 + 2] = (arr_1 [i_0]);
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_21 |= (!-var_7);
                    var_22 = ((!((min((arr_11 [i_0 + 3] [i_1 - 2] [i_1 - 2]), (arr_13 [i_0] [i_0] [i_1 - 1]))))));
                }
                var_23 = var_12;
            }
        }
    }
    var_24 = ((var_7 ? var_12 : var_17));
    #pragma endscop
}
