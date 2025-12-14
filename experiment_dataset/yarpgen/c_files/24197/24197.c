/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((268435455 ? 268435456 : 6454546430926570903));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = ((~(((arr_1 [i_0] [i_2]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_4])))));
                                var_12 = (arr_0 [i_0]);
                                var_13 = ((((((arr_7 [i_3] [i_0]) ? 255 : (arr_7 [i_0] [i_0])))) && ((((arr_4 [i_3] [i_3] [i_3]) ? ((1 ? (arr_3 [i_0] [i_2] [i_3]) : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]))) : ((max(1, (arr_7 [i_0] [i_0])))))))));
                            }
                        }
                    }
                    arr_10 [i_0] = ((((((((15 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_7 [i_0] [i_0])))) ? ((((arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]) ? -379890984 : (arr_8 [i_0] [i_1] [i_2] [i_0] [i_2])))) : (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((((arr_2 [i_0]) && 6918813201554510373)))));
                }
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
