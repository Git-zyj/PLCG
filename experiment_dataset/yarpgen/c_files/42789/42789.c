/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 120;
    var_15 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = ((arr_0 [i_0 + 4]) & (arr_0 [i_0 + 4]));
        arr_2 [i_0 + 4] = ((var_13 >> (((arr_1 [i_0 + 4]) - 29176))));
        var_17 = (arr_0 [i_0]);
        var_18 = (min(var_18, 549755813880));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = (min((-9223372036854775807 - 1), 3328897236));
        var_20 *= ((((-80 != (arr_1 [i_1])))));
        var_21 ^= min((max(var_6, var_5)), (((arr_4 [i_1 + 3]) ^ 274341036032)));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_22 = (((((max(var_6, var_10)))) ? -6 : 2995807056));

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_23 = (((arr_7 [i_2]) / var_7));
            var_24 += (((((arr_5 [i_2 + 3]) & 4611686018158952448))) ? ((((arr_9 [i_2] [i_2] [i_2]) ? var_2 : 966070059))) : ((max((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))));
            var_25 = ((!((((arr_3 [i_3]) ? ((4611686018423193600 ? (arr_9 [i_2] [i_2] [6]) : (arr_1 [i_2]))) : (((var_3 < (arr_4 [i_2])))))))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_13 [i_2 + 3] [i_4] = ((~(arr_5 [i_2 + 2])));
            arr_14 [i_4] = (((-(arr_5 [i_2 - 1]))));
            arr_15 [i_4] [i_2] [i_2] = 67108800;
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_26 = (min(var_26, (arr_1 [15])));
        var_27 &= 102;
        arr_20 [2] &= (arr_19 [i_5]);
    }
    #pragma endscop
}
