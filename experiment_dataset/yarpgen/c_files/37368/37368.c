/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 157;
    var_18 = var_10;
    var_19 = (!var_12);
    var_20 = var_12;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = ((203 ? ((((164 || (arr_0 [i_0]))))) : ((255 ? (arr_1 [i_0]) : 53))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = ((((max(var_14, (arr_0 [i_1])))) ? 37 : ((43 ? 157 : ((157 ? 187 : 7))))));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_23 += var_6;
                arr_7 [i_0] [4] [i_0] = var_2;
                arr_8 [5] [i_1] [6] = (((((arr_2 [i_2 + 3] [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_1)) >> (((arr_3 [i_0] [i_2 + 1]) - 217))));
            }
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_24 *= var_9;
        arr_11 [i_3] [13] = ((((((arr_9 [i_3] [i_3]) ? 16 : 155))) ? ((min(2, (arr_9 [5] [i_3])))) : 99));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (((((min(var_9, 99)))) ? (min((((arr_9 [i_4] [i_4]) ? 20 : 127)), ((var_6 ? var_2 : 252)))) : (((((arr_14 [i_4] [i_4]) ? var_0 : var_7))))));
        var_25 = (max(var_25, ((((arr_9 [i_4] [i_4]) ? ((max((arr_14 [i_4] [i_4]), var_16))) : ((((arr_14 [i_4] [i_4]) == (arr_14 [i_4] [i_4])))))))));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_26 = var_2;
            var_27 = (max((!var_10), (~var_9)));
            var_28 = 18;
            arr_20 [i_4] [i_4] [i_4] = 170;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_29 ^= ((!(!37)));
            var_30 = ((((~(arr_24 [i_4]))) > var_13));
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_31 |= (!110);
            var_32 = (min(var_32, (((max(((1 ? var_5 : 96), 20)))))));
        }
    }
    #pragma endscop
}
