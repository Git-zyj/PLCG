/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 += min((min(250, 12399115182990377370)), 250);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((!((min((min(15062062433254414191, 224)), (((18446744073709551391 ? -85 : 65535))))))));
                    var_13 = -5;
                    var_14 |= (min((((61341 | 2476030092782084161) | (min(18446744073709551391, 146)))), -89));
                    var_15 = (min(((min(252, -1))), (min(122, 8075073569739550096))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_16 = 89;
        var_17 = ((-((min(1073741824, 158)))));
    }
    var_18 = 144115188075855871;
    #pragma endscop
}
