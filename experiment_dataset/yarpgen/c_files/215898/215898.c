/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~(((((~4165) + 2147483647)) << (((((~var_8) + 66)) - 26)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (((((((max((arr_3 [i_0]), (arr_4 [i_0] [i_1]))))) >= (arr_3 [i_1]))) && (arr_0 [4] [i_0 - 1])));
                var_17 *= ((((((((max(61371, 1)))) <= ((512 ? 40164268 : 6717325843964539582))))) / 44430));
                var_18 += ((~(arr_2 [i_0 + 2] [i_1])));
            }
        }
    }
    var_19 = (min(var_19, (((~(max((max(var_7, 21)), -1840313890835779532)))))));
    #pragma endscop
}
