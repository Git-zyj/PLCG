/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_2 ? (min(var_11, var_9)) : (var_5 > var_10)))) ? var_6 : ((var_8 ? var_0 : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 ^= (min((((!(arr_2 [i_1 - 1] [i_0 - 2])))), (((arr_3 [i_0 - 3] [i_1 - 1]) ? var_1 : -8481628411775505509))));
                    var_16 = (max(-1368567531, ((max((max((arr_0 [i_0]), (-9223372036854775807 - 1))), var_13)))));
                    var_17 = (((((max(15200470243314208871, 30261) == (!var_2))))));
                    arr_6 [3] [i_2] [i_1] [i_0] = max(((min((~var_8), (((~(-32767 - 1))))))), ((~(~8481628411775505503))));
                }
            }
        }
    }
    #pragma endscop
}
