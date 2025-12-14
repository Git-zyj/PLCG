/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [11] [i_1] = (((25625 / 3273299567070329514) | 9050335811593169778));
                var_12 = ((-((5341 | (arr_2 [i_1 - 1])))));
                var_13 ^= (((min(-0, -24514)) >= (((-((min((-32767 - 1), (arr_0 [i_0])))))))));
                var_14 = ((((2105557938 ? (!var_6) : -1500041271)) | ((84 * (!-17241)))));
            }
        }
    }
    var_15 = 247;
    var_16 = (((((-(var_11 >= var_7)))) ? var_11 : (((((2365 ? var_11 : 3059151201))) ? (~var_4) : (((94 ? 0 : 114688)))))));
    var_17 = var_5;
    #pragma endscop
}
