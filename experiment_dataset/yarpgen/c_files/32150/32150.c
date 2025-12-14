/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (1195679299 != 3494405613);
                    var_21 = (((!-1195679300) >> (33405 - 33389)));
                }
            }
        }
    }
    var_22 = (min((!var_2), ((-1195679309 ? -1195679325 : 78))));
    var_23 &= (((max(var_14, var_4)) & (max(((var_9 ? var_3 : var_9)), (~var_4)))));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                {
                    var_24 |= 0;
                    arr_18 [4] [4] &= (max((((0 ? 255 : (arr_5 [6])))), ((min((arr_7 [i_4] [i_4] [i_5 - 1] [i_5]), (((47604 >= (arr_9 [i_5])))))))));
                    var_25 = (max(var_25, ((min((((arr_6 [i_5 + 2] [i_5 + 2] [i_5 - 1]) ? (arr_5 [0]) : (arr_6 [i_5 - 1] [i_5 - 1] [i_5 - 1]))), (arr_6 [i_5 + 2] [i_5 + 2] [i_5 - 1]))))));
                    var_26 = ((3 ? (~var_7) : ((-12241 ? (arr_8 [i_5 + 1] [i_3]) : ((1 ? -103 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
