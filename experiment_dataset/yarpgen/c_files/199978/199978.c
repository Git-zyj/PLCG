/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_17 >= var_19);
    var_21 = (max(var_3, -6371534993527227391));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 ^= (max((4116436132 / 168), (((arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1]) ? (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1]) : (arr_11 [i_2 + 1] [i_2 + 1] [i_3] [i_3 - 1])))));
                            var_23 = min(((((var_12 >= var_13) * (var_4 - var_11)))), ((((-(arr_1 [i_0]))) >> (536870911 - 536870882))));
                            var_24 = ((var_8 ? ((((arr_10 [i_3 - 1] [i_2 + 1] [i_2] [i_2 + 1]) ? (arr_10 [i_3 - 1] [i_2 + 1] [16] [i_2 + 1]) : -57))) : (min(var_9, (arr_5 [i_2 + 1])))));
                            var_25 &= (((min(((((arr_5 [i_2]) < var_8))), (arr_5 [i_0]))) ^ (((((~4294967292) < (arr_3 [i_3 - 1] [i_3 - 1] [0])))))));
                            arr_13 [i_0] [i_0] = ((((max((arr_1 [i_3 - 1]), var_3))) ? ((max(-var_12, ((min(var_17, var_10)))))) : 178531186));
                        }
                    }
                }
                arr_14 [0] [i_0] [0] &= (!var_8);
                var_26 = (min(var_26, (((!((min((min((arr_8 [i_0]), (arr_11 [i_1] [i_1] [i_1] [i_0]))), (arr_0 [0])))))))));
            }
        }
    }
    var_27 = (~var_16);
    #pragma endscop
}
