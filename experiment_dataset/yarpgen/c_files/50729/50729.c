/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_10 = (min((arr_0 [i_1 - 1]), 162));
            var_11 = (min(var_11, (((-((((94 ? (arr_0 [i_0 - 1]) : 4294967295)) & 255)))))));
            var_12 = min(50331648, 218);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_1] = (((((-3221910903 == (~1)))) & (((2541564026 >= (!3321562824))))));
                var_13 -= 8388607;
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_14 |= (-5816851467044104714 < 1);
                            var_15 = (3283502384 / 5816851467044104694);
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = (min((max((arr_9 [i_0 + 2] [i_1 + 2]), (arr_9 [i_0 + 2] [i_1 + 2]))), -188));
                            var_16 = ((+(((arr_13 [i_1] [i_3] [i_1] [i_1] [i_1]) ? 1 : 188))));
                        }
                    }
                }
                var_17 += (((((arr_1 [i_1 + 1]) - (arr_1 [i_1 + 2])))) && (arr_1 [i_1 - 1]));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_18 = (-693764692 + 18446744073709551615);
                var_19 = ((!(arr_18 [i_5] [i_1] [i_0])));
                var_20 = (arr_11 [i_0] [i_0] [i_1] [i_5] [i_5] [i_5]);
            }
            arr_19 [i_1] = (max((arr_18 [i_1 - 1] [i_1] [i_0 + 1]), (arr_1 [i_1])));
        }
        var_21 = ((~((((max(-1, 1316001898))) + (((arr_0 [i_0]) ? 58 : 5816851467044104714))))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_22 = (((min((((arr_20 [i_8] [i_8]) ? (arr_14 [i_8] [i_8] [i_8] [i_7] [i_6] [i_8]) : (arr_2 [i_9]))), (((-(arr_10 [i_7] [18] [i_7] [i_7])))))) & (((min(((!(arr_13 [i_8] [i_7] [i_7] [i_8] [i_9]))), ((2147483647 >= (arr_10 [i_6] [i_6] [i_6] [1])))))))));
                        var_23 *= ((27938 ? ((((!(((arr_26 [i_7] [i_7] [i_7] [i_7]) <= (arr_20 [i_8] [i_9]))))))) : ((((min(8, 0))) ? ((215 ? 6825636231973818394 : 1)) : (max(783691130, (arr_0 [i_7])))))));
                        var_24 = (arr_6 [i_6] [i_7] [i_8] [i_9]);
                    }
                }
            }
        }
        var_25 = ((((((((!(arr_16 [1])))) < ((min(27938, 130)))))) * (arr_10 [i_6] [i_6] [i_6] [i_6])));
    }
    var_26 = (min(var_26, ((((-2147483647 - 1) / (var_0 || -255))))));
    var_27 = 1;
    var_28 = (max(var_2, ((((var_7 - var_4) >= (var_1 % 111))))));
    #pragma endscop
}
