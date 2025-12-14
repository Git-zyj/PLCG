/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_6));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 -= ((((((arr_3 [i_1]) + 2147483647)) << (((!(arr_2 [i_0] [5])))))));
            var_20 = (arr_1 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (max(((max((arr_3 [i_2]), (arr_3 [i_1])))), ((106 ? 14 : 137438953471))));
                        var_22 = 246;
                        var_23 = (arr_6 [i_0] [i_2]);
                    }
                }
            }
        }
        var_24 = (max(var_24, (((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? 9223372036854775807 : -9223372036854775778))))));
    }
    var_25 = var_3;

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_26 = (max(var_26, ((((arr_15 [i_4]) ? (!-17016841509606858558) : (!255))))));
        var_27 = (((((arr_14 [i_4]) < (arr_14 [i_4]))) ? (arr_14 [i_4]) : ((max((arr_14 [i_4]), (arr_14 [i_4]))))));
    }
    var_28 = var_9;
    #pragma endscop
}
