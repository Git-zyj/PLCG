/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((arr_0 [i_0]) / (min(4294967274, 3186767807))));
                arr_6 [i_1] [i_0] [i_0] = (var_10 < 52448);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            {
                arr_11 [i_3] = var_1;
                var_13 *= ((-((max(var_9, (arr_8 [i_3 + 1]))))));
            }
        }
    }
    var_14 += (var_5 > var_5);
    var_15 -= var_6;
    var_16 = var_1;
    #pragma endscop
}
