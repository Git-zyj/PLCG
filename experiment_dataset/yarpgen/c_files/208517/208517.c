/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~-1) ? ((~(~var_5))) : (var_0 / 13142277374606974505)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = ((0 ? 13142277374606974514 : (~44918)));
                            arr_13 [13] [13] [i_1] [i_3] = 33173;
                            arr_14 [i_3] [i_3] [i_0] [i_0] [i_0] &= (max((arr_7 [i_0] [i_1 + 1] [i_0]), (arr_3 [i_1 - 4] [i_1 - 4])));
                        }
                    }
                }
                var_22 = (min((!0), (arr_9 [i_0] [i_1] [8] [i_1 - 2])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_23 &= (((arr_5 [i_1 + 1] [i_1 - 4]) | (((!(arr_5 [i_1 - 4] [i_1 + 1]))))));
                            var_24 = (max(var_24, 3));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
