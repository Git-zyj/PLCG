/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_4 ? 9897217493486313992 : var_2))) ? var_3 : var_10));
    var_12 = (2416190420516047162 - -17);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = ((((!(((var_0 ? (arr_3 [i_0]) : 12))))) ? var_8 : 586920660));
                    var_14 = (max(var_14, ((min((((((((!(arr_4 [i_1]))))) ^ (arr_4 [i_2])))), ((var_10 ? (((65526 ? 11 : (arr_7 [i_1] [i_2])))) : (arr_5 [i_1] [1]))))))));
                    arr_10 [i_0] = (min((max((arr_2 [i_1 - 3] [i_1 + 2]), var_2)), ((max(-3, (arr_1 [i_1 + 1] [i_1 + 3]))))));
                }
            }
        }
    }
    var_15 |= (min(-6, 3970080312));
    #pragma endscop
}
