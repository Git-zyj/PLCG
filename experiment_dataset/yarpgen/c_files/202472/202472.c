/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = arr_1 [i_0] [i_1];
                var_22 = (!12098);
                var_23 = ((+(((var_17 << 1) ? ((((arr_6 [i_1] [i_1] [i_0]) && 1))) : (((var_8 != (arr_5 [i_1] [3] [i_0]))))))));
                arr_7 [i_0] = var_14;
                var_24 = (-32743 ? (((max(1, 1)) ? 1729603658 : (1 % 121))) : 6);
            }
        }
    }
    #pragma endscop
}
