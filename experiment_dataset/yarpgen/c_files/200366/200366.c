/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_14 -= arr_1 [i_0 + 1];
                var_15 = (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_16 ^= (240 - 40991);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min((arr_9 [i_6] [i_4] [i_3] [4]), (arr_12 [2] [10] [2] [i_5 + 1] [i_5 + 1]))))));
                                var_18 = (min((-1875234480716726358 && 1875234480716726355), 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((min(var_12, (min(1, 1875234480716726364)))));
    #pragma endscop
}
