/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, 5656518002378287318));
                    var_13 = 2;
                }
            }
        }
    }
    var_14 = 5656518002378287304;

    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        var_15 = -32767;
        var_16 = -32767;
        arr_10 [3] [i_3] = 1;
        var_17 = -6100247862025798942;
    }
    var_18 = 71;
    #pragma endscop
}
