/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(0 + 0)));
    var_16 = (((((-9223372036854775807 - 1) % (var_9 + var_2))) != ((min(var_7, (4791041533341646328 || 127))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1 - 1] = min((arr_1 [i_0]), ((~(-9223372036854775807 - 1))));
                    arr_8 [i_1] [i_1] [i_1] = ((min(var_8, var_5)));
                }
            }
        }
    }
    #pragma endscop
}
