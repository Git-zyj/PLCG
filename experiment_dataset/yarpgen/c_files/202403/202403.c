/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 |= (arr_5 [i_0] [i_0 - 1] [i_0]);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_13 = -1;
                        var_14 = min((((arr_5 [i_0] [i_0 - 1] [i_0]) ? -2074 : (arr_5 [i_0 - 1] [i_0 - 1] [5]))), 1);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((~(arr_15 [i_6])))) ? 1 : (((((arr_22 [i_4] [i_5] [i_5] [i_4]) * var_0)) % (~26483))))))));
                    var_16 = ((+(((arr_13 [i_6]) ? (arr_17 [i_4 + 1]) : (arr_13 [i_4 + 1])))));

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            var_17 = ((1 ? (-2074 < 1) : (((arr_20 [i_4 + 2]) ? ((var_1 ? 14 : var_3)) : (arr_15 [i_5])))));
                            var_18 = (max((((-(arr_19 [15] [15])))), (max(1, var_4))));
                            var_19 = (min(var_19, ((((~1) ? ((1 << (arr_20 [i_8 + 1]))) : 1)))));
                        }
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            var_20 = (arr_18 [i_4 + 2] [i_4] [i_4 + 2]);
                            var_21 = ((-(1 >> 1)));
                            var_22 = ((((((!(arr_26 [i_7] [1] [1]))))) | 65530));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_23 |= (((arr_14 [i_6]) ? (((-23672 ? ((1 ? 64708 : 25609)) : (-2 - 0)))) : ((((1 ? 8674543666629042294 : 1)) + 1))));
                            var_24 = (((max(827, 0))));
                        }
                        var_25 = ((12256 ? 1 : 2046));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                {
                    var_26 = ((-((max(0, 52573)))));
                    var_27 -= ((-(min(((var_3 ? 2820391999 : 12963)), ((6522 ? 23537 : 6291456))))));
                }
            }
        }
    }
    #pragma endscop
}
