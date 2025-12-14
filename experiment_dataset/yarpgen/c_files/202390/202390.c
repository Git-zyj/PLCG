/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max(var_15, 14056));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((arr_3 [i_0] [i_0] [i_0 + 2]) ? -1 : (arr_3 [12] [i_0] [i_0 + 2]))));
                arr_5 [i_0] [i_0 + 1] [i_1] = 30859;

                for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    var_21 = (arr_6 [i_0 - 1] [i_0] [i_2 - 2]);
                    var_22 *= (max((((arr_7 [i_0 + 1] [8] [i_0 + 2]) ? (arr_7 [i_0 + 1] [4] [24]) : (arr_7 [i_0 + 2] [12] [8]))), (((arr_7 [i_0 + 2] [16] [i_0]) % (arr_7 [i_0 - 1] [24] [i_0])))));
                    arr_8 [i_0] [4] [i_0 + 3] [i_0] &= ((((arr_7 [i_2 - 1] [22] [i_0 + 1]) < 116)));
                    arr_9 [i_0 + 1] [i_0] [i_0 + 1] = (((arr_1 [i_0 + 2]) ? (min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) : (((((arr_1 [i_0 + 2]) || (arr_1 [i_0 + 3])))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    var_23 = ((0 ? (arr_7 [i_0 + 1] [i_0] [i_3 - 1]) : -47));
                    arr_12 [i_0] [i_0 + 1] [i_0] = 1;
                    arr_13 [i_3] [i_0] [i_0] = ((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]));
                    arr_14 [i_0] [15] [i_1] [i_0] = 60202;
                    arr_15 [i_0] [i_0] = (arr_6 [i_0 + 1] [i_0] [i_3]);
                }
            }
        }
    }
    var_24 |= var_17;
    var_25 = max(((1 ? var_3 : (max(449230712, -4177447419154455393)))), var_0);
    #pragma endscop
}
