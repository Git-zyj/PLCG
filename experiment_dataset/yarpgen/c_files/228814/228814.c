/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_18 = (min(var_5, (arr_4 [i_1])));
            var_19 = (max(((min((arr_3 [i_1 + 1] [i_1] [i_0]), (max(-123, 57))))), (arr_4 [i_1 - 2])));
            var_20 = ((!(var_1 < var_15)));
            arr_5 [i_0] [3] = var_0;
            arr_6 [i_1 - 3] [1] [0] = (~var_6);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_21 = (!1);
            arr_11 [i_0] [i_2 + 3] [i_2 - 1] = (!-var_15);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_14 [13] [i_3] [i_3] = ((max(var_7, (arr_12 [i_3] [i_3]))));
            var_22 = ((~(arr_8 [i_3])));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (((max((min(var_11, var_4)), (~var_8)))))));
            arr_18 [i_0] = var_4;
        }
        var_24 *= (max((max(((min((arr_13 [6]), var_0))), var_4)), (((!(arr_3 [18] [i_0] [i_0]))))));
        arr_19 [i_0] [i_0] = (min(var_13, (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_25 = (max(var_10, (max(-110, var_14))));
    var_26 -= -var_3;
    #pragma endscop
}
