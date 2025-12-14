/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((var_9 ? var_15 : ((-763640850 ? 0 : var_9)))) != (4294967295 <= 4294967284)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (1 || var_17);
                var_20 = (min((max((arr_0 [i_0] [i_1]), (arr_4 [i_0]))), (+-763640865)));
                arr_6 [i_0] [i_0] [i_0] = ((-((((max(var_7, 763640871)) != (var_10 ^ var_13))))));
            }
        }
    }
    #pragma endscop
}
