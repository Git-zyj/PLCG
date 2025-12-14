/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!(((var_4 ? var_0 : var_10)))))) << ((((((var_2 ? var_7 : var_16))) && (((var_5 ? var_10 : var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 -= var_18;
                    arr_6 [i_0] [i_0] [i_2] [i_0] = (i_2 % 2 == zero) ? (((((((max(167077989, 1589815788)) << ((((var_18 ? (arr_4 [i_2] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_2]))) - 3194379731))))) ? (((463511824 ? 29609 : 2147483647))) : (((arr_5 [i_0]) ? ((var_14 ? (arr_4 [i_2] [i_1] [i_2]) : var_16)) : var_5))))) : (((((((max(167077989, 1589815788)) << ((((((var_18 ? (arr_4 [i_2] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_2]))) - 3194379731)) - 1243851006))))) ? (((463511824 ? 29609 : 2147483647))) : (((arr_5 [i_0]) ? ((var_14 ? (arr_4 [i_2] [i_1] [i_2]) : var_16)) : var_5)))));
                    arr_7 [i_2] [i_2] = (((((arr_3 [i_1 + 4] [i_0]) ? (arr_3 [i_1 - 1] [i_2]) : (arr_3 [i_0] [7])))) ? ((((arr_0 [i_1 - 3]) ? (arr_3 [i_0] [i_1 + 2]) : (arr_3 [i_0] [i_1 - 3])))) : ((var_8 ? (arr_0 [i_0]) : var_4)));
                    arr_8 [i_2] [i_1] [i_2] = arr_0 [i_2];
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}
