/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((((min((arr_0 [i_0] [i_0]), (arr_2 [i_0])))) % ((var_6 & (arr_4 [i_0]))))) + 2147483647)) >> (((max(4294967295, (arr_2 [i_0]))) - 4294967265)));
                arr_6 [i_0] [i_1] = (arr_2 [i_0]);
                arr_7 [i_0] = (((((!(((4294967295 ? (arr_0 [i_0] [i_0]) : var_18))))))) & ((~((4294967293 & (arr_0 [i_0] [i_0]))))));
                arr_8 [i_0] [i_0] = ((((0 & ((((arr_3 [i_0]) ? var_15 : (arr_4 [i_0])))))) >= (arr_1 [i_0] [i_0])));
                arr_9 [i_0] = ((((((arr_1 [i_0 + 3] [i_0]) & (arr_1 [i_0 - 1] [i_0])))) && (((3268450221 ? ((-(arr_3 [i_0]))) : ((var_16 ? (arr_3 [i_0]) : 659097400)))))));
            }
        }
    }
    #pragma endscop
}
