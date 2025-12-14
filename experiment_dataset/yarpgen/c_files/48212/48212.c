/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((((min(2050755774, ((min(var_5, 1)))))) % (--2429787559)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (((((max(var_7, (arr_0 [i_1]))))) ? 36353 : ((233 ? 45 : -15))));
                    arr_8 [i_0] [i_1] [i_2] = ((((((((-(arr_0 [i_1])))) ? 23 : (arr_6 [i_2])))) & (max(943465321, var_5))));
                    var_12 = 32767;
                }
            }
        }
        var_13 = max(7009005782039016649, (((-(min((arr_3 [i_0]), 23046))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] = (2572832137 - -610826056);
        var_14 &= (((((!(arr_11 [10])))) >= (~var_5)));
        var_15 = var_4;
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_16 = (arr_15 [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_17 = 14577298572137635705;
                        var_18 *= (min(16, (arr_18 [i_4])));
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        var_19 |= (max((((arr_19 [i_8 - 1]) ? ((var_3 ? var_1 : (arr_13 [i_8]))) : var_9)), (((~(arr_0 [i_8 - 2]))))));
        var_20 = var_7;
    }
    #pragma endscop
}
