/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_1] = 255;
                        var_20 = (max(var_20, (((~(((~4611686018427387392) ? 1 : (arr_8 [i_0] [i_1]))))))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_2] [21] = (arr_9 [i_0] [18] [i_2]);
                        var_21 = 1;
                    }
                    var_22 ^= var_18;
                }
            }
        }
    }
    var_23 = var_11;
    var_24 = ((-(((min(var_18, 1))))));
    var_25 = ((min(var_9, ((8255 ? 190 : (-32767 - 1))))));
    var_26 = 63;
    #pragma endscop
}
