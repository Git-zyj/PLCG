/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 += ((((!(arr_2 [1] [i_0 - 2]))) ? (arr_0 [i_0 + 1]) : 64));
                arr_4 [13] = (min(((~(arr_2 [i_0] [i_0 - 1]))), ((~(arr_2 [i_0 - 1] [i_0 - 2])))));
                arr_5 [i_0] = (((((var_10 / (arr_0 [i_0 + 1]))) + 52383)));
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
