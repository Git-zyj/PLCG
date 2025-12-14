/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 = -var_10;
        var_14 *= -9205357638345293824;
        var_15 = (((arr_0 [i_0 + 1] [i_0 - 3]) ? var_0 : (!24573)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = var_7;
        var_17 = (!var_3);
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_18 = (max((arr_8 [2]), (arr_7 [1])));
        var_19 |= (max((min((arr_7 [i_2 - 2]), (arr_7 [i_2 - 2]))), (max((arr_7 [i_2 - 2]), (arr_7 [i_2 - 2])))));
        arr_9 [i_2] = var_0;
        var_20 = (max((arr_6 [12] [i_2]), (((!((max(-48, 55502))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_21 ^= ((!(arr_6 [i_4 + 3] [i_2 + 1])));
                        var_22 = -118;
                        var_23 = ((~(((!(~var_2))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
