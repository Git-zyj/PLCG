/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (max(var_10, (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min(-121, (min(((1646024909503838448 ? 4294967295 : 1646024909503838466)), var_2))));
                    var_12 = (((!var_8) ? (max(126, 2630240997)) : (!30347)));
                    arr_7 [i_0] [i_1] = ((((min(120, 1646024909503838466))) && ((max((126 || 210), (arr_4 [i_2 + 1] [i_2 - 1] [i_2]))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_13 *= (max((~var_5), ((min(255, 1646024909503838438)))));
        var_14 = (!-1);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_15 = (2630241015 == -32766);
        var_16 += (max(((((min((arr_0 [i_4] [i_4]), 1)) >= ((((var_2 == (arr_11 [i_4] [i_4])))))))), (max((~2630240970), ((var_3 << (var_7 + 61)))))));
        var_17 += (0 + 1428348091);
    }
    var_18 ^= var_9;
    #pragma endscop
}
