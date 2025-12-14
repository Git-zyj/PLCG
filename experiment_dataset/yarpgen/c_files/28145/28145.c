/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = 255;
                arr_5 [4] [i_1] = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_19 = (((!-1441679983) > (~9223372036854775807)));
                    var_20 = ((-(arr_13 [i_2])));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_21 = -1;
                        var_22 = ((((((((arr_6 [i_2]) && 1))) >= -124))) + (arr_12 [i_2] [i_4] [i_2]));
                        var_23 *= 8387640194222721124;
                        var_24 -= ((1 != (arr_0 [i_2])));
                        var_25 = (max(var_25, ((((max(7789753942118813099, -32)) << (1892596952 - 1892596952))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_18 [i_2] = (((((-15 >> (((max(8387640194222721124, (arr_3 [i_2] [i_6]))) - 8387640194222721102))))) > ((-(min(353704687147385685, 1600209398))))));
                        var_26 &= (max(-25022, 98));
                        var_27 = (max(var_27, -1));
                        var_28 = (max(31222340, 0));
                    }
                    arr_19 [i_4] [i_2] [i_2] [i_2] = -1;
                    arr_20 [i_2] [i_3] [i_2] [i_3] = 0;
                }
            }
        }
    }
    #pragma endscop
}
