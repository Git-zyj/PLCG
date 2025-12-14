/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (((!-18252) / (((arr_2 [i_0 - 1] [i_0 + 1]) + 787124370))));
                var_15 = 1;
                var_16 = (max(var_16, (arr_4 [5] [5])));
                var_17 = ((-(((arr_0 [i_0 - 1]) ? 787124374 : var_11))));
                var_18 -= 1;
            }
        }
    }
    var_19 = (((((((~var_1) && 2147483647)))) != (max(4294967280, 574834903))));
    var_20 = 2;
    #pragma endscop
}
