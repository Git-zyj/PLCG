/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = var_0;
                arr_6 [i_0] [i_0] = -5843315254997892905;
                var_16 = (min(var_16, (((-(min(1, 2530923784)))))));
                var_17 = (min(0, (-127 - 1)));
                arr_7 [i_0] = 1;
            }
        }
    }
    var_18 = (max(var_18, ((max(var_14, 58156)))));
    var_19 = -2041589739;
    var_20 = ((!(((-((min(65535, var_6))))))));
    #pragma endscop
}
