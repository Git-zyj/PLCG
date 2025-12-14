/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 += max((75 % 4733794356499488058), ((max(44, 28949))));
                arr_4 [i_0] [i_0] [i_0] = ((((var_7 ^ (-1434086681 & 16315))) % (28937 % 11)));
                var_16 = var_6;
            }
        }
    }
    var_17 = (126 % 63);
    var_18 = ((((1073937166 ? 1710933065479150712 : 781610549)) ^ var_3));
    #pragma endscop
}
