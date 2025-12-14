/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_7 ? 1 : (max(24, var_3)))), (min(var_9, var_6))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((+(((arr_0 [i_0]) ? (arr_1 [i_0]) : ((min(var_1, 16)))))));
        var_13 = (min(var_13, ((!(arr_0 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = max(((((((arr_10 [i_2 + 1]) + 2147483647)) >> (((arr_10 [i_2 - 2]) + 111))))), (min(var_10, (arr_10 [i_2 - 3]))));
                        arr_13 [i_3] [i_3] [i_3 - 1] [i_4] [19] = ((((max((min(3283567366330140467, (arr_10 [i_4]))), ((((arr_11 [i_1] [i_1] [13] [i_3]) ? (arr_1 [i_1 - 2]) : var_6)))))) ? (!var_10) : var_8));
                    }
                }
            }
            arr_14 [i_1] [i_1] = ((var_3 != (max((((7819245880995176265 ? 1 : (arr_5 [i_1] [i_2])))), var_4))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_15 = ((-(arr_5 [i_2] [i_6])));
                        var_16 = (max(var_16, (arr_16 [i_2] [i_5])));
                        var_17 *= (arr_5 [i_1] [i_1]);
                        arr_21 [i_1] [i_1] [i_6] [i_1] = (min(((max(((max(var_1, (arr_3 [10])))), -24420))), (((((29505 ? var_10 : (arr_3 [i_6])))) ? ((min(4, 1260646004))) : (((arr_3 [i_6]) ? (arr_20 [i_1] [i_1] [14] [i_1]) : 29))))));
                    }
                }
            }
            var_18 = (((min((arr_2 [1] [1]), 18)) << (29488 - 29477)));
        }
        for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] [i_7] [i_7] = (((3007064947521031257 % (139 != var_4))));
            var_19 = ((~(min((max(var_1, 3007064947521031257)), (arr_9 [i_1 - 1] [i_7 - 2] [i_7 - 2])))));
        }
        var_20 = var_2;
    }
    var_21 = (min((max((((3847961289496524938 ? 14761 : var_1))), (min(-3007064947521031259, 59)))), var_7));
    #pragma endscop
}
