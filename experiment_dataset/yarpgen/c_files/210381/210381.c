/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 31905;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= ((var_13 ? (((0 != ((max(-15693, 65522)))))) : ((min(var_10, (max(26, (arr_4 [i_0]))))))));
                var_20 = (-32767 - 1);
                var_21 = ((var_5 != (((arr_4 [i_1]) ? (!32763) : 26))));
            }
        }
    }
    #pragma endscop
}
