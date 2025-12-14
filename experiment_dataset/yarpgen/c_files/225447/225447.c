/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (~var_8);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 *= (((arr_1 [i_0]) ? (arr_0 [7] [i_0]) : (((((var_2 ? (arr_0 [i_0] [i_0]) : (arr_1 [5])))) ? ((((arr_1 [i_0]) ? var_8 : 62974))) : ((~(arr_0 [i_0] [i_0])))))));
        var_12 = (11502 & -1183912536);
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_13 = (min(var_13, (!46)));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            var_14 += (arr_4 [i_2] [i_1 - 1]);
            var_15 = ((arr_5 [i_1 - 1] [i_2 - 4]) ? (arr_2 [i_1 + 1]) : (arr_5 [i_1] [i_1 - 1]));
            var_16 = (((arr_5 [i_2 - 3] [i_1 + 1]) ? (arr_5 [i_2] [i_1 + 1]) : (arr_5 [i_1] [i_2 - 1])));
            var_17 = (max(var_17, (((var_6 ? (arr_5 [16] [i_2]) : (arr_2 [i_2 + 2]))))));
        }
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_18 += (((-57 + 2147483647) >> (6069 - 6059)));

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_19 = (((((max((arr_2 [i_3]), (arr_8 [i_4]))) & (arr_3 [i_3 - 1]))) + (((max((arr_6 [i_3 + 1] [i_3 + 1]), (arr_10 [i_4] [i_4])))))));
            arr_11 [i_4] = max(((((arr_6 [i_3 + 2] [i_3 + 1]) ? (arr_6 [i_3 - 1] [i_3 - 1]) : (arr_6 [i_3 + 3] [i_3 + 2])))), ((-1183912534 ? 9223372036854775788 : 177)));
            var_20 = (max(var_20, (((~(((((arr_0 [i_3] [i_4]) ? (arr_8 [8]) : (arr_6 [i_3 + 2] [11]))) % ((((arr_6 [4] [4]) ? (arr_3 [i_3 + 2]) : (arr_2 [i_4 - 1])))))))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 = (arr_7 [i_3 + 1]);
            var_22 = ((((((max((arr_0 [i_3 + 3] [i_3 + 3]), 4294967295)) < (arr_9 [6] [6])))) * (((!(arr_3 [i_5]))))));
            var_23 = (arr_1 [i_3]);
        }
        arr_15 [i_3] = var_7;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (((((min((arr_17 [i_6] [i_6]), (arr_1 [i_6]))))) <= ((-(arr_0 [i_6] [i_6])))));
        var_24 = (max(var_24, (arr_16 [i_6])));
    }

    /* vectorizable */
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        arr_23 [i_7 - 2] [i_7] = ((105 ? -1 : 196));
        arr_24 [11] = var_4;
    }
    var_25 = var_4;
    var_26 = ((~((var_4 ? var_2 : (var_4 & var_4)))));
    #pragma endscop
}
