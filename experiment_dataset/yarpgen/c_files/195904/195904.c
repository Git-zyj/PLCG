/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_10, (~var_11)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 &= ((122 ? 0 : 2039073440));
        var_16 = (min(var_16, (((arr_0 [i_0] [i_0]) && (2255893856 - 0)))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = (arr_5 [1]);
        arr_6 [i_1] [i_1] = (min(var_2, (((arr_3 [i_1]) / (arr_4 [i_1] [6])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_3] = (arr_10 [i_2 - 1] [i_2 - 1] [i_1]);
                    var_18 = (max(var_18, (((var_7 | (((!((min(2255893855, 2255893869)))))))))));
                    var_19 += -var_8;
                    arr_12 [i_1] [11] [15] = (((2039073462 ? (arr_9 [i_2]) : -2255893856)));
                }
            }
        }
        var_20 = (((((!(arr_7 [i_1] [i_1]))))) / (arr_7 [i_1] [i_1]));
    }
    var_21 |= ((-((-(max(2576581790, 2039073436))))));
    #pragma endscop
}
