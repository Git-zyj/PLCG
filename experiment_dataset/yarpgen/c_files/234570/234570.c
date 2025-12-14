/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [14] [i_1 - 1] [i_1 - 1] = (min(var_13, (min(9223372036854775781, -9223372036854775806))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_14 [i_2 + 1] [i_2 + 1] [0] [12] = ((max(var_14, var_7)));
                            arr_15 [i_0] [i_0] [i_2] = (!((((arr_6 [i_2] [1] [i_2 + 4] [i_1 + 1]) | var_15))));
                            var_19 = min(1, -9223372036854775787);
                            var_20 = (min(var_20, ((max(var_16, ((min(var_7, -23297))))))));
                            var_21 = (min(var_21, -9223372036854775806));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = ((min((arr_3 [i_1 - 1] [i_1 - 1]), var_6)));
                arr_17 [i_1 - 2] = ((+((((var_2 & var_2) > var_10)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                arr_25 [i_5] [i_5] [i_5] = (min((((-(arr_19 [i_4] [i_4])))), (min((max(-9223372036854775794, -188166731)), (4294967293 | -9223372036854775802)))));
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_33 [i_4] [8] [i_5] [1] [i_8] = (((((-(var_2 != 188166722)))) > (((arr_13 [i_4] [i_4] [i_4] [i_4] [i_6 - 1] [22]) ? (arr_10 [i_4] [i_5] [i_5] [i_7]) : (arr_13 [i_4] [i_5] [10] [i_5] [i_6 + 1] [i_5])))));
                                arr_34 [i_4] [i_4] [i_5] [5] [i_5] [i_4] = (min((((((((min(var_9, var_9))) + 2147483647)) << (1 - 1)))), (min(4072036254, (arr_26 [i_6] [i_6] [i_6] [i_6 - 2])))));
                                var_22 = (min(((((min(1, -9223372036854775793))) ? 205 : (var_14 | 244))), (((var_10 ? 8184 : var_17)))));
                                arr_35 [2] [i_5] [2] [4] [i_8] = (((((min(var_10, var_0)))) ^ (max((arr_11 [i_4] [i_5]), -627284315334489693))));
                            }
                        }
                    }
                }
                arr_36 [i_5] = (min(((var_4 ? -9223372036854775794 : (arr_13 [i_5] [i_5] [i_5] [1] [1] [i_5]))), ((((arr_27 [8] [i_5] [i_5] [8]) ? 74 : (arr_27 [7] [i_4] [i_5] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
