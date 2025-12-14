/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = var_7;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_1] [i_1] = ((arr_7 [11] [i_0 - 2]) == 18796);
                    arr_9 [i_0] [i_0] [i_0 - 3] [i_0] = (min(((min(var_4, (((!(arr_0 [i_1] [i_0]))))))), 8566224314618817821));
                    var_19 = var_12;
                }
            }
        }
        var_20 = (((7449425964915706161 ? (((var_4 & (arr_4 [i_0] [i_0] [i_0])))) : ((var_10 ? (arr_7 [i_0] [8]) : 71)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] = (-86 != var_12);
        var_21 &= (arr_11 [18]);
        var_22 += (((3736272737354424348 ? var_1 : var_13)) & (((((arr_11 [14]) == 201)))));
        var_23 |= ((~(arr_11 [22])));
        arr_13 [i_3] = ((-(arr_10 [i_3])));
    }
    #pragma endscop
}
