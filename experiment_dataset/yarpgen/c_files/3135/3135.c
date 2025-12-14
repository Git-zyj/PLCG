/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((~var_15) | var_12))));
    var_20 = (max(var_20, -770122141));
    var_21 ^= (--7340032);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (var_17 <= var_2);
                    arr_6 [i_1] = 7340033;
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((+((((!7340032) == 7340055)))));
                }
            }
        }
    }
    #pragma endscop
}
