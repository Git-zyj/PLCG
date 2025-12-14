/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [8] [i_0] = (((((arr_2 [i_1 - 3]) ? 4194048 : 420167527)) << ((((var_8 ? (arr_2 [i_1 + 1]) : var_0)) - 12763834898981685778))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = ((((((((arr_6 [i_0] [i_1 - 2] [i_2 - 1]) << (((var_4 + 17281) - 20)))) | (~var_14)))) ? (((min((arr_4 [i_0]), 13482336266051694895)) << 1)) : 65535));
                            var_17 = (min(((((arr_2 [i_1]) && ((((arr_4 [i_2 + 2]) ? (arr_5 [i_0] [14]) : var_12)))))), (arr_10 [i_2 + 1] [i_3] [1] [i_2 + 1] [i_1 - 2] [i_1 - 1])));
                            var_18 = (-(((((var_15 ? var_13 : (arr_11 [i_0] [i_0] [i_0] [i_3] [i_3])))) ? var_4 : (arr_2 [i_0]))));
                        }
                    }
                }
                var_19 = 13482336266051694889;
                var_20 = (arr_1 [i_0] [i_1]);
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
