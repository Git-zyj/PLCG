/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 &= ((((((var_6 != (min(938820968, var_10)))))) + var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (min((938820999 & 3), -938820972));
                var_13 = (max(var_13, 938821001));
                var_14 = (min(var_14, (((((14417402317333583553 ? var_10 : (arr_5 [i_0] [i_0]))) == (~47256))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 += ((-var_1 ? (arr_11 [i_3 - 1] [i_3 - 1] [i_2] [i_2] [i_2] [i_2]) : (max(1195048524, 938820968))));
                            var_16 |= ((((((arr_5 [i_1] [i_1]) - 110))) ? (arr_5 [i_3 - 2] [i_0]) : 1));
                            arr_12 [i_1] [2] [1] [2] [i_1] [i_1] = -5765101;
                        }
                    }
                }
                var_17 = ((-((-(((arr_2 [1]) ? (arr_1 [i_0]) : var_9))))));
            }
        }
    }
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
