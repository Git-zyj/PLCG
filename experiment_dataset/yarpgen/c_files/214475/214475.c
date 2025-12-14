/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 1] &= ((+(((min((arr_1 [i_1]), -1460084052)) | var_15))));
                var_19 = ((((!((((arr_2 [i_0 - 3]) ? (arr_2 [i_0]) : 0))))) && (((arr_1 [i_0 - 1]) && (arr_1 [i_0 + 2])))));
                arr_5 [i_0] [i_1] = -10702;
                arr_6 [i_0 + 1] [i_0] [i_1] = ((!((((arr_1 [i_0 + 4]) + (arr_0 [i_0 + 4] [i_0 + 1]))))));
                arr_7 [i_1] = ((-(min(-1490108705, 43))));
            }
        }
    }
    var_20 = (min(var_7, ((min(32369, 45411)))));
    var_21 *= (min((min((252 / 8), ((var_4 << (87 - 85))))), ((((~4640711351127520260) == (var_2 ^ 122))))));
    #pragma endscop
}
