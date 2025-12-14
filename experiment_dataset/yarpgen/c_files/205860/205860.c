/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = min((((8001453014918346815 >= (((var_0 ? 10657 : (arr_3 [i_1 + 2]))))))), (max((((arr_1 [i_0] [i_1]) ? var_4 : 0)), var_6)));
                arr_6 [i_0 + 1] [1] [1] = (arr_1 [i_0] [11]);
                var_20 = (((arr_1 [i_1 + 1] [14]) && ((!((min(var_13, 10445291058791204800)))))));
            }
        }
    }
    var_21 -= (-86 / -5356383632684061777);

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_22 = ((~(((arr_8 [i_2 + 1]) ? (arr_7 [i_2 - 2] [i_2 + 1]) : (arr_7 [i_2 - 2] [i_2 + 1])))));
                    var_23 |= ((!(arr_11 [i_2 - 1] [i_4])));
                    var_24 = ((!((min(948315339, (!var_1))))));
                }
            }
        }
        var_25 = (max(var_25, ((18446744073709551610 ? ((((((arr_12 [0] [15]) ? (-127 - 1) : 1))) ? (arr_14 [i_2] [i_2 - 2] [i_2]) : (max(var_14, 1502700333)))) : (((min((arr_7 [i_2 - 3] [i_2 + 2]), 153))))))));
        var_26 |= (arr_10 [i_2] [i_2]);
        var_27 = (max(var_27, (arr_8 [16])));
    }
    var_28 = var_16;
    var_29 = (var_4 ? -948315349 : ((max(-357737404017805100, var_1))));
    #pragma endscop
}
