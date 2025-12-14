/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= (max(-411011327611728833, 411011327611728835));
                var_16 = (max(var_16, ((max(((((((-127 - 1) ? 255 : 1))) ? (((arr_1 [i_1] [i_0]) ? -2106 : var_4)) : var_11)), ((((max(0, 124))) ? var_7 : ((-411011327611728833 ? (arr_1 [i_0] [i_1]) : 3551758933716751317)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3] [i_3] = (arr_1 [i_0] [i_0]);
                            arr_10 [i_3] [i_3] = (((((arr_8 [i_3] [i_3] [i_3] [i_0]) * (min((arr_2 [i_0]), var_6)))) ^ ((((arr_5 [i_2]) ? (~var_1) : (arr_8 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]))))));
                            var_17 = ((((((((var_4 ? 0 : 7))) ? -957480161656671582 : 62708))) ? ((max((max((arr_1 [i_0] [i_1]), 62717)), 1))) : (arr_2 [i_3])));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = ((!(((arr_3 [i_0] [i_0] [i_0]) == (0 ^ -118)))));
            }
        }
    }
    #pragma endscop
}
