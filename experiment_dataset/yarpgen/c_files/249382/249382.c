/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 ^= (((arr_1 [i_0]) < (arr_6 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 2])));
                    var_21 = 2147483647;
                }
            }
        }
        var_22 |= (((((var_5 / (arr_5 [i_0])))) ? ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) : ((var_16 ? 14444 : ((41943 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_23 = (((arr_2 [i_3] [11]) ? ((min(0, (arr_0 [i_3])))) : (((arr_0 [i_3]) ^ (arr_5 [i_3])))));
        var_24 = (max(var_18, var_19));
        var_25 = ((((~((max((arr_9 [i_3] [9]), (arr_9 [i_3] [i_3])))))) % ((var_11 + (14444 ^ 46532)))));
    }
    var_26 = (max(var_26, (((-(var_7 / -51092))))));
    #pragma endscop
}
