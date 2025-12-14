/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((!((((223 ? 6255911917103210743 : 0))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 += ((~((1 ? 58519 : -37))));
                    var_16 ^= ((-15640 ? (7305802287686797071 == 805306368) : (1 | 55140)));
                    arr_9 [i_0] [i_1] [i_0] [i_2] |= (min(15, -10592));
                    var_17 = (max(var_17, ((((((11775 | 72057594037927936) | -10)) + (((1 ? 11 : 20))))))));
                    var_18 = (!30412);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] = (((859193738 ? 205 : 10592)));
                arr_17 [i_4] [i_4] = 62;
                var_19 ^= (((((((10589 ? -29979 : 1)) && 17286882575769597663)))));
                arr_18 [i_4] = (-479307333 / -82);
            }
        }
    }
    #pragma endscop
}
