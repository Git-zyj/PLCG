/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = var_17;
                arr_5 [4] [17] [i_0] = max(((2147483647 ? (arr_3 [i_1] [i_1] [i_1 + 2]) : var_7)), (((!(arr_3 [i_1] [i_1 + 2] [i_1 + 2])))));
                arr_6 [i_0] [i_0] = ((((((((arr_2 [i_0]) ? 0 : 2693908119)) ^ -var_1))) ? 12028 : (~var_5)));
            }
        }
    }
    var_19 = ((((((var_17 ? -2147483646 : 53496)) ? var_17 : var_11))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_20 = (max((((-1 ^ 4294967295) && 44043)), (((arr_3 [i_2] [i_2] [i_2]) == (arr_0 [i_2])))));
        var_21 = (max(var_21, (arr_0 [i_2])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_22 = -1223873964;
        arr_13 [i_3] = (((((-789051036 ? (~var_10) : var_12))) ? (max((arr_9 [10] [i_3]), var_1)) : ((~(arr_0 [i_3])))));
        arr_14 [13] [i_3] = ((((arr_1 [i_3] [i_3]) + var_10)) != (arr_9 [i_3] [i_3]));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_23 += 6;
        var_24 -= (((arr_8 [i_4 - 1]) ? var_14 : ((1 ? var_14 : var_6))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_25 = (min(var_25, (arr_3 [i_5] [1] [i_5])));
                    var_26 = (var_3 - ((var_15 ? 4294967295 : 65535)));
                    var_27 = (((max(4361101661228249519, 65535)) / (((-(max(var_7, 2147483643)))))));
                    var_28 = ((var_9 ? ((var_4 ? ((131071 ? 0 : (arr_22 [4] [1] [i_5]))) : (arr_24 [i_6] [i_6]))) : -var_6));
                }
            }
        }
        arr_25 [i_5] = ((min((arr_20 [i_5] [6]), (arr_11 [i_5]))));
        var_29 = (((var_12 - (arr_11 [16]))) >= (arr_21 [10] [10]));
        var_30 = -1103483241;
    }
    var_31 = ((((-(max(1103483252, var_14)))) + ((max(-1103483238, -1)))));
    #pragma endscop
}
