/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [8] = (min((max((arr_4 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_1]))), (max(var_15, ((((arr_1 [i_0] [i_1]) <= (arr_4 [i_0] [i_1] [i_0]))))))));
                var_18 = ((6142 << (((max(2, (arr_3 [i_0] [i_0]))) - 167778826612046456))));

                for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_19 = (min(((var_12 ? ((4619471779933782870 << (1902651525 - 1902651525))) : (arr_4 [i_0] [i_0] [i_0]))), (max((arr_7 [i_2 - 1] [i_2] [i_2 - 2]), (arr_7 [i_2 - 2] [i_0] [i_0])))));
                    arr_11 [1] [i_0] [i_0] = (((((arr_3 [i_2 - 1] [i_1]) ? 4294967272 : (arr_5 [i_2 - 1]))) ^ (max((arr_9 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2]), (max((arr_0 [1] [i_1]), 4))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_20 |= (((arr_12 [i_0]) ? ((var_11 ? (arr_5 [12]) : 9223372036854775807)) : 5653906608722017415));
                    var_21 += (arr_12 [i_3 - 2]);
                }
                var_22 = (min(var_22, ((((arr_3 [6] [i_1]) % ((max(157, -320880881))))))));
            }
        }
    }
    var_23 = 19;
    var_24 = (((((~(min(var_7, var_6))))) ? var_11 : var_10));
    #pragma endscop
}
