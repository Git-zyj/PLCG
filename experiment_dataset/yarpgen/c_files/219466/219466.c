/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_14, (!14265038534726936730)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (~(((((max(var_13, var_4))) || (arr_5 [i_0] [6] [i_1 + 1] [i_0])))));
                    var_19 = -var_1;
                    var_20 += (arr_4 [i_1] [i_2]);
                }
            }
        }
    }
    var_21 = (max(var_21, (((((max(var_15, 7038505570738466298))) ? (max(4181705538982614878, -1106495646)) : 1299459870)))));
    var_22 = ((!var_5) << (var_6 - 1097552735));
    #pragma endscop
}
