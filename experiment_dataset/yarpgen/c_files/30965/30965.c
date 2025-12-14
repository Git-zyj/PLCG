/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((var_5 ? ((~((24570 ? var_8 : var_3)))) : (max((max(var_8, var_3)), (((4659 ? 16 : 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((((((!(arr_6 [9] [i_1 + 1] [i_2]))))) / ((((((arr_3 [i_0] [i_0]) << (((arr_5 [8] [i_1] [8]) - 20441))))) ? (max(var_3, var_4)) : -var_9)))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_18 = ((((-(arr_2 [i_0] [i_0] [13]))) - (((0 ? -1 : (arr_3 [i_0] [i_1]))))));
                        var_19 = (min(var_19, var_7));
                    }
                    var_20 -= ((2305843009213693440 == ((((arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2]) * (arr_5 [i_1 - 2] [i_1] [i_1 - 2]))))));
                }
            }
        }
    }
    var_21 *= ((var_7 >> (var_2 - 2244843141)));
    #pragma endscop
}
