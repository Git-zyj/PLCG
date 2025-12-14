/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((-((var_8 ? (~var_9) : var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 &= (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0] [i_0])));
        arr_3 [i_0] &= ((~(arr_0 [i_0] [i_0])));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = -295072289727639332;
        var_16 *= (((arr_4 [i_1]) - (arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = 12839032173574266822;
        arr_11 [i_2] = ((~(arr_5 [i_2])));
        var_17 = arr_8 [i_2];
        var_18 -= (((arr_4 [i_2]) <= 17179607040));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_17 [i_3] = (((arr_9 [i_3]) << (((arr_13 [4]) - 111))));
            var_19 = (arr_8 [i_4]);
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_20 |= 11971;
                        var_21 -= 25;
                        var_22 = (max(var_22, ((((arr_20 [i_7]) >= (arr_12 [i_6]))))));
                        var_23 = (511 || -4157948018840035496);
                        var_24 = ((~(arr_0 [i_3] [i_6])));
                    }
                }
            }
        }
        var_25 *= ((18 ? 1327820207551062557 : (arr_5 [i_3])));
        var_26 = ((-7074640037727826378 ? (arr_1 [i_3]) : (arr_1 [i_3])));
        arr_25 [i_3] = (!53553);
    }
    #pragma endscop
}
