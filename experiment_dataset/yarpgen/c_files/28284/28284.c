/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 ^= (((arr_3 [i_0] [14]) ? ((((((-2147483645 ? (arr_4 [i_0] [i_1] [i_1]) : -23034))) ? (max((arr_0 [15] [i_0]), 0)) : (((min(1, 0))))))) : (((0 + 3752220432293164644) & 16))));
                var_18 *= (arr_1 [i_0] [18]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, (((((~(arr_4 [i_2] [i_3] [i_4]))) < (min(((((arr_3 [6] [i_3]) >= (arr_6 [i_4] [i_4])))), (arr_7 [i_2]))))))));
                    var_20 = (min(var_20, (((((((((arr_11 [i_4] [i_3] [i_4]) ? 63883 : (arr_10 [i_2] [i_4]))) * (((arr_8 [i_2] [i_3] [i_3]) / (arr_9 [i_2] [i_2] [i_2])))))) ? (((((arr_1 [i_3] [i_3]) ? (arr_8 [i_2] [i_3] [i_4]) : (arr_6 [i_4] [i_4]))) / (((max((arr_5 [i_3]), (arr_3 [i_3] [i_3]))))))) : (((-(0 * 0)))))))));
                }
            }
        }
    }
    #pragma endscop
}
