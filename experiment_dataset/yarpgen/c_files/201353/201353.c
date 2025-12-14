/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 ^= (~(arr_1 [i_0] [i_0]));
        var_21 ^= ((!(((4265689118 ? (arr_0 [i_0]) : var_10)))));
        var_22 = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 = var_1;
                                arr_13 [i_0] [i_3] [i_4] = ((4265689118 | (((~(arr_2 [i_0]))))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_24 = (~var_9);
                            var_25 += (!var_17);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (max(var_26, var_12));
                            var_27 = (var_8 >= var_3);
                        }
                        var_28 -= ((((var_7 + (arr_3 [i_5]))) + 3702));
                    }
                    var_29 |= 4265689124;
                }
            }
        }
    }
    #pragma endscop
}
