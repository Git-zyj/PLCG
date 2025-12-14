/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 *= (((-1511379597 ? (max((arr_0 [i_0] [i_1]), (arr_4 [i_1]))) : (arr_3 [i_0] [i_0] [i_1]))));
                var_18 = ((max(17896390951419415326, -1002634384)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_19 = (min(var_19, (arr_4 [i_2])));
                    var_20 = (min(var_20, ((min((arr_8 [i_2] [i_3] [i_4]), (arr_3 [i_3] [i_3] [i_2]))))));
                    var_21 = 21129;
                }
            }
        }
    }
    #pragma endscop
}
