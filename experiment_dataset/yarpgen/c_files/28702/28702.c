/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3381;
    var_18 = var_1;
    var_19 -= min((((!(((37334212 ? var_9 : var_6)))))), ((var_14 ? var_1 : 37334194)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_20 *= (max(37334194, -37334198));
                    var_21 |= arr_6 [i_0] [i_0] [i_0] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_4] [i_1] [i_4] = (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2]);
                                var_22 = (min(var_22, (((-2147483626 ^ ((2008760910 ? (arr_5 [i_0] [i_0] [i_2] [i_1]) : -26603)))))));
                                arr_16 [i_0] [i_4] [i_2] [i_1] [i_4] = (arr_6 [i_0] [i_0] [i_0] [i_4]);
                            }
                        }
                    }
                    var_23 = var_0;
                }
                var_24 = (((((var_1 ? (min((arr_5 [i_1] [i_1] [i_1] [i_1]), var_8)) : (((var_15 * (arr_12 [i_0] [i_0] [i_1]))))))) ? (((max((arr_13 [i_0] [i_1] [i_1] [i_0] [i_1]), 13094)))) : (((8838080436112806923 ^ (arr_7 [i_0]))))));
                arr_17 [i_0] = (((((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) | var_4)) < (arr_6 [i_1] [i_1] [i_1] [i_0]))) ? (((!(arr_0 [i_0] [i_0])))) : (~229)));
            }
        }
    }
    #pragma endscop
}
