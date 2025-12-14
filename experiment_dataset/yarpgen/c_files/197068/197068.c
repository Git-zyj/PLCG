/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (min((var_1 - var_3), var_2));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((~(arr_0 [i_0]))), (((!(arr_0 [i_0]))))))) ? (((((max(6745220831335550188, 2147483647)) != (max((arr_1 [12] [i_0]), (arr_0 [i_0]))))))) : (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_13 ^= (arr_0 [i_0]);
    }
    for (int i_1 = 4; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1 + 1] = ((((((arr_5 [i_1 + 2] [i_1 - 2]) ? (arr_0 [i_1 - 3]) : (arr_1 [i_1] [i_1])))) ? var_5 : (((arr_5 [i_1] [i_1 + 1]) ? (arr_1 [i_1 - 3] [i_1 + 1]) : (arr_0 [i_1 - 2])))));
        var_14 ^= (max(((max(var_8, ((var_11 | (arr_4 [i_1])))))), (max((arr_0 [1]), ((var_4 ? (arr_0 [i_1 - 3]) : var_9))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_4 - 1] [i_5] = ((((((((var_8 - (arr_16 [i_2] [i_2] [i_2] [14] [i_4] [i_5 + 2])))) ? (arr_17 [i_2]) : (arr_16 [i_3 - 1] [i_4 + 1] [i_4] [i_4] [i_5 - 2] [i_5 + 2])))) ^ ((6745220831335550178 ^ (((var_6 ? (arr_15 [i_3] [i_2]) : (arr_15 [i_3 + 1] [i_2]))))))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_15 ^= (((((((max((arr_17 [i_6]), var_8))) ? (arr_11 [i_6]) : (arr_13 [i_3] [i_5 - 2] [i_6])))) ? 18446744073709551607 : (max((var_6 - var_4), (((-2147483641 & (arr_8 [i_6]))))))));
                            var_16 ^= (arr_19 [i_2] [i_3 + 1] [i_4 - 1] [11] [11]);
                            arr_21 [i_2] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3] = (var_11 <= var_6);
                        }
                    }
                }
            }
        }
        var_17 = (min(((((3459877351886894480 ^ 63) ? ((max(var_9, var_8))) : -3124122651659185452))), ((((arr_7 [i_2]) / (arr_8 [i_2]))))));
        arr_22 [i_2] = (arr_14 [i_2] [i_2] [i_2] [14]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                {
                    arr_30 [i_2] [i_7 - 1] [i_2] = ((((var_11 > (arr_16 [i_2] [i_7 + 1] [i_7] [i_7] [i_8] [i_8]))) ? (((arr_14 [i_8] [i_8 + 1] [i_2] [i_8 + 1]) ? (arr_25 [i_8]) : (arr_13 [i_2] [i_8] [i_8 - 1]))) : -6568169990226392129));
                    var_18 = ((var_1 ? (((~(min((arr_15 [i_2] [i_2]), var_11))))) : (min((arr_10 [i_7 + 1] [i_8 - 1]), (arr_8 [i_2])))));
                    var_19 = (arr_20 [i_8 - 1] [i_7 - 1] [i_7 + 2] [i_8 + 1] [i_2] [i_2]);
                    var_20 ^= (max((((!(arr_9 [i_2])))), ((~(((!(arr_20 [i_2] [i_2] [i_7] [i_8] [i_8 - 1] [i_8]))))))));
                }
            }
        }
    }
    #pragma endscop
}
