/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min((((94 ^ var_5) ? ((var_14 ? 13054898321261990023 : var_11)) : 0)), 252));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = 30059;

                            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, (((((((var_2 ? -255554989 : var_6)) << (var_8 + 1917409940)))) ? ((-(arr_13 [0] [14] [i_1] [i_1] [0]))) : ((max(-16777216, (!0))))))));
                                var_18 = (((((0 ? -514 : 4174871333))) ? (((!(arr_4 [i_0] [i_2] [i_3])))) : (((arr_10 [i_0] [i_0] [5] [9] [1] [i_0]) * (arr_10 [3] [i_0] [3] [i_2] [i_3] [13])))));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                arr_18 [14] [i_1] [i_2] [i_0] = (arr_13 [i_0] [i_0] [i_2] [i_2] [3]);
                                arr_19 [i_0] [i_1] [4] [2] [i_5] &= 11369431826767197837;
                                arr_20 [8] [i_1] [i_0] = ((((((max(11151156318827184154, 1))))) + var_4));
                                arr_21 [i_3] [i_0] [i_0] [i_0] = (max((((3 == (arr_3 [i_0] [i_0] [i_2])))), ((0 ? -423 : (-127 - 1)))));
                            }
                            arr_22 [i_0] [i_1] [i_2] [i_0] = (min((max((((3458764513820540928 ? 244 : 5697133221248097852))), (min((arr_3 [i_1] [i_0] [i_1]), var_4)))), (((-1 ? 1355904371 : -126)))));
                            arr_23 [i_3] [i_3] [i_0] [i_3] [i_3] [i_3] = (((((-9 ? 18446744073709551615 : 435125625))) ? 4294967289 : (max((arr_11 [i_3] [i_0] [i_0] [i_0]), ((((arr_11 [i_3] [i_1] [i_0] [i_3]) < 524287)))))));
                        }
                    }
                }
                arr_24 [i_0] = (((((-(max(7888558592841788624, var_8))))) ? 16 : ((((((-2147483647 - 1) > var_14)) || var_0)))));
                arr_25 [i_0] = ((-1862268502 ? var_3 : ((max((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_19 = (6450764763120388606 - 103);
    var_20 = (max((((-122 - ((max(var_0, 130)))))), (-2453783151 - 60)));

    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        arr_28 [i_6] [24] &= (max((((arr_27 [14]) * -88)), (arr_27 [18])));
        var_21 = ((!(((((4647122338851873930 ? var_9 : 32746)) ^ ((1 ? var_0 : 0)))))));
    }
    #pragma endscop
}
