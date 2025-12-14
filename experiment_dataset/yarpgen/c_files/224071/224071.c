/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 -= (((arr_1 [i_1] [i_1]) * (((!(arr_2 [i_0] [i_1] [i_1]))))));
                arr_4 [i_1] = (arr_1 [i_0] [i_0]);
                arr_5 [i_0] [i_0] = (min((min(-264757055, (arr_0 [i_0] [i_1]))), (((((max(1768, (arr_0 [i_0] [i_0])))) || -30060)))));
            }
        }
    }
    var_11 |= (((((var_9 >= var_8) ? 3772537391790475851 : -1)) == ((((var_2 >= var_2) << ((((var_8 ? var_6 : var_8)) - 6953156341718617258)))))));
    #pragma endscop
}
