/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+(((1256 ^ var_7) ^ -102))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_2] = ((min((((84 ? var_5 : var_8))), (var_5 * 2034661644))) * ((((11403 * var_2) / (arr_7 [i_0] [i_0 - 2] [i_0 + 3])))));
                    arr_10 [i_1] = (((var_3 ? (arr_0 [i_0 + 1]) : (((arr_0 [i_1]) + 1958709548)))) >= -122);
                }
            }
        }
    }
    #pragma endscop
}
