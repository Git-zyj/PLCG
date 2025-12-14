/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = ((!((((var_5 ? 143155217466676385 : 3775959005))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = (min(var_14, -87));
            arr_6 [3] [i_1] = -143155217466676397;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 = (max(var_15, (((((((arr_1 [5]) << (((arr_1 [i_2]) - 64))))) ? var_9 : (((arr_4 [i_2]) ? var_4 : (arr_8 [i_0] [2]))))))));
            var_16 = (min(var_16, 92));
            var_17 = (arr_0 [i_0]);
        }

        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_18 = (min(var_18, var_8));
            var_19 = (min(var_19, ((((((((var_4 && 18446744073709551615) != 7651461967809865022)))) >= (((arr_7 [i_0] [i_0] [2]) ? (arr_7 [i_0] [i_3] [i_3]) : 1695342614377946)))))));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 ^= ((-143155217466676393 >= (-102414625 | -622)));
                var_21 = (var_11 + 4294967292);
                var_22 = (min(var_9, (max(-25961, 3))));
                var_23 = (min(var_23, ((((((-127 - 1) * (~var_5)))) ? -383450269 : (((22665 <= -1530364083) * 127))))));
            }
            var_24 -= var_6;
            var_25 = 1;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_17 [i_5] [7] [i_0] = (max((((!((((arr_4 [i_0]) & 12)))))), (((9088449090519147739 - 786432) / (-127 - 1)))));
            var_26 = 742357248;
        }
        var_27 *= ((!((max((arr_5 [i_0]), (arr_5 [i_0]))))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_28 = ((-(arr_19 [i_6] [i_6])));
        var_29 &= ((+((((arr_15 [i_6] [i_6]) == var_2)))));
    }
    var_30 = 63;
    #pragma endscop
}
