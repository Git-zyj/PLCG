/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_0] = ((442969952 - (3 - 4748)));
                            var_15 = (max(var_15, ((((((arr_4 [i_1] [i_1]) == -90)) ? (arr_4 [i_2 + 1] [i_1]) : (((arr_4 [i_0] [i_1]) ? (arr_4 [2] [i_1]) : (arr_4 [i_0] [i_1]))))))));
                            var_16 |= 310147977118268714;
                        }
                    }
                }
                var_17 = (max(var_17, ((max((((arr_7 [i_1] [2] [2] [i_1] [i_0] [i_0]) % var_14)), (((arr_7 [8] [i_1 - 2] [8] [8] [8] [8]) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) : (arr_7 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))))));
                arr_10 [i_0] [i_1] [i_0] = (min(((((arr_8 [i_0] [i_1 - 1] [i_1] [i_0]) ? (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_0]) : (arr_8 [i_0] [i_1 + 1] [i_1] [i_0])))), (arr_0 [i_0])));
                var_18 = (min(var_18, (((((-(max((arr_5 [i_1 - 1] [i_0]), 16383)))) - (arr_0 [i_1]))))));
            }
        }
    }
    var_19 &= var_6;
    #pragma endscop
}
