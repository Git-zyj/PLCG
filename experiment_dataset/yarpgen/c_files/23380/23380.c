/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((244 >= 31) >= var_5)))));
    var_14 = min(244, 0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_15 = (max(var_15, (254 / 12)));
        arr_3 [i_0] = (min(240, 16478496606815857815));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, var_9));
        var_17 = (max((arr_4 [i_1]), (max(-5, (((arr_5 [i_1 + 1] [i_1 + 1]) ? -80 : var_4))))));
        var_18 = 4294967295;
        arr_6 [i_1] = (arr_4 [1]);
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((arr_4 [i_2]) != (((arr_4 [i_2 + 1]) / var_9))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_19 = (max(var_19, ((max(((~((29360128 ? -80 : 4265607179)))), (((~(4294959104 >= 3125698960)))))))));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_20 = (max(var_20, ((((min(var_12, (arr_5 [i_2] [i_2 + 1]))) / ((((arr_10 [i_2 + 1] [i_3]) | var_5))))))));
                arr_15 [i_3] [i_2] = (max(((((arr_4 [i_2]) ? (arr_4 [i_2 + 1]) : (min(-115, 3781310326))))), ((((((0 >= (arr_12 [i_2]))))) / (~var_1)))));
                arr_16 [i_2] [i_3] [i_2 + 1] [i_4] &= ((29360128 ? 1 : 0));
                arr_17 [i_2] [i_4] [i_4] [i_2] = ((~((~(((arr_11 [1] [i_3] [i_4]) ? var_7 : 3074774859))))));
            }
        }
        arr_18 [i_2] = 1;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        arr_23 [2] [i_5] = (((~79) | (arr_20 [i_5 + 1])));
        var_21 = var_9;
    }
    #pragma endscop
}
