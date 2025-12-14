/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (var_3 <= -var_9)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (arr_2 [i_0]);
        var_14 = (((arr_2 [i_0]) * ((var_0 << (16141399785509856313 - 16141399785509856301)))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [8] = (arr_3 [11]);
        arr_6 [i_1] = (min(-var_7, -7672));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_9 [i_2] = ((~(~23)));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_12 [i_2] = (max(var_7, ((~((~(arr_7 [i_2])))))));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_15 = (max(var_15, ((((15 ? -1455873894 : 68))))));

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_16 = (min(var_16, (((((max((arr_17 [i_2] [22] [i_4] [i_5] [i_2]), 68))) - (~-1455873893))))));
                    var_17 ^= (((~68) ? (arr_15 [i_2] [i_2]) : (min((arr_7 [i_4]), ((var_1 ? var_6 : (arr_14 [i_4])))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_21 [16] [i_4] [i_4] [i_4] [i_4] [i_4] |= (min(((((var_8 ^ (arr_17 [22] [i_3] [1] [i_6] [i_6]))))), -var_4));
                    var_18 = (min(((~(arr_19 [i_2]))), (arr_18 [i_4] [i_6])));
                    var_19 = (arr_18 [i_4] [i_2]);
                }

                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    var_20 ^= (((arr_17 [i_2] [i_3] [i_4] [i_4] [i_7]) || ((((arr_19 [i_4]) * (124 / 1999614899))))));
                    var_21 |= -1455873888;
                    arr_25 [i_2] [i_3] [i_3] [i_2] [i_4] [i_7] = max((max((arr_22 [17] [i_3] [i_3] [i_2]), (((arr_24 [i_4] [i_3] [i_2] [22] [21] [i_4]) ? 4989523370484041677 : 47662)))), (((~(arr_13 [i_2] [i_3] [i_4] [i_7 - 1])))));
                    arr_26 [i_2] [i_3] [i_3] [i_4] [i_2] = (!((((((~30802) + 2147483647)) << (((((min((arr_16 [i_2]), var_5)) + 1486725343)) - 1))))));
                }
                for (int i_8 = 3; i_8 < 23;i_8 += 1)
                {
                    arr_29 [7] [i_2] [i_4] [i_8 - 2] = (arr_27 [6] [i_2] [i_4] [i_4]);
                    var_22 ^= (((max((var_6 | -30803), (~var_0))) | (~558076784)));
                }
            }
            arr_30 [i_2] [13] [i_3] = ((-(min((arr_20 [i_2]), (arr_24 [13] [i_3] [i_2] [i_3] [i_3] [i_2])))));
        }
        arr_31 [0] [i_2] |= ((+(max((-9223372036854775807 - 1), ((min((arr_28 [i_2] [i_2] [i_2] [17] [1]), (arr_19 [2]))))))));
    }
    #pragma endscop
}
