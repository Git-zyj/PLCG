/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (min(var_5, (arr_7 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_1] [i_4] [i_4] [i_3] = (max(((((arr_1 [i_0]) && (arr_7 [i_2] [i_4])))), (min(((min((arr_6 [i_0] [i_1] [i_2] [i_3]), (arr_11 [i_0] [i_1] [i_3] [3])))), ((-(arr_4 [i_1])))))));
                                var_15 = (max((max(((max((arr_10 [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_2] [i_0] [i_0])))), (max(13057336133404765280, -1)))), ((min((arr_3 [i_4]), (arr_3 [i_0]))))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((max((arr_8 [i_0] [i_2] [i_4]), (arr_8 [i_0] [i_0] [i_1]))));
                                var_16 ^= (min(-268435456, (arr_7 [i_3] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (!var_12);
    var_18 = (min(var_18, 9));
    #pragma endscop
}
