/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = 28;
                var_11 = (arr_0 [i_0] [21]);
                arr_8 [i_1] = (arr_7 [i_0]);
                arr_9 [i_0] [i_1] = (((((((((max(var_9, -105)))) > var_1)))) % ((-(2147483646 - var_6)))));
            }
        }
    }
    var_12 += ((-(((var_7 && ((min(var_1, 48))))))));
    var_13 = (max(-123, var_1));
    var_14 += ((~(~-102)));
    #pragma endscop
}
