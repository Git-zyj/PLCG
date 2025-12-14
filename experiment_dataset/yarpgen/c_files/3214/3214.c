/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 ^= ((~((((max((arr_6 [i_0] [i_0] [i_0]), 32767))) ? (arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2]) : -var_4))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((((-24071 - (-9223372036854775807 - 1)))) ? ((((arr_1 [i_1 - 1] [i_1 - 2]) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 1] [i_1 + 1])))) : (min(((((arr_5 [16] [i_0] [i_0]) ^ (arr_6 [i_0] [i_1] [i_2])))), (arr_3 [i_2] [i_1 + 1] [i_0])))));
                    var_20 = (min((arr_7 [i_1 + 1] [i_1 + 1] [i_1]), (arr_0 [i_1 - 2])));
                    var_21 = ((~(max(939524096, (arr_1 [12] [i_1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_22 = ((~(((arr_3 [i_4] [i_4 - 1] [i_4 - 1]) >> (((-32767 - 1) + 32809))))));
                        var_23 = (max(var_23, ((+(((arr_12 [i_4 - 1] [i_4] [i_4 + 1] [i_4]) ? ((~(arr_5 [i_3] [i_4 - 2] [i_5]))) : (((-116 + 2147483647) << (47831 - 47831)))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
