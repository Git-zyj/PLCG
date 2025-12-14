/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_12 >> (var_0 - 1288511341))))));
    var_21 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = max(((53773 + ((34621 ? 1333761971 : var_11)))), (max(((30918 ? 30912 : var_12)), var_12)));
                    var_23 = (min(var_23, ((((arr_10 [i_0] [i_1 - 1] [i_0]) ? ((min(34621, 30914))) : (!34628))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_3] = ((((30934 ? 34621 : 1)) >> (34618 - 34612)));
                        var_24 += ((((0 ? -4321 : 5712)) >> (((arr_7 [i_1 - 1] [i_0]) - 5140114839163639297))));
                        var_25 = (min(var_25, ((min(var_17, -34601)))));
                        var_26 = ((!(((-(1 != 30918))))));
                        var_27 = max(((1 ? (3762651209 > 40720) : 4294967280)), (!36635));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_28 = (min((!var_6), (min(((34616 ? var_1 : 34602)), 59824))));
                        arr_17 [i_0] [i_0] [i_2] [i_4] |= (((var_19 >> var_19) + ((max(var_7, (arr_16 [i_0] [i_4]))))));
                        arr_18 [i_2] = ((~((max(30921, 59823)))));
                    }
                }
            }
        }
    }
    var_29 = ((((((max(var_19, var_15)) ? ((var_5 ? var_15 : 23)) : var_12))) ? 30935 : ((((min(59824, 6493479442924389845))) ? -8586717965559537813 : (((var_3 >> (48022 - 48019))))))));
    var_30 = ((var_1 ? var_13 : var_2));
    #pragma endscop
}
