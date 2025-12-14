/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = -120;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((~(((-112 + 2147483647) << (((~var_3) - 4025288825169049432))))));
                var_20 = ((~((-(var_6 ^ -76)))));
                arr_6 [i_1 - 1] [i_1] [i_0] = (~76);
            }
        }
    }
    #pragma endscop
}
