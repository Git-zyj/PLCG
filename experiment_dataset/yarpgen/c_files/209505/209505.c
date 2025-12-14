/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [2] [i_1] |= (((min(1257289740225164943, (arr_0 [i_1]))) > (~0)));
                var_16 *= ((((1 && (~71)))));
                var_17 = (~1);
                arr_7 [i_0] [i_0] [i_0] &= ((!(~1)));
                var_18 = var_2;
            }
        }
    }
    var_19 += var_2;
    var_20 = (min(var_7, var_5));
    var_21 ^= (~-1);
    #pragma endscop
}
