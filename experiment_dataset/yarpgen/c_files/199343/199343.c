/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_0] = (((((arr_5 [i_0] [i_1 - 2]) ? var_1 : 2379381336)) * -1));
                arr_7 [i_0] = (max(18446744073709551615, (((min((arr_2 [i_0]), (arr_3 [i_0] [i_0])))))));
                arr_8 [i_0] [i_1 - 2] = ((((max((arr_5 [i_0 + 1] [i_0 + 1]), 602213469))) ? (((((arr_5 [i_0 + 1] [i_0 + 1]) == 1423423572)))) : (((arr_5 [i_0 + 1] [i_0 + 1]) >> (((arr_5 [i_0 + 1] [i_0 + 1]) - 2903708091073288212))))));
            }
        }
    }
    var_13 = var_4;
    var_14 = (((((((var_9 ? 243 : 1928690714387252661))) ? var_3 : (((var_10 ? var_7 : var_7)))))) ? ((-79 ? var_0 : (max(var_1, var_5)))) : -4294967295);
    #pragma endscop
}
