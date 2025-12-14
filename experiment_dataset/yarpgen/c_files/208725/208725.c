/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [12] [12] [i_0] = (min(var_5, (min(((9 ? (arr_0 [i_2]) : var_8)), ((var_5 ? var_0 : var_14))))));
                    var_18 = (((((~((var_16 ? (arr_6 [i_2] [i_0] [i_1 + 1] [i_0]) : 1))))) ? 28600 : (((arr_0 [i_2]) ? (arr_6 [i_0] [i_1 + 1] [i_2] [i_2]) : var_2))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (1175187862403207354 < 17656482905242468308);
                        var_20 = (max(var_20, var_11));
                        var_21 = (arr_0 [i_0]);
                    }
                }
            }
        }
    }
    var_22 = 1085207375900331102;
    var_23 = (min(((min(-32751, 3405535286))), (((!((min(2961, -27193))))))));
    var_24 = var_0;
    var_25 = (~var_15);
    #pragma endscop
}
