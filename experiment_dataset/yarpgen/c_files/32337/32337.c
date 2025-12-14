/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((0 ? 182 : -1158554035));
    var_19 = (max((((-85 < var_1) ? var_8 : (1015156244 <= 69))), var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];
        arr_3 [i_0] = (((arr_1 [i_0]) > (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (((arr_5 [i_1]) & (arr_5 [i_1])));
        var_21 = 3173163742;
        var_22 = 1;
        var_23 += max((max((arr_4 [i_1]), ((max(-85, 1))))), 2147483647);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_24 = 196;
            arr_10 [i_2] [i_1] [i_1] = ((((var_10 ? var_8 : var_13))) ? ((((((arr_9 [i_1]) * 1))) ? ((max(1, 196))) : (arr_8 [i_1] [i_1] [i_2]))) : (arr_6 [i_2] [i_1]));
            arr_11 [i_1] = (arr_4 [i_1]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_25 = var_9;
            var_26 = (min(var_26, (((-1766144624 | (((!((((arr_9 [i_1]) ? var_15 : 75)))))))))));
            var_27 = (max(var_27, (arr_13 [i_1] [0])));
            var_28 = 1193542502;
            var_29 = var_1;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_30 = (arr_12 [i_1] [i_1]);
            var_31 = 1;
            arr_18 [i_4] [i_4] = 8;
            var_32 = (max(var_32, -4124065739755455403));
            var_33 = (((((-((min(1, (arr_6 [i_1] [i_1]))))))) ? var_6 : (!1193542502)));
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_34 = ((var_3 ? var_13 : (((var_4 ? (arr_20 [i_5]) : (arr_20 [i_5]))))));
        var_35 = (min(var_35, ((!(((~(arr_19 [24]))))))));
    }
    #pragma endscop
}
