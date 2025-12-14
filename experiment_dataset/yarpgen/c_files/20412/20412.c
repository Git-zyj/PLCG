/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((min((-2147483647 - 1), (max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))) ? ((1640 ? (var_8 & 16942522750351168796) : (((var_7 ? var_2 : (arr_0 [i_0])))))) : 4008928873));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 *= var_14;
            arr_6 [i_0] [i_1] [i_1] = -var_9;
            var_18 ^= (max((arr_0 [i_0]), (((((arr_4 [i_0] [i_0] [i_0]) ? 63895 : 0))))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_19 ^= 1640;
                var_20 = (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_1])));
            }
        }
        var_21 = -1;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = var_2;
        arr_12 [i_3] [i_3] = (884533228 ? 1640 : ((8402808810899774810 ? var_1 : (arr_5 [i_3] [i_3]))));
    }
    var_22 *= (((((var_1 ? var_1 : (0 & 255)))) ? (((((var_1 ? var_15 : var_5))) ? var_0 : var_4)) : var_12));
    var_23 = var_0;
    #pragma endscop
}
