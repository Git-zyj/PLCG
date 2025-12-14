/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = (max(15051316272791422277, 1));
                    var_12 = (max(var_12, (0 - 1)));
                }
            }
        }
    }
    var_13 &= (~15051316272791422278);

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = (max(var_14, ((max(8939931096334392587, 0)))));
        arr_12 [i_3] [i_3] = (arr_10 [i_3]);
    }
    var_15 = var_5;
    #pragma endscop
}
