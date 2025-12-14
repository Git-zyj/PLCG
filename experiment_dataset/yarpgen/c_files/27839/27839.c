/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = (min((((((var_5 ? (arr_0 [i_0] [i_0]) : var_0))) ? (((218 ? var_3 : -21967))) : (arr_0 [i_0] [8]))), ((min((arr_1 [i_0]), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] |= (((((var_8 ? ((min(var_8, 65535))) : (((arr_0 [i_0] [i_0]) ? var_6 : (arr_1 [i_0])))))) ? ((((max(var_6, -77))) ? (((-(arr_1 [1])))) : (arr_0 [i_0] [i_0]))) : (((min(65528, 4746))))));
        var_11 = (max(var_11, ((min((((arr_0 [i_0] [i_0]) * (arr_1 [i_0]))), (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_12 ^= 59;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 7;i_4 += 1)
                {
                    {
                        var_13 = 1;
                        var_14 = (min(var_14, 1));
                        var_15 = var_6;
                    }
                }
            }
            arr_11 [i_1] = (((arr_4 [7] [i_2]) ? (arr_9 [i_2] [i_2] [i_1] [i_1]) : 131071));
        }
        var_16 = ((65535 ? 17569 : 3062021456519702054));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] = ((-8 ? 65525 : 131071));
        arr_16 [i_5] = (arr_8 [2] [3] [8]);
    }
    var_17 = var_9;
    var_18 = ((var_1 * ((((min(var_0, var_4))) ? var_3 : var_0))));
    var_19 |= (max(var_2, 0));
    #pragma endscop
}
