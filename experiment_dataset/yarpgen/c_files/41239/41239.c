/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = var_1;
                arr_6 [i_1] [i_1] = (106 ^ -1);
                var_18 += ((((-29 ? (arr_3 [14] [i_1]) : (4 != -36))) != (~120)));
                var_19 |= arr_4 [i_0] [i_1];
            }
        }
    }
    var_20 = ((~(!-34)));
    #pragma endscop
}
