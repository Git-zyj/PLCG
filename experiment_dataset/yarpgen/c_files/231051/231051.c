/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = min(((((max(var_7, -5093028286066535963)) | ((min(543, 1757400780)))))), var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= (((((arr_0 [i_0]) ^ (arr_0 [i_0])))) ^ (min((max(0, -32752)), 32749)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_1] [i_0] = (var_3 | -32752);
                    var_16 = (min(var_16, (((-32739 ^ (arr_6 [5] [i_1] [i_1]))))));
                    var_17 = (-32752 | -1);
                }
                var_18 = (min((max((arr_5 [i_0] [i_1]), 9223372036854775807)), ((min(var_0, 32733)))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_19 = (min((min(var_4, var_3)), ((((min(var_10, 1)) == var_0)))));
                                arr_16 [i_0] [0] [i_4] [i_5] = ((((min((arr_13 [i_0] [5] [4] [i_0] [i_0]), 410434483))) < (min(var_6, 16392195080284355709))));
                                var_20 = (min((max((max(-1, (arr_8 [i_0] [1]))), 2054548993425195889)), (((1072693248 + (-9223372036854775807 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
