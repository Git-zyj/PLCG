/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((-1233713137053269135 + 9223372036854775807) >> (395597953 - 395597924)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((!((((var_6 < var_6) ? ((((var_12 >= (arr_7 [i_0] [i_1] [i_0]))))) : ((98 | (arr_3 [i_0]))))))));
                    var_16 = -395597954;
                    arr_9 [i_0] [i_0] = (arr_0 [i_0]);
                    var_17 = ((~(((!(arr_1 [i_2 - 1]))))));
                }
            }
        }
    }
    var_18 = ((((max((var_14 + 395597953), ((35 ? var_9 : var_5))))) ? ((((44279 - var_13) + -var_4))) : var_5));
    #pragma endscop
}
