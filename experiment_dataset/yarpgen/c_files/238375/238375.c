/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 ? ((max(var_14, 3))) : -var_12));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_20 &= min((arr_1 [i_0 - 4]), (((((~(arr_0 [i_0] [i_0]))) << ((((max(9, 255))) - 255))))));
        arr_4 [i_0] |= (min(((2 ? 0 : 27412)), (((arr_2 [i_0 + 1]) ? (max(38369, 4294967282)) : ((min((arr_3 [i_0]), (arr_2 [i_0]))))))));
        arr_5 [i_0] [i_0 - 3] &= max((min((((-(arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? -3106676345653234224 : (arr_3 [i_0]))))), (((~(arr_0 [i_0 + 2] [i_0 + 2])))));
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_12 [i_2] [i_2] [i_2] [1] = (38369 % 1);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_21 ^= (arr_8 [i_4]);
                                var_22 = ((!(min((!2647618816), (arr_14 [i_5 - 1] [i_2 + 1] [i_2] [i_1])))));
                                arr_19 [i_2] [i_2] [i_2] = ((!(((((max(255, (arr_6 [i_3] [i_2])))) - ((~(arr_18 [i_1] [i_2] [5] [i_5] [i_2]))))))));
                            }
                        }
                    }
                    var_23 = (((((((~(arr_11 [i_1] [i_1] [1] [i_1])))))) | (max((arr_15 [i_1] [i_2] [i_3] [i_1 - 2] [5]), (arr_14 [i_1] [i_1] [i_3] [i_1 - 2])))));
                    var_24 = 61;
                }
            }
        }
        arr_20 [i_1] &= (arr_14 [1] [6] [i_1] [i_1]);
        arr_21 [i_1] = ((((max((arr_1 [i_1]), ((max(71, (arr_16 [i_1] [i_1] [i_1] [i_1]))))))) ? (arr_2 [i_1 + 1]) : ((-(arr_11 [i_1 - 2] [i_1] [i_1] [i_1])))));
        arr_22 [i_1] = (arr_6 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            {
                arr_29 [i_6] [20] |= ((~(max((arr_3 [i_6 - 1]), (arr_24 [i_7])))));
                var_25 *= ((((arr_27 [0]) / (max((arr_27 [18]), (arr_24 [i_7]))))));
            }
        }
    }
    var_26 = var_17;
    #pragma endscop
}
