/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 += (min((arr_8 [i_0] [i_1] [13] [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_2])));
                    var_19 -= (min((max((((!(arr_0 [i_0 - 2])))), 2861649008)), (~var_11)));
                    arr_9 [i_0] [i_0] [i_2] = (!1);
                    var_20 |= (min(4521784029747469892, ((max(var_6, (arr_5 [i_0 - 1]))))));
                }
            }
        }
    }
    var_21 = var_10;

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_22 = (~((max(236, -1))));
        var_23 ^= (!((min(44, 44))));
        var_24 = ((~(!var_14)));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_25 *= max((~44), 41);

        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_19 [1] [10] [1] |= ((-((max(var_14, 207)))));
            arr_20 [1] [i_4] [1] = max((min(49, (arr_10 [i_5 - 1] [i_5 + 2]))), (arr_10 [i_5 + 4] [i_5 + 2]));
            var_26 -= var_2;
            arr_21 [i_4] [i_4] = (~198);
            arr_22 [i_4] [i_4] [i_4] = ((-(arr_14 [i_5 - 1] [i_4])));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_27 [i_6] = (arr_17 [i_6]);
        var_27 |= ((-(arr_12 [i_6] [i_6])));
    }
    #pragma endscop
}
