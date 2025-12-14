/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_3 - 1] [i_2 + 1] [i_2] [i_0] [i_0 + 1] = ((((max(var_16, (arr_2 [i_0 + 1] [i_0])))) % var_12));
                        var_18 = 18446744073709551595;
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_19 = (arr_11 [i_0] [i_0]);
                        var_20 = (((((((var_3 + (-2147483647 - 1)))) ? var_14 : ((var_10 - (arr_2 [i_0] [i_0]))))) + (arr_7 [i_0 - 1] [i_2])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_15 [i_0] [i_2 - 2] [i_2] [i_5] = (((min((arr_6 [i_1 - 2] [i_1 + 3] [i_1 - 2]), var_3)) << 11));
                        var_21 = 6069252928110337181;
                        var_22 = (max(var_22, var_3));
                    }
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        arr_20 [i_0 + 1] [i_0] [i_2 + 1] [i_6 - 3] &= ((2147483647 == (var_14 & 1)));
                        var_23 = (max(var_23, (var_3 - var_15)));
                    }
                    var_24 = (((2147483639 * 3482492654) == (arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0])));
                }
            }
        }
    }
    var_25 = min(-2743074427226169945, -67);
    #pragma endscop
}
