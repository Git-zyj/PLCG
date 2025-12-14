/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 |= 111;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 1;
            var_16 -= 15;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_17 ^= arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0];
                            var_18 -= 96;
                            var_19 *= 8817;
                            var_20 = (max(var_20, (((~(min(var_13, (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))))));
                            var_21 = 14239746322270472372;
                        }
                    }
                }
            }
            var_22 *= -1;
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_23 = (4287096839694120319 % var_8);
        arr_16 [i_5] = (((max((((arr_15 [i_5]) ? var_1 : var_12)), (1 && -1))) >> (((max(((max(var_14, 105))), (max(var_5, var_7)))) - 7312736361940900017))));
    }
    var_24 = (~var_0);
    var_25 -= (min((((var_11 | ((1 ? 193 : 76))))), (max(4108511179521676945, 1))));
    #pragma endscop
}
