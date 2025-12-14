/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((-var_4 ? var_7 : (min(var_5, var_1)))) + (((-(var_8 || var_8)))));
                arr_6 [i_0] [i_1] = max((min(9967000293507945968, ((18211830236150972553 ? 9 : 0)))), 9297020995719223911);
                arr_7 [i_0] [i_1] = ((~((((var_0 <= var_3) <= (max(var_1, var_6)))))));
            }
        }
    }
    var_10 = min(18446744073709551615, 1);
    var_11 = var_5;
    var_12 = var_3;
    #pragma endscop
}
