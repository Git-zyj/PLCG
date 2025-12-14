/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (((arr_4 [i_0]) ? (min(11451261795178101090, 9465673660479744105)) : var_3));
                    var_10 = (max(var_10, (((-16483 ? 101 : ((((6235981307520860744 ? -4385395854123939065 : 0)))))))));
                    arr_8 [i_2] [i_0] [i_0] = (max((min(38, (!var_1))), -101));
                    var_11 *= ((!((!((min(61625, var_1)))))));
                }
            }
        }
    }
    var_12 = (max(0, (max(9223372036854775807, 8981070413229807518))));
    #pragma endscop
}
