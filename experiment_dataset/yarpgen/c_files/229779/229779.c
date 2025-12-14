/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (var_4 ? (1 | 62) : (-0 & 25631));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [10] = ((((-(255 / -238))) >= (140078517 || -1517132933)));
                var_13 = (((((max(77, 77))) * (1024 / -2))));
                arr_6 [i_1] = 179;
            }
        }
    }
    var_14 = var_2;
    var_15 = (max(var_15, (((var_8 & (((178 * var_9) / var_2)))))));
    #pragma endscop
}
