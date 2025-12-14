/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = ((33317 ? (((var_2 < var_12) ^ (~51833))) : ((((min(1, 3820090040)) != (2147483647 - 25))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [0] &= (((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 2])));
        arr_3 [i_0] [i_0] = (var_10 || var_14);
        var_20 -= (((arr_0 [i_0 + 2]) == ((-var_6 ? (min(3, 93)) : (((min((arr_1 [i_0]), (arr_1 [i_0 - 2])))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1 - 2] [i_0] = (arr_8 [i_0] [i_0 - 2] [i_0 + 2] [i_0]);
                        arr_12 [i_0 + 2] [i_0] [16] = ((~(arr_7 [i_1 - 1])));
                    }
                }
            }
        }
        arr_13 [i_0] [18] = ((((max((max((arr_8 [i_0] [i_0 - 1] [i_0 + 1] [i_0]), var_17)), (((!(arr_9 [i_0 - 2] [i_0 - 2]))))))) == (max(((-(arr_7 [9]))), 7))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        arr_18 [i_4 - 1] [i_4] = 1073741760;
        var_21 = 51833;
        arr_19 [i_4] = var_7;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_22 = ((1 - (arr_6 [i_4 + 1] [i_4])));
                    var_23 = (((arr_22 [i_4 - 1] [i_4 - 1]) == ((18013921555499127333 ? -1415084748 : (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    var_24 = (max(var_24, (((217 | ((max(var_10, var_9))))))));
    var_25 = ((~((((max(13, var_1))) ? 25020 : -8917483066041910183))));
    #pragma endscop
}
