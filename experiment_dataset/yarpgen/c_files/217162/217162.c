/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, (((((((arr_2 [i_1 + 1]) ? 21182 : 9223363240761753600))) ? (((!((min(var_4, 7282475305743926922)))))) : -9223363240761753605)))));
                    var_11 = ((-(((arr_1 [i_0]) << (((max(var_7, var_4)) - 5011686224171885000))))));
                }
            }
        }
    }
    var_12 = (((max((min(64532, var_3)), var_2))) << (1429159977 - 1429159962));
    var_13 = (var_3 / var_8);
    #pragma endscop
}
