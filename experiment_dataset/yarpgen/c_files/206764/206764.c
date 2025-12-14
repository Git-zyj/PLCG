/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [12] = (((min((((arr_2 [i_0] [i_1]) ? 2097151 : (arr_0 [i_0]))), (var_5 | -1))) != (((((min(-1, var_11))) ? var_2 : var_11)))));
                var_19 = 13;
                arr_7 [i_0] = (((((var_5 < 21825) < (arr_0 [i_0]))) || ((max(var_9, ((-29 ? var_2 : -29)))))));
            }
        }
    }
    var_20 = var_18;
    var_21 = ((-(((((var_9 + 2147483647) >> (var_7 - 5705268118995581211)))))));
    var_22 = -var_11;
    #pragma endscop
}
