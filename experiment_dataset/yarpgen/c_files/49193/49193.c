/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = (min(var_19, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 &= -16869;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 &= ((+(((arr_7 [i_0 - 3] [i_0 - 2] [i_0] [i_3]) - (-32767 - 1)))));
                            arr_9 [i_3] [i_0] [i_0] [i_0] = (max((~var_17), (min(((~(arr_5 [i_0] [i_1] [i_2] [i_3]))), (((arr_5 [i_3] [i_2] [i_1] [22]) % var_8))))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_22 = (min(var_22, ((((arr_10 [i_4]) ? ((var_6 ? (arr_5 [i_4] [12] [i_4] [i_4]) : 12483)) : (var_1 != var_15))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                {
                    var_23 = (var_15 >= 16474);
                    var_24 *= (arr_4 [i_6 - 1] [14] [14] [i_5]);
                    var_25 = (((arr_13 [i_6]) ? ((12493 ? (arr_7 [i_4] [i_6 - 1] [2] [i_6]) : -27819)) : var_15));
                }
            }
        }
        var_26 = ((!(!var_0)));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_27 = (max(var_27, ((max(((~((-9281 ? 32767 : 4175)))), -4548)))));
        var_28 = (max(var_28, (((-var_8 ? (17316 ^ -21990) : (((-19909 >= ((var_9 ? var_9 : var_10))))))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_21 [i_8] = (((((+(((var_11 + 2147483647) << (29367 - 29367)))))) ? (((!(((21228 ? var_8 : var_17)))))) : var_14));
        arr_22 [i_8] = (min((min(((-(arr_16 [i_8]))), ((var_14 ? var_1 : 29866)))), (min((((arr_13 [i_8]) * var_1)), (arr_20 [i_8])))));
        arr_23 [i_8] = (max((min(32767, ((-10045 ? -19909 : -29368)))), ((max((arr_10 [i_8]), (arr_1 [i_8] [i_8]))))));
    }
    var_29 = 4543;
    #pragma endscop
}
