/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_3 ^ (min(4294967286, 10))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = ((((((min(9829512240095322677, var_11)) + (((4294967285 ? (arr_8 [i_0]) : var_1)))))) ? ((((min(var_0, 113))) ? ((((arr_0 [i_2]) << (var_8 - 64881)))) : (max((arr_14 [i_0]), var_9)))) : ((((arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]) ? 27585 : (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]))))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [10] [i_0] [i_4] = ((((min((arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4]), 9829512240095322696))) ? ((min((min(37951, (arr_4 [i_2] [i_4]))), var_0))) : (max(2236920152, ((5623104505121660898 << (4294967286 - 4294967286)))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_1] [i_0] = 10;
                }
            }
        }
    }
    var_16 *= (((((max(var_7, 44)))) ? (min((37951 || 2161544529), var_9)) : var_13));
    var_17 = var_14;
    var_18 = (((((1717167317 ? 929 : 2161544529))) ? var_2 : ((var_0 ? ((var_6 ? var_9 : var_1)) : (~var_1)))));
    var_19 = (max(var_19, (!9169097160546759493)));
    #pragma endscop
}
