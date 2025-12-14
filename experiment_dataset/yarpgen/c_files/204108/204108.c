/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 ^= (!var_8);
                                var_16 = (max(var_16, (!4930003676487441360)));
                                arr_16 [i_2] = ((((-((var_10 ? (arr_1 [i_0] [i_1]) : 61)))) <= var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] = (min(((-(arr_2 [i_5] [i_5] [i_5]))), (((arr_8 [i_5]) >> (arr_8 [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [i_5] [i_7] = (min((var_8 <= var_10), var_3));
                        var_17 = var_7;
                        var_18 += var_10;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_19 = var_7;
                        var_20 = ((1 ? (min(2172404069, 3452012497)) : var_7));
                    }
                }
            }
        }
        var_21 = (max(var_21, (min(((12597936335891212117 ? var_3 : 2172404048)), (min(3452012504, 18))))));
    }
    #pragma endscop
}
