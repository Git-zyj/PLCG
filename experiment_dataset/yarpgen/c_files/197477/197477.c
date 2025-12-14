/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_7 / -1931509073496344745);
    var_12 |= (255 != 255);
    var_13 = 18446744073709551615;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = ((16515235000213206869 ? -1223197842271647731 : 37601));
                        var_15 = (min(var_15, ((!(arr_9 [i_0] [i_0])))));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_16 = ((0 + ((-32743 ? 16383 : (min(1931509073496344754, 1496577917))))));
                    var_17 += ((((((-127 - 1) * 247))) ? 5715363384222662281 : (((-29310 ? -870826675 : -32743)))));
                }
                var_18 = (max(var_18, ((((arr_10 [i_4] [i_4] [i_4]) * (((arr_11 [i_4 + 3] [i_4] [i_4] [i_4]) ? 1931509073496344745 : (max(9223372036854775797, 16478342434506856276)))))))));
            }
            /* vectorizable */
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                arr_19 [i_0] = (var_2 + ((((arr_8 [i_1] [i_1]) + 252))));
                var_19 = (arr_8 [i_0] [i_0]);
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_20 = (min(var_20, (((1 ? (((5 ? 5715363384222662281 : 42))) : 12530373321534570534)))));
                var_21 = (min((!16326690705219411646), 3));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_22 = 1;
                            var_23 &= ((!((((!32736) ? 12438083651741418979 : (arr_21 [i_9] [i_9] [i_9] [i_9]))))));
                        }
                    }
                }
            }
        }
        var_24 = (!16515235000213206883);
        arr_28 [i_0] = 1408072131;
        arr_29 [i_0] = (13792544288152017364 ? var_0 : 24162);
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_25 |= var_5;
        arr_32 [i_10] [i_10] = ((-(arr_30 [i_10])));
        arr_33 [i_10] |= -237;
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_36 [i_11] = (arr_34 [i_11]);
        arr_37 [i_11] [i_11] = -662497346;
        arr_38 [i_11] = (arr_35 [i_11]);
        arr_39 [i_11] = (min((~-9059666530245301297), (arr_31 [i_11])));
    }
    var_26 = var_6;
    #pragma endscop
}
