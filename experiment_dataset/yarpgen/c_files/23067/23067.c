/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_4;
                var_19 = (var_12 <= 90329149);
                arr_7 [i_0] [1] = (((max(-2147483638, (arr_3 [i_1] [3] [i_0])))));
                arr_8 [i_0] = (arr_6 [i_0 + 1] [i_1]);
            }
        }
    }
    var_20 ^= (((~-2147483638) << (((((max(-7425941715145095611, -2147483622)) + 2147483633)) - 11))));
    var_21 -= (((((2147483637 ? 21377 : -441196381))) * (((((23354 ? var_17 : 2147483647)) / (-2147483638 - -23357))))));
    #pragma endscop
}
