/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (max(1, (min((arr_0 [i_0]), (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = ((!(~862889785)));
            arr_6 [i_0] [i_1] &= (((var_14 | var_9) >= ((862889785 ? 597248448 : 164))));
            var_19 ^= (var_10 > 597248448);
        }
        arr_7 [i_0] [i_0] = ((var_9 << (var_14 - 3437635263)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_20 += ((-597248448 > ((-((var_8 ? -14964 : 0))))));
        var_21 &= min((((~-1) % ((-886362021 ? var_15 : var_10)))), (!15861413612313655992));
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_13 [i_3] = ((var_4 ? -121 : (((var_4 >> (4878136768935015218 - 4878136768935015193))))));
        var_22 = ((((var_2 ? var_3 : -597248449)) > ((((arr_0 [i_3 - 1]) <= (arr_0 [i_3 + 3]))))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_23 *= (((203 * 914952058) > (((((var_3 ? 914952055 : var_17))) ? (min(1, -3443924339689480843)) : 142581425))));
                    arr_24 [i_4 - 1] [11] [i_6] = ((+((min((arr_15 [i_5]), (arr_22 [1] [i_5] [i_4 - 1] [i_5]))))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_24 = (min((((!((((-7909 + 2147483647) >> 0)))))), 914952055));
            var_25 = (min(((1876680239 % (arr_19 [i_4 - 1] [i_4 - 1]))), -1876680243));
        }
    }
    var_26 = ((((!(!57223))) ? var_16 : ((var_4 ? var_2 : (!var_5)))));
    #pragma endscop
}
