/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = 52776558133248;
                arr_6 [2] [i_1] = -52776558133248;
                var_15 ^= ((((3990750564 % (arr_2 [i_0 + 1]))) != 1938056516));
                arr_7 [i_1] = (-32767 - 1);
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
