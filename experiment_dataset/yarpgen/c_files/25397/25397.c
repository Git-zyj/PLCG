/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((((((min(7, -1638669385))) ? (max((arr_2 [i_1]), (arr_3 [1] [8] [i_1 - 2]))) : (-2147483647 - 1)))) ? (0 ^ 4294967273) : ((((4294967273 ? (arr_2 [i_1]) : 2569098031)) * (((55 ? 143 : -31497)))))));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_21 -= (((max((max((arr_0 [i_0]), (arr_2 [i_0]))), ((((arr_1 [i_0] [i_2]) ? 0 : (arr_4 [i_0] [i_0])))))) >= (((-(min((arr_1 [i_0] [i_0]), (arr_4 [i_1] [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_1] = (((((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_1 - 1] [10] [10]) : (((arr_7 [i_0]) / (arr_7 [i_0]))))) ^ 17));
                }
                var_22 = (max(4294967272, 1));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_23 = (arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] [5]);
                            var_24 -= ((((((max((arr_1 [i_0] [i_0]), (arr_7 [i_0])))) & (~-1423311049))) | (((-1 | 17) ^ (((arr_7 [i_3]) & (arr_4 [i_4] [i_4])))))));
                            arr_13 [i_0] [i_1] [i_1] [i_1] = (max((arr_6 [i_3] [i_1 + 1] [21] [i_3]), (((((min(3, -1058154896))) && 1058154890)))));
                            var_25 = (((-32767 - 1) == 18446744073709551615));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
