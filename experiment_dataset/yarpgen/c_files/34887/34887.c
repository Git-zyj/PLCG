/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((min((~var_0), -var_0))) ? (((max(var_3, var_5)))) : (max(5717989538510453942, 1818631091)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = (~(min((arr_1 [i_1]), (arr_1 [i_2 - 1]))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] &= (min(((+((56575 ? (arr_0 [i_1]) : 31636)))), 166386738));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [3] [i_0] [i_3] [i_2] = (min(var_3, (arr_3 [i_3])));
                                var_11 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
