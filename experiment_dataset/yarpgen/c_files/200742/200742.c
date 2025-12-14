/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (-2147483647 - 1);
                arr_5 [i_0] [i_1] [i_1] |= (min((((arr_0 [i_1]) ? (-2147483647 - 1) : (arr_0 [i_1]))), var_4));
                arr_6 [i_0] [i_0] |= 15252;
            }
        }
    }
    var_20 |= ((~((var_8 >> (((max(var_8, 2457261004)) - 2457260986))))));
    #pragma endscop
}
