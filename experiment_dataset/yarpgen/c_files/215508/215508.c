/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(35364, 6947525365870257521));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!(!1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_0] [i_0]) ? (((arr_3 [i_0] [i_1] [i_2]) % 5519)) : (arr_6 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 += (arr_12 [6] [i_1] [i_2] [i_2] [i_3] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] = (!(arr_9 [i_1] [i_2] [i_3]));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        var_19 = ((+((((((arr_16 [i_5] [i_5 + 1]) ? 30389 : -21343))) ? ((((arr_16 [i_5 - 2] [i_5 - 2]) <= 117))) : (1 == 4)))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_6] [i_7 + 2] [i_7 + 2] [i_6] = ((-(((arr_21 [i_7 + 2]) ? (((!(arr_24 [i_6])))) : ((max((arr_18 [i_5 - 3] [i_6] [i_7]), 1)))))));
                        arr_26 [i_8] [i_6] [i_6] [i_6] [i_5 - 1] = 1;
                        var_20 = ((~-93) ? (((arr_19 [i_7]) ? (arr_23 [i_8] [18] [i_6] [i_5]) : ((min(32750, 508))))) : ((-51 ? ((-32609 ^ (arr_19 [0]))) : 74)));
                        var_21 = (((arr_16 [i_5] [i_5]) ? 10893856097391209985 : ((min((5 & 35), (arr_21 [i_7 + 2]))))));
                    }
                }
            }
        }
        arr_27 [15] [i_5] = (((-513 >= 15763) >= 0));
        var_22 = (((max(((-9111242902452040861 - (arr_19 [i_5 - 2]))), ((max((arr_22 [i_5 - 1] [i_5]), (arr_17 [i_5] [12] [12])))))) > (((~(arr_24 [i_5]))))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_23 ^= ((((max(73, 515))) << (((((max(513, 1))) && (~64193))))));
        arr_31 [i_9] = ((!(((-(arr_28 [i_9] [i_9]))))));
        var_24 += (max((arr_18 [i_9] [i_9] [i_9]), ((-((min(525, 33)))))));
    }
    #pragma endscop
}
