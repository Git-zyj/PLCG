/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? (max(var_3, var_2)) : ((max(97, var_12)))));
    var_17 = (min(var_17, (((!((min(((var_8 ? var_15 : var_0)), 6818254902654480963))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((((min(4772746191092786209, 6818254902654480940))) ? var_4 : var_4))) ? (min(var_3, var_11)) : var_0));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (+-22);
            arr_8 [i_0] = (arr_2 [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (((var_2 % -2) ? 11628489171055070660 : (min(((~(arr_7 [i_0] [i_0]))), ((((arr_4 [i_0] [i_0] [i_4]) + 25)))))));
                        arr_19 [i_0] = ((-((var_0 ? ((max(var_1, var_7))) : var_12))));
                        arr_20 [i_0] = var_13;
                    }
                }
            }
            arr_21 [i_0] [i_0] [i_0] = ((var_10 + 2147483647) << (((((arr_11 [i_0] [i_0]) / (arr_11 [i_2] [i_0]))) - 1)));
            var_19 = (min(var_19, (arr_0 [i_2])));
            var_20 = ((((((6818254902654480975 && var_5) ? (min(0, 11628489171055070660)) : (arr_14 [i_0] [i_2] [i_0])))) ? (min(11628489171055070676, (var_6 | -86))) : (arr_9 [i_0] [i_0] [i_2])));
            var_21 = (arr_13 [i_0] [i_2] [i_2] [i_0]);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_25 [i_0] [i_5] = (arr_7 [i_0] [i_0]);
            var_22 = 12;
        }
        var_23 += arr_4 [i_0] [i_0] [i_0];
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_36 [i_9 - 1] [i_8] [i_7] = (arr_0 [i_8]);
                        var_24 = (min(((-1035709425 ? (arr_6 [i_6] [i_9]) : 6818254902654480963)), 1));
                        arr_37 [i_9 - 1] [i_8] [i_7] = 1;
                    }
                }
            }
        }
        var_25 *= 1;
        var_26 = (arr_31 [i_6] [i_6] [i_6]);
        arr_38 [i_6] = (((var_8 && var_15) != (min(-86, -1035709425))));
    }
    var_27 = ((var_14 ? (-23 % 6818254902654480960) : var_12));
    #pragma endscop
}
