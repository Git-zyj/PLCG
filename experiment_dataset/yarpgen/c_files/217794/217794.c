/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 + 2] = 4225355211;
        var_14 += -1136282275;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = 3820262833;
        var_15 = 40;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_1] [3] |= 10551686114959756803;
            arr_12 [11] [10] [i_1] = 40;
            var_16 = 46;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {
                    arr_19 [i_1] [i_1] [i_1] [i_4 - 3] = 119037885;
                    var_17 = 68;
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_23 [4] = 4225355182;
        arr_24 [i_5] [i_5 - 1] = 2768670683;
        var_18 = -48866936;
        arr_25 [i_5] [i_5 + 1] = 2781286104;
        var_19 -= 95;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                var_20 = (min(var_20, (-2147483647 - 1)));
                var_21 = 4225355181;
            }
        }
    }
    var_22 += 85;
    #pragma endscop
}
