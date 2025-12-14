/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_7, ((15360 ? -13330262527897518050 : (((var_8 ? var_4 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_3 [7])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (((max((1 | 50175), ((min((arr_6 [i_1] [i_1] [i_2] [13] [i_0] [i_1]), var_11))))) << (((((~(arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) + 13))));
                            var_18 = (arr_6 [i_3] [i_3] [9] [i_2] [i_0] [i_0]);
                            var_19 = ((104 ? ((~((max((arr_2 [i_0] [i_1] [i_0]), (arr_4 [i_0])))))) : (arr_0 [i_1] [i_2])));
                            var_20 *= (((~(((arr_0 [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : 50176)))));
                        }
                    }
                }
                var_21 *= (arr_4 [i_1]);
                var_22 ^= (((~((15360 ? var_1 : (arr_4 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
