/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min((((var_1 ? -1 : 1))), var_0))) ? (((!(((var_2 ? 697795659 : var_13)))))) : var_5);
    var_21 = (((((var_14 >= var_13) ? (!var_10) : ((var_7 ? var_5 : var_6))))) ? ((~(max(11702, -4596331799868811356)))) : (((((1 < var_5) >= (max(var_2, var_3)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_22 = (max(var_22, (((!(((~(arr_3 [i_0 - 1])))))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_23 = (((!-1) || ((((((arr_5 [i_0]) ? (arr_4 [i_0] [i_1]) : var_7))) == ((1974769947 | (arr_1 [i_0])))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_24 = (arr_2 [i_0 - 1]);
                var_25 = (((arr_6 [i_0] [i_1] [17]) ? 1 : (((65535 || (arr_4 [i_0] [i_0]))))));
                var_26 *= (arr_7 [i_2] [i_2] [1] [1]);
                var_27 = (min(var_27, -2328217887032349286));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_28 = arr_6 [i_0 - 1] [i_1] [i_3];
                arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (max((((((((arr_5 [i_0]) ? -4596331799868811363 : 4596331799868811361)) + 9223372036854775807)) << (((max((arr_8 [i_0] [i_1] [i_1]), (arr_5 [i_1]))) - 1)))), (!-4596331799868811363)));
                var_29 = (min(0, var_16));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_30 = ((-7384125865681563002 ? (~31677) : (arr_6 [i_0] [1] [1])));
                var_31 = (~127198581);
                var_32 = ((-((4596331799868811364 ? var_10 : var_11))));
            }
            var_33 = (max(var_33, (!4176903519)));
            arr_14 [i_0] = max((min((arr_12 [18] [18] [18] [i_0 - 1]), (arr_12 [i_1] [4] [4] [i_0 - 1]))), (min((-127 - 1), (arr_12 [i_1] [10] [10] [i_0 - 1]))));
        }
    }
    var_34 = (~var_3);
    #pragma endscop
}
