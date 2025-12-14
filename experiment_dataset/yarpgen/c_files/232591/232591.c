/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((43 << (var_12 + 1928082217)))) ? ((var_2 << (3235474084769008114 - 3235474084769008051))) : var_0))) ? 15211269988940543509 : 2507683494));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = (arr_5 [12]);
                    var_16 &= arr_6 [i_0] [i_0] [6];
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [2] = (((arr_6 [i_3] [i_3 - 1] [i_3 - 1]) << (((((arr_13 [i_0] [i_3 - 1] [i_3 - 1] [i_3]) + 31857)) - 2))));
                    arr_15 [i_0] [i_0] [i_0] [i_3] = (arr_10 [i_0] [i_0]);
                    var_17 = (((arr_3 [i_3 - 1] [i_1]) ? (arr_13 [i_3] [i_3] [i_3 - 1] [i_1]) : (arr_3 [i_3 - 1] [i_1])));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_0] [i_1] [i_4] = (((arr_12 [i_0] [i_1] [i_1] [i_4]) <= var_12));
                    var_18 = ((!((((arr_16 [i_0]) ? (arr_9 [i_4] [i_1] [i_0] [i_0]) : (arr_16 [i_1]))))));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_19 = (max(var_19, (((+(((arr_12 [i_0] [i_0] [i_0] [i_5 + 2]) + (arr_6 [i_1] [i_1] [i_1]))))))));
                    arr_21 [i_5] [i_0] [i_0] = ((!(arr_19 [i_1] [i_1] [i_5 + 3])));
                    var_20 = (max((((arr_5 [i_5 + 1]) * (arr_5 [i_5 + 1]))), (((((15211269988940543502 << (((arr_6 [i_1] [i_1] [i_1]) - 1468))))) ? (arr_5 [i_5]) : var_3))));
                    var_21 = (arr_3 [1] [i_0]);
                }
                var_22 = (((16815904480058428377 ? (((arr_12 [i_0] [i_0] [i_0] [i_0]) ? -681551885 : (arr_17 [i_1] [i_0] [i_0] [i_0]))) : 22498)));
                arr_22 [i_0] = (arr_4 [i_1] [i_0]);
            }
        }
    }
    var_23 = ((((min((var_10 & var_12), var_1))) ? (!var_5) : var_4));
    var_24 = var_13;
    #pragma endscop
}
