/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(-5682092314257554319, -2624227762795614308))) ? var_9 : var_6));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (max(var_21, 0));
        arr_2 [i_0] = (max(514813954, (+-0)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_22 = 9;
            var_23 = (min(var_23, (~16)));
            var_24 ^= (max(((var_12 % (arr_5 [i_0] [i_1] [i_1]))), 50280));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_25 ^= (min((min(16978, 2373429846)), (((((var_10 ? var_11 : var_18)) <= (var_4 != 15256))))));
            var_26 = (max(var_26, var_17));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_27 |= (arr_1 [i_0] [i_3]);
            var_28 = (((((((0 ? 63 : 1))) ? (((arr_1 [i_0] [i_3]) | 1)) : var_14)) << ((((var_6 ? (arr_9 [i_3] [i_3] [i_0]) : (arr_9 [i_0] [i_0] [i_3]))) - 4746))));
        }
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            var_29 -= (((((var_8 / (arr_10 [i_0] [i_0])))) ? (((min(var_17, var_5)))) : 1));
            arr_16 [i_0] [i_0] [i_4] = (arr_14 [i_4 + 2] [i_4] [i_4 + 2]);
            var_30 = (min(var_30, ((-1663776402 ? (((var_16 != (arr_7 [i_0] [i_4])))) : (((arr_11 [i_0] [i_4 - 2]) * ((var_10 ? 26266 : (arr_0 [i_4])))))))));
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_6] [i_7] = (min(50280, 1));
                    arr_25 [i_7] [i_6] [i_5] = ((((((arr_20 [i_7 + 1] [i_7 + 2]) ? (arr_20 [i_7 + 2] [i_7 + 2]) : 1))) ? var_2 : ((((min(1, -121))) ? 144 : ((var_18 ? 6478 : 1))))));
                    var_31 = var_4;
                }
            }
        }
        var_32 += (arr_12 [13] [i_5] [i_5]);
        arr_26 [i_5] = 2428330573;
    }
    var_33 = (~26269);
    #pragma endscop
}
