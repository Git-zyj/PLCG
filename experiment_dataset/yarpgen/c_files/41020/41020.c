/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 &= ((((-(arr_5 [i_0] [i_1]))) != (31 | -21999)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_14 = ((var_11 ? (((!(arr_3 [i_2 - 1])))) : (arr_6 [1] [i_2] [i_2])));
                        var_15 = ((-((((max((arr_0 [i_0 + 1]), (arr_3 [i_0])))) ? (((arr_5 [i_0] [8]) + (arr_9 [i_0 - 2] [7] [5] [i_0] [i_0] [i_2]))) : (!-1825579594445902899)))));

                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            var_16 = (min((((!(arr_8 [i_1] [i_4 + 2] [i_4 - 3] [1] [1])))), ((~(((!(arr_4 [7]))))))));
                            arr_12 [8] [i_2] [i_2] = (arr_5 [i_0] [i_1]);
                            var_17 = ((((-(arr_10 [1] [i_0 - 2] [1] [7] [i_4]))) * ((((!(arr_11 [i_0 + 1] [i_2])))))));
                            var_18 |= max(((-19569 ? ((((arr_1 [i_1] [5]) <= 0))) : -6281)), (arr_6 [i_0] [i_1] [i_2 + 1]));
                            var_19 = ((((arr_7 [i_0] [i_2] [i_2 + 1] [i_4 - 2]) % (arr_7 [i_0] [i_2] [i_2 - 1] [i_4 - 2]))));
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 = ((~(!var_0)));
        arr_17 [i_5] [i_5] = max(19569, ((-(arr_13 [i_5] [8]))));
        var_21 ^= var_1;
    }
    #pragma endscop
}
