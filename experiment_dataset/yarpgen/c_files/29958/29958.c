/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_13 = 2;
        var_14 = 3985682475;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_15 = 2147483647;
                        var_16 ^= 309284806;
                        var_17 = 183;
                    }
                    var_18 -= 3985682477;

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = -7460960835694624631;
                        var_20 = 3985682458;
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        var_21 = 3985682449;
                        var_22 = (min(var_22, 7460960835694624638));
                        var_23 = 309284846;
                    }
                    var_24 = (min(var_24, -7460960835694624633));
                    var_25 = 1029012897;
                }
            }
        }
        var_26 *= 65535;
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_17 [i_7] [i_7] = 3417742235350029710;
        var_27 = 0;
    }
    var_28 = var_6;
    var_29 = var_8;
    #pragma endscop
}
