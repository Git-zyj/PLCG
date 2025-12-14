/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (var_9 % var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] = (((((-(arr_3 [i_0] [i_3])))) ? (max(0, (arr_8 [i_0] [i_0] [i_0] [i_2] [i_0]))) : 7587072722267753304));
                        var_17 *= (max(-14780, (((18446744073709551597 && ((min(11940501440876130453, 11940501440876130469))))))));
                        var_18 = -18;
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_19 = -9223372036854775804;
                            arr_18 [i_2] [i_1] [i_5] = 5103;
                            var_20 *= ((var_14 / (arr_6 [i_0] [i_1] [i_0] [i_5])));
                            var_21 = ((126 ? (arr_10 [i_0]) : 249));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_22 = (min((max((arr_8 [i_4 + 1] [i_2] [i_4 + 1] [i_2] [i_2]), var_9)), var_12));
                            arr_22 [i_2] [10] [i_2] [i_2] [i_2] = (min((((!var_6) ? (arr_3 [i_4 + 4] [i_4 + 4]) : -6224)), ((max(((max(var_5, 183))), (var_8 & 118))))));
                            var_23 = (min(var_23, (((45 || (((var_11 ? 9223372036854775804 : var_5))))))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_24 &= -6631360887024947763;
                            arr_25 [i_2] [i_2] = (min((arr_15 [i_7] [i_2] [i_7] [i_4] [i_2] [i_2]), (29796 / 6062110315127945569)));
                        }
                        var_25 -= ((((((arr_14 [i_0] [i_4 - 1] [i_0] [i_4] [i_4] [i_4]) * (arr_14 [i_0] [i_4 + 3] [12] [12] [i_4] [i_4 + 3])))) ? ((((max((arr_8 [0] [i_1] [i_2] [i_1] [i_4 - 1]), var_6))) / (3 % var_6))) : ((((63488 || (arr_17 [i_1])))))));
                        arr_26 [i_2] [i_1] = (i_2 % 2 == zero) ? (((((((arr_11 [i_4] [i_2] [i_4 - 2] [i_2] [i_1]) << (9 - 9)))) ? 69 : ((max((-32767 - 1), 5103)))))) : (((((((((arr_11 [i_4] [i_2] [i_4 - 2] [i_2] [i_1]) + 9223372036854775807)) << (9 - 9)))) ? 69 : ((max((-32767 - 1), 5103))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_26 *= (arr_8 [i_0] [i_1] [i_2] [i_1] [i_0]);
                        var_27 = ((var_8 || ((min(2780613114739205387, (var_13 <= 624971535535308315))))));
                    }
                    arr_31 [i_2] [i_2] = (max((min((var_1 && 254), (min(-3288777540125136556, (arr_17 [i_0]))))), -110));
                    arr_32 [i_0] [i_1] [i_2] [i_2] = (max(51, (((arr_4 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_28 -= var_5;
    #pragma endscop
}
