/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (arr_0 [i_0] [i_0 + 1]);
        var_21 = (max(var_21, var_1));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = ((((min((arr_6 [i_3 + 1] [i_4] [i_4]), (arr_6 [i_3 - 1] [i_3 - 1] [i_3])))) ? ((((arr_0 [i_3] [i_1 + 1]) <= (arr_0 [i_3] [i_3])))) : ((max((!var_18), var_3)))));
                        arr_14 [i_3] [i_2 + 1] [i_3 - 1] = (((((arr_5 [i_3 - 1] [i_3 + 1]) + var_14)) + ((var_17 - (arr_5 [i_3 - 1] [i_3 + 1])))));
                        var_23 = (min((((min(9223372036854775807, var_13)) / -32666)), (!var_12)));
                        var_24 = (!var_1);
                        arr_15 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_3] [i_4] = var_9;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_25 = -237;
            arr_19 [8] |= var_1;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_1] [i_6] = ((4294967281 ? 40338 : 546564039));
            var_26 = var_16;
            var_27 = ((!(((1073741823 >> (var_11 + 7539490830553584202))))));
            var_28 = (((!(((var_3 ? var_10 : (arr_8 [i_1] [i_6])))))));
        }
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            var_29 = (min(var_29, (((((max(((3286641311 ? 7065051663091890234 : var_14)), ((((arr_9 [i_7] [i_1]) - var_3)))))) * ((((((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_7] [i_7] [i_7 - 1]) - var_18))) ? ((min(var_16, 1161578583616383572))) : var_8)))))));
            var_30 = ((!((!((max(var_9, var_8)))))));
        }
        var_31 *= (min(4379791557142863597, 19759));
        var_32 ^= ((min(var_16, var_17)));
    }
    var_33 = var_10;
    var_34 = var_7;
    #pragma endscop
}
