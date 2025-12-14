/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_11, 589112844))) ? (max(((min(var_7, 64))), var_10)) : (((var_5 ? -669682443 : (192 & var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= ((165 ? -171 : (max(-32753, (((1 || (arr_4 [i_0] [i_0]))))))));
                var_15 -= ((((min((arr_3 [i_0] [i_1]), var_1))) ? (3705854452 / 65535) : ((~(arr_3 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
