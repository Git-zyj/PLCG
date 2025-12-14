/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_10 % var_8) * 65535)), ((var_15 << (var_13 + 100)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = arr_1 [i_0] [i_0];
                arr_8 [3] [i_0] = ((~(((~var_10) ? ((min(65535, -33))) : 60))));
                var_18 ^= (min((((((arr_2 [i_0]) < 110)))), (((((arr_6 [i_1] [i_1]) + var_0)) + 60))));
                arr_9 [i_0] [i_0] [i_0] = (((((!((((arr_0 [i_0]) / (arr_1 [i_0] [i_0]))))))) < (arr_4 [i_0])));
                var_19 ^= ((((max((arr_3 [i_0] [i_1]), 65535))) ? 19 : ((((4 * (arr_5 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
