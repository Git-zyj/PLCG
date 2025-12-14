/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] = (1 + -8661776734683459261);
                    var_15 = ((((!((((arr_1 [i_1] [i_2 + 1]) ? var_11 : -24))))) ? ((((73 >> (-24 + 55))) ^ var_11)) : var_1));
                }
                var_16 &= ((((arr_4 [i_1 + 2] [i_1 - 3] [i_1 + 2]) + -var_6)));
            }
        }
    }
    var_17 = ((((((var_0 ? var_2 : var_8))) ? (var_7 * var_10) : -24)));
    var_18 = ((!(((var_10 ? ((var_1 ? 8144 : var_9)) : (69 >= var_0))))));

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_19 = (((71 ? 69 : -45)));
        arr_13 [i_3] = (max(var_3, (arr_11 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_20 = (min(var_20, (!var_9)));
                        var_21 = (min(var_21, (arr_16 [i_4 + 1])));
                        arr_26 [i_5] = ((~(arr_24 [i_5] [i_5] [i_7 + 1] [i_7 - 1] [i_5])));
                    }
                }
            }
        }
        arr_27 [i_4 - 1] = -var_4;
        arr_28 [i_4] = ((-(arr_17 [i_4])));
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        arr_31 [i_8] = (!var_6);
        arr_32 [i_8 - 1] = ((min(69, 12039898884738432487)));
        var_22 = (23 | 44608);
    }
    #pragma endscop
}
