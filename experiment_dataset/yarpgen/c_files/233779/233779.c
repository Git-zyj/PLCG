/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(13, 1807960123));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = 1734024465;
                var_20 = max(4095, ((10686357687143549947 ? (arr_2 [i_1] [i_1 + 1]) : (arr_2 [6] [i_1 - 1]))));
            }
        }
    }
    #pragma endscop
}
