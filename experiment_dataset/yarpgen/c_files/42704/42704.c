/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (min(var_10, 212743177022644718));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_11 = (((((((0 ? var_2 : 1))) & ((var_0 ? var_6 : var_0)))) >= ((((arr_3 [i_2] [i_0 + 2]) % (arr_5 [i_2] [i_1] [i_0]))))));
                    var_12 = ((0 ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (((var_9 ? var_1 : 1)))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] = ((var_7 ? var_6 : (((((1 ? 117 : -20354))) | (((arr_3 [i_3] [i_0]) << (((((-2147483647 - 1) - -2147483630)) + 35))))))));
                    arr_11 [i_0] = (max((arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0]), ((((max(var_0, 30787))) ? (((arr_8 [i_0]) ? 2491106659354404133 : 1)) : var_6))));
                }
                var_13 = (arr_4 [i_0 - 1]);
                var_14 = (((((78890673 ? ((((arr_3 [i_0] [i_1]) > 26855))) : var_0))) ? (arr_5 [i_0] [8] [i_0 - 2]) : ((var_6 << (((arr_1 [i_0 - 1] [i_0 + 1]) - 1430266055))))));
                var_15 = (((((((-(arr_7 [i_0 + 2] [i_1] [i_0 + 1] [i_0])))) + (max(var_3, var_3)))) - var_3));
            }
        }
    }
    var_16 = (min(((var_3 & ((min(var_2, 1491036762))))), ((-var_2 + (max(var_2, 13959068025189655533))))));
    var_17 = (min(var_17, (((var_0 ? (~var_7) : var_1)))));
    var_18 = var_0;
    #pragma endscop
}
