/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 *= max(10525, 9949);
        arr_4 [i_0] = ((((arr_1 [i_0] [i_0]) ? (~var_16) : (-32767 - 1))) >= ((min(((((arr_2 [i_0]) <= (arr_3 [i_0] [i_0])))), var_3))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = 3221225472;
        var_19 = (((arr_1 [6] [i_1]) + var_3));
        var_20 = (((arr_7 [i_1]) ? var_7 : (arr_7 [i_1])));
        var_21 = 8991720450255142256;
        var_22 = var_13;
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_23 = 61244;

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            var_24 = (max(((((arr_7 [i_2 - 1]) ? var_10 : var_14))), (min(var_4, var_17))));
            var_25 = (((~8991720450255142271) ? 8991720450255142256 : ((((max(var_10, var_5)) & var_12)))));
            var_26 += (max(-4291, (((arr_6 [i_2 - 1]) % var_3))));
            var_27 += var_11;
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_28 += ((((((-4291 + 2147483647) << (((max(var_7, 8991720450255142243)) - 8991720450255142243))))) ? (~-3845) : 8436073012834282223));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_19 [i_2] [i_4] [i_2] = -57;
                arr_20 [i_2] [i_4] [i_5] [i_2] = (((57 ? (arr_1 [i_4] [i_5]) : var_8)));
            }
            arr_21 [i_4] = (max(9455023623454409373, (max((var_5 / -522223143), (~6)))));
            var_29 = ((!(((var_5 & (-43 <= var_4))))));
        }
        var_30 *= (((((57 ? var_0 : (((arr_18 [8] [i_2]) ? var_11 : var_0))))) ? var_1 : 1375047340));
    }
    var_31 = ((40806 ? 1792 : var_8));
    #pragma endscop
}
