/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (max((1219 ^ 127), (arr_2 [i_0])));
        var_17 = (max(((-(min(var_13, 12141676937693153635)))), (~0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 -= (((!var_8) < ((((max(536870896, var_8))) ? var_13 : ((var_10 ? 555061671 : var_3))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 *= ((var_1 % (min((arr_13 [4] [4] [4] [4] [i_3 - 1] [i_2 - 1]), var_6))));
                            arr_17 [i_0] [i_0] = ((!((!(-77 && 0)))));
                            arr_18 [i_0] [i_1] [i_2 + 1] [18] [i_3] [i_0] [i_4] = (((arr_13 [i_0] [i_1] [i_2] [i_0] [i_3 - 1] [i_4]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_3 - 1] [i_3 - 1] [i_2 - 4] [i_1] [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_21 [i_0] = ((+(max((((arr_2 [i_0]) ? var_12 : var_9)), ((min((arr_19 [i_0] [i_0] [i_0] [i_0]), var_13)))))));
                            var_20 = (min(var_20, var_0));
                            arr_22 [i_0] [i_0] [i_0] [i_5] |= (min(1, 1));
                        }

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [i_0] [i_6] |= (((min((arr_24 [i_2 - 2] [i_2 - 2] [13]), (max(var_1, (arr_4 [i_6])))))) ? var_15 : (arr_5 [i_0] [i_2 + 3] [i_3]));
                            arr_26 [i_6] [i_3 - 1] [i_0] [i_1] [i_0] = ((min(((min(var_10, var_3))), -1)));
                            var_21 = (((~0) ? (min(var_15, var_10)) : (min(125021040, 121))));
                        }
                        var_22 *= var_13;
                    }
                }
            }
        }
    }
    var_23 = 2147483647;
    #pragma endscop
}
