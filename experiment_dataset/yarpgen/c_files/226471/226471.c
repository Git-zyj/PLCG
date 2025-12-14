/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!1480539735795993477);
    var_14 = (max(var_12, var_11));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [8] = 16966204337913558131;
        arr_4 [i_0] = ((min((min(var_3, (arr_0 [i_0]))), (((-26868 > (arr_1 [12])))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                arr_10 [i_0] [2] [i_0] = max((((!var_5) ? -var_0 : 20678)), (((!((max(var_1, 2047)))))));
                var_15 = 1918205049;
                var_16 = -1577011438;
            }
            arr_11 [i_0] [i_1] = ((1103364859366825160 == (!var_2)));
            var_17 = ((((((18446744073709551614 * (arr_5 [5]))))) ? 26867 : var_1));
        }
        for (int i_3 = 4; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_18 = (min(33554304, (arr_12 [4] [i_3] [i_3 - 3])));
            var_19 = var_8;
            var_20 = (((~var_1) ? var_2 : -26867));
        }
        for (int i_4 = 4; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [6] [12] = (min((max(((var_1 ? var_7 : var_2)), var_0)), ((((max(16966204337913558131, var_11))) ? (max(var_11, var_5)) : (((max(var_1, (arr_12 [i_0] [1] [i_0])))))))));
            var_21 = (max((((max(1, var_6)))), ((((((arr_9 [9] [i_4]) ? var_3 : -1035208613))) ? (((((arr_12 [6] [6] [6]) < var_4)))) : 2529387389357285257))));
            arr_18 [6] = (min((arr_16 [0] [0] [i_4 - 4]), ((min(104, (arr_14 [0] [12] [i_0]))))));
        }
        arr_19 [i_0] = ((-((max(-26868, 1)))));
    }
    #pragma endscop
}
