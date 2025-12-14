/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_2 [i_0] [i_0]) ? ((((!(arr_2 [i_0] [i_0]))))) : (((arr_2 [i_0] [i_0]) | (arr_2 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (((3995999730 ? 64 : 511)))));
                        var_17 |= (~(((arr_8 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0]) ^ (arr_6 [i_0] [i_2] [i_3]))));
                        var_18 = (((((arr_1 [i_3]) ^ (arr_1 [i_2])))) ? (arr_1 [i_2]) : (((arr_1 [i_0]) ? (arr_1 [i_2]) : (arr_1 [i_2]))));
                        var_19 = (min(var_19, ((((arr_1 [i_0]) != (((arr_1 [i_0]) % (arr_1 [i_0]))))))));
                        var_20 = (((((((arr_0 [i_0]) ? (((arr_1 [i_0]) ? (arr_4 [i_0] [i_0] [i_3]) : (arr_1 [i_0]))) : (((arr_9 [i_0]) + (arr_1 [i_2]))))) + 9223372036854775807)) << (((((51 ? 255 : -2973))) - 255))));
                    }
                }
            }
        }
    }
    var_21 = ((3833216197 ? 298967570 : 2372600171));
    #pragma endscop
}
