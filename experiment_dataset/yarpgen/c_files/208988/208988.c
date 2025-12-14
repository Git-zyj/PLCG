/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((max(((var_14 ? -2 : -2)), ((min(var_0, var_14)))))), (min(var_8, var_9))));
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0] = (((arr_3 [i_0] [i_0]) >= -3929));
                var_17 = (max((((min((arr_5 [i_1] [i_0]), var_8)) - (((arr_1 [i_0] [i_1]) ? var_6 : (arr_7 [i_1] [i_0]))))), var_8));
                var_18 = ((((min((arr_7 [i_1] [i_0]), ((35176 ? (-127 - 1) : 0))))) ? ((-(max(2435282811, 29)))) : (var_4 | 13)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 = (((((arr_4 [i_0]) >= 91)) ? (!var_3) : var_8));
                            arr_14 [i_3] [i_3 + 1] [i_2] [i_0] [i_1] [i_0] = 351148082;
                            var_20 += ((0 % (-13 + 1)));
                        }
                    }
                }
            }
        }
    }
    var_21 &= var_9;
    #pragma endscop
}
