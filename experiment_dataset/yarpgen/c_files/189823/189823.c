/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_6, (var_4 || var_6)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = 49;
                    var_14 = 22440;

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_15 = (((arr_1 [i_0]) ? -625691439 : (arr_1 [i_0])));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0] [i_2] [4] = (32 << var_7);
                            arr_13 [i_2] [i_4] [i_4] &= -8500283000611857214;
                            var_16 = (max(var_16, var_11));
                            var_17 = (arr_3 [i_0] [i_4]);
                        }
                        var_18 |= (!var_10);
                        arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] = (!var_5);
                    }
                }
            }
        }
        var_19 = 0;
    }
    var_20 |= (((((((var_6 ? var_11 : var_3))) - 6)) > var_1));
    var_21 = (min((((!var_11) * var_0)), (var_8 >= 249)));
    #pragma endscop
}
