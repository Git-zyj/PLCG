/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_16 ? var_13 : (((var_8 ? 35766 : 1))))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_1 + 2] [i_2] [i_3] [1] = (arr_2 [i_0] [i_0] [i_0]);
                            var_20 = (max(var_20, 1));
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_21 = (((arr_6 [1] [i_2 + 1] [i_3]) ? -var_17 : ((((-88 ? (arr_7 [i_0] [i_2] [i_2] [3]) : -1748307765077670373))))));
                            var_22 ^= (((1 & (!var_16))) > var_6);
                            var_23 = ((+((((((arr_1 [i_1] [i_1]) ? (arr_10 [i_0] [i_1 + 2] [i_2 + 1] [i_3] [i_2 + 1]) : var_16))) ? -24 : 1))));
                        }
                        arr_16 [i_0] [i_0 - 1] [i_1] [1] [i_2] [1] = 1;
                        var_24 += (arr_1 [i_0] [i_2 - 3]);
                    }
                }
            }
        }
        arr_17 [i_0] = var_5;
        arr_18 [7] |= (max(4, 4264286611117980241));
        var_25 *= ((!(arr_5 [i_0])));
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_26 = (((1 ? 1 : ((60 - (arr_19 [i_6 + 2]))))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    var_27 = (min((arr_25 [i_6] [i_6] [i_7 + 1] [i_6]), (min((!0), var_11))));
                    var_28 = var_10;
                }
            }
        }
        var_29 = (arr_21 [1] [i_6] [i_6]);
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_30 = (((((var_1 << ((((var_7 ? (arr_2 [i_9] [i_9] [9]) : (arr_24 [i_9] [i_9] [i_9]))) - 1251))))) ? (max(((max(71, var_1))), (2288753388 ^ 27))) : -127));
        arr_30 [i_9] [i_9] = (min((max((arr_20 [i_9]), 164)), (arr_27 [i_9])));
        arr_31 [1] [i_9] = ((+(max((((-64 + 2147483647) << 0)), 1))));
    }
    var_31 &= var_17;
    #pragma endscop
}
