/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 |= ((var_6 ? (((((1 ? var_4 : 9223372036854775787))) ? ((min(var_3, -17681))) : ((var_3 ? var_2 : var_2)))) : ((var_6 ? ((min(-6028, var_8))) : var_2))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_14 ^= (max(var_6, (min((arr_1 [i_0]), (arr_0 [i_0])))));
        var_15 = -127;
        var_16 ^= (((arr_1 [i_0]) ? (!-3185709728) : ((64 ? -89 : 1416530204744018899))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_0 [i_1]) ? (min(((((arr_1 [i_1]) ? (arr_4 [i_1]) : (arr_2 [i_1] [i_1])))), (min((arr_1 [i_1]), -3432705205871609211)))) : (arr_2 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_17 = (min(var_17, 3039873829));
            var_18 = (min(var_18, (((230 ? 17556391843221727226 : 1868420751852516072)))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_19 = (arr_4 [i_3]);
            var_20 = -20503;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_17 [i_4] [i_1] = ((-((max(2, 1)))));
            arr_18 [i_1] [i_1] = (((arr_10 [i_4]) ? (arr_12 [i_1] [i_1] [i_4]) : 9223372036854775807));
        }
    }
    #pragma endscop
}
