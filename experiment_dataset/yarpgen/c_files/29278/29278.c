/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 += 32831;
    var_19 = (!(((32705 ? -22 : 249))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((((arr_2 [i_1 - 2] [i_1 + 2]) ? 12391835236397506004 : 32830))) ? ((min((arr_2 [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])))) : (~32830)));
                var_20 += var_0;
                arr_6 [i_0] = max(-32831, ((~(max((arr_1 [i_1]), (arr_3 [i_1] [i_0]))))));
                arr_7 [i_0] [i_0] |= (max((((!(arr_1 [i_1 - 2])))), (arr_1 [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
