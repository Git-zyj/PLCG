/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (arr_3 [i_0])));
                arr_5 [i_0] = (arr_4 [i_0]);
                arr_6 [10] [14] &= ((max(var_8, (min(var_0, var_4)))) <= var_0);
                arr_7 [i_1] [i_0] [i_0] = ((!((((~(arr_2 [i_0]))) > ((max(var_2, 0)))))));
                arr_8 [i_0] [i_0] [i_0] = ((32760 ? ((((((arr_0 [i_0]) == 600554830)) ? ((3857269969 ? (arr_4 [i_0]) : var_0)) : (1 <= 1)))) : 2979105244102267020));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_11 &= ((!128) ? ((((arr_3 [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_12 [i_2])))) : (arr_1 [i_2]));
        var_12 += var_5;
        arr_13 [3] = (!var_5);
        arr_14 [i_2] = (var_2 & 1);
        arr_15 [20] [i_2] = ((((437697329 - (arr_11 [i_2]))) > (arr_3 [i_2])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_13 = (max(var_13, ((((arr_19 [i_3] [i_3]) ? (arr_17 [16]) : ((((arr_9 [i_3] [i_3]) ? (arr_4 [18]) : (arr_9 [i_3] [i_3])))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_6] [i_4] = ((var_5 ? var_6 : (arr_26 [i_6 - 1] [i_6 + 1])));
                                var_14 *= (((((!(((4294967294 ? 27 : 38747))))))) == (~1966080));
                            }
                        }
                    }
                    arr_29 [i_3] [i_4] = (arr_20 [15] [i_4]);
                    var_15 = (max(var_15, (((((min((min((arr_4 [i_3]), (arr_2 [i_5]))), (((var_6 >= (arr_17 [i_3]))))))) ? 1 : 32256)))));
                }
            }
        }
        var_16 ^= 1;
    }
    #pragma endscop
}
