/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_9;
                var_19 = -78;
                arr_7 [i_0] = ((arr_4 [i_0] [i_1]) <= (((arr_0 [i_0 + 2] [i_0 + 2]) ? ((min((arr_3 [i_1] [7]), (arr_4 [i_0] [i_1])))) : 31771)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 - 1] [i_1] [i_1] [i_1] = 33758;
                            var_20 = (((((max(31792, 9))) + 40069)) - (arr_4 [i_2] [i_2]));
                            var_21 = (max(((((((arr_8 [i_0 - 1]) & var_5))) ? ((max((arr_10 [i_0 + 2] [i_1] [i_0 + 2] [i_2] [i_2] [i_3 + 1]), (arr_4 [i_0] [i_1])))) : (arr_3 [i_0 - 1] [i_3 + 1]))), (arr_0 [i_0] [14])));
                            var_22 = ((!((!((max(33744, (arr_11 [0] [i_0 + 2] [i_1] [i_2] [i_3 - 1]))))))));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] [i_4 + 1] = var_13;
                    var_23 = (arr_12 [9] [9] [9] [i_0 - 1] [i_4 - 2] [i_4 + 2]);
                    arr_18 [i_1] = max(0, 33765);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_29 [i_7] [i_7] = (((max(((((arr_23 [12]) >= var_13))), (arr_28 [i_5] [i_5] [i_5 - 1]))) == (~1)));
                    var_24 = (max((min((arr_26 [i_7]), -var_12)), (((13 ? 9223372036854775802 : 1)))));
                }
            }
        }
    }
    #pragma endscop
}
