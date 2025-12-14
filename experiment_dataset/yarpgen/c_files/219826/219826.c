/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [13] = (arr_6 [i_0] [i_0] [i_0] [4]);
                    arr_11 [i_0] [i_1] = 4066547920;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_19 [3] [i_0 + 1] [4] [i_5] = ((((min(23, var_15))) ? ((min(2147483644, 0))) : (arr_0 [i_3 - 2] [i_0 - 1])));
                        var_18 = (min(var_18, 32767));
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = ((((max(60, 17145583949641559987))) ? (((((arr_7 [i_0] [1] [i_0]) ? var_17 : var_8)))) : var_8));
        var_19 = (((((16368 ? 10304518625574772851 : 18463))) ? (((arr_13 [i_0] [i_0 - 1] [1]) & 65535)) : (~65517)));
    }
    var_20 = (min(243, 0));
    #pragma endscop
}
