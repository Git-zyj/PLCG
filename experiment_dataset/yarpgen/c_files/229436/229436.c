/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_0, (max(-var_1, (((var_0 + 2147483647) >> (var_12 - 1393778939)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = ((((((arr_2 [i_0] [i_0]) ? var_17 : (arr_2 [19] [i_0]))) + 2147483647)) >> ((((arr_0 [i_0] [i_0]) || var_6))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 -= (((((-((21205 ? 962576441 : -8))))) ? (arr_2 [i_1 + 1] [i_2 - 1]) : (max((((arr_5 [i_0] [i_0]) ? var_14 : (arr_10 [i_3] [i_2] [i_1] [4]))), ((-(arr_6 [i_0] [i_1] [i_2])))))));
                        var_21 = (max(var_21, ((((min(var_15, (arr_6 [9] [i_1 - 2] [i_1 - 3])))) & var_2))));
                        var_22 = (arr_6 [i_2 + 1] [i_1] [21]);
                    }
                    arr_11 [i_1] [i_1] [i_1] = ((-((1638031227434729502 ? 87 : 5434188118004390258))));
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
