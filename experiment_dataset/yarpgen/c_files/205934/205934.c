/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (~17395);
                    var_13 = ((~((-1004180927608573836 ? 3589375701120048375 : (~44224)))));
                }
            }
        }
        arr_10 [i_0 + 2] [i_0] = (max(var_1, var_1));
        arr_11 [i_0 + 1] [i_0] = (!177);
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_14 = (arr_0 [i_0]);
                    arr_17 [i_0] [i_0] [i_3 - 1] [i_4] = ((((min(((44224 ? 44220 : 44237)), 44224))) || 14857368372589503240));
                }
            }
        }
    }
    var_15 = ((((((var_8 ? 21332 : var_10)) ? 44220 : ((var_0 ? var_0 : var_5))))));
    var_16 = (~14857368372589503232);
    var_17 = var_8;
    #pragma endscop
}
