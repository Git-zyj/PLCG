/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((((max(var_1, (arr_0 [i_0] [i_0])))) ? (((!(arr_0 [i_0] [i_0])))) : (~111)))) ? (max(((144 << (((arr_1 [i_0]) - 3884844301)))), (arr_0 [i_0] [3]))) : -26);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((var_11 && (~140)));
                        var_14 += ((-(arr_1 [i_2])));
                        arr_11 [i_1] [i_2] = (min((((!((max((arr_4 [i_1] [i_2 - 3]), -12103)))))), (((((var_3 ? (arr_6 [12]) : var_6))) ? (~1) : (var_13 & -8606969965756524764)))));
                        arr_12 [i_1] = (max((((var_10 + 82) ? (((arr_4 [i_0] [i_0]) - var_11)) : var_3)), (((((min(var_8, 112))) || (var_13 >= var_0))))));
                    }
                }
            }
        }
        arr_13 [17] [17] &= ((((min(12121, (138 != 12102)))) * (max((arr_5 [12]), ((var_9 ? 2459410663 : var_6))))));
        arr_14 [i_0] [20] = ((!(arr_7 [i_0] [i_0] [i_0])));
    }
    var_15 = ((-(((((var_10 ? var_11 : var_9))) ? ((var_4 ? var_10 : var_11)) : ((min(var_6, 1094876356)))))));
    var_16 = (min(var_16, (((+(((1 >= 180) | (var_1 && 1))))))));
    var_17 -= var_1;
    #pragma endscop
}
