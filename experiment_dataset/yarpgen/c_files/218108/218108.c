/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((-4265441933195595434 ? ((min(2147483639, 356463685))) : (min((max(4265441933195595433, -4265441933195595422)), 4265441933195595422))));
                    arr_11 [i_0] = ((-27900 ? (~4265441933195595423) : (--1)));
                    arr_12 [i_0] [i_0] [i_0] = min(1, (min(0, -4265441933195595420)));
                    arr_13 [i_0] [i_0] [i_0] = ((((max(1126370919, 173233975))) ? 9280 : -34));
                    arr_14 [i_0] [i_0] = (~16368);
                }
            }
        }
    }
    var_13 = (((var_3 ? (min(65515, 0)) : 18753)));
    var_14 = (~4265441933195595423);
    #pragma endscop
}
