/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_6 + 2147483647) << (var_10 != 882825863))));
    var_21 = (max(21, var_7));
    var_22 = (min(1, var_18));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_23 = (arr_6 [i_1]);
                var_24 = (max(var_24, var_19));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((min(1, (((var_19 | var_2) / 1)))))));
                            arr_13 [i_1] = ((((min(((12191 ? (-127 - 1) : 0)), 0))) ^ (((arr_12 [i_1] [i_2] [i_0 + 1] [i_0] [i_0 + 1] [i_1]) ? var_13 : var_0))));
                            var_26 = (max((arr_5 [i_1] [8] [i_2]), ((-(arr_4 [i_0 - 2])))));
                            arr_14 [i_3 - 1] [i_1] [i_1] [i_0] = 94;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
