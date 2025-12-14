/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_0 [i_1]);
                var_20 = (arr_0 [i_0]);
                arr_8 [i_0] [i_0] [i_0] |= (arr_1 [i_0] [i_1]);
                var_21 |= (min((arr_3 [i_1] [i_1]), ((max((var_1 + 508), (arr_0 [i_0]))))));
                var_22 = (max((((-(arr_2 [i_0])))), (max((arr_6 [i_0] [i_0]), (arr_2 [i_0])))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        arr_12 [i_2] = ((1845422114 >> ((((((~(arr_1 [i_2] [i_2]))) - (max(-61691536, var_16)))) + 513061780))));
        arr_13 [12] |= ((((~(arr_11 [0])))) | ((~(arr_2 [i_2 - 3]))));
        var_23 = ((~(((((~(arr_4 [16])))) ? (((~(-9223372036854775807 - 1)))) : ((25356 ? var_12 : 7449046323655209997))))));
    }
    var_24 = ((((((((-1845422114 + 2147483647) << (14838749624587914740 - 14838749624587914740))) * (!var_19)))) ? var_14 : var_6));
    #pragma endscop
}
