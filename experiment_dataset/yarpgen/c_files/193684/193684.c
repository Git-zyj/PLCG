/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_12 -= (arr_1 [1] [10]);
        arr_3 [1] [1] = (max(((+(((arr_1 [2] [i_0]) + var_8)))), -5527343351897613500));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_13 ^= (255 * 251);
        arr_8 [i_1] = (arr_6 [i_1 + 1]);
    }
    var_14 = var_3;

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 *= (arr_10 [i_2] [i_2]);
        arr_11 [i_2] [i_2] = ((!(((-(arr_10 [i_2] [1]))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        var_16 -= (~var_9);
                        arr_21 [i_3] [23] [i_5] [i_6] = ((-241 ? (((max((arr_20 [i_3 + 2] [i_3]), (arr_17 [i_3]))) + 33)) : (arr_13 [i_5])));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_17 *= (arr_19 [i_4] [i_4] [i_4] [i_5] [i_7]);
                        var_18 = ((((((20 ? var_11 : (arr_19 [i_3] [i_4] [i_5] [i_5] [i_7])))) ? (arr_18 [i_3 + 2] [i_7] [i_5] [i_3]) : 1)));
                        var_19 = (min(var_19, 35));
                        var_20 *= (!((!(arr_16 [i_3 + 1] [i_4] [i_5]))));
                    }
                    var_21 = ((!((min(-23972, (arr_12 [i_3] [i_3]))))));
                    var_22 ^= ((((min(((((arr_24 [i_3] [16] [i_4] [14] [i_3] [i_3 + 2]) > var_11))), (arr_20 [i_3] [i_5])))) < (max(1, (((arr_22 [i_3] [i_3] [i_4] [1] [20]) - (arr_13 [i_3])))))));
                    var_23 = (!1);
                }
            }
        }
    }
    var_24 *= -var_2;
    #pragma endscop
}
