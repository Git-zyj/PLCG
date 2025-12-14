/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (max(var_10, ((((arr_0 [i_0] [i_0]) ? var_2 : (((var_6 ? 118 : var_1))))))));
        var_11 = (min(var_11, (((~(max(((max(4294967295, 10753))), var_9)))))));
        var_12 ^= (min(1, (var_7 - var_2)));
        var_13 ^= ((max(var_3, var_2)));
        var_14 -= (var_6 - 1442);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 = (max(var_15, var_8));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, var_2));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_17 *= ((~(min((max((arr_10 [i_1] [12] [12] [i_3]), (arr_7 [i_1]))), var_0))));
                                arr_17 [i_1] [i_3 - 1] [i_3] [i_1] [i_5] |= var_6;
                            }
                        }
                    }
                    var_18 |= (min((((arr_1 [i_2 + 1] [i_3 - 1]) ? var_2 : var_1)), (9448 & -9105817699445955463)));
                }
            }
        }

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_19 ^= ((~((max(var_2, (!var_6))))));
            var_20 = (max(var_20, ((((0 > 9223372036854775807) ? var_4 : var_0)))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_21 = var_2;
                    var_22 += ((1 ? 1648074148 : 0));
                }
            }
        }
    }
    var_23 = (max(var_23, ((min(var_2, ((((min(var_4, var_9)) > var_1))))))));
    var_24 *= var_7;
    var_25 -= var_4;
    var_26 -= ((65516 ? 1955001443417733859 : 1954443729379879475));
    #pragma endscop
}
