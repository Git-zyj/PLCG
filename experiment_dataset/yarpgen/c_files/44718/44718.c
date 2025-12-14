/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 | var_6);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 13));
                var_13 += (((((var_3 ? 9223372036854775807 : 60))) ? (((arr_5 [i_1] [i_1 - 1]) ? var_3 : 9964665953650363650)) : ((((arr_2 [i_0] [i_1 + 1]) ? var_9 : 4294967276)))));
                arr_6 [i_1] [8] = ((-(arr_5 [i_0] [i_0])));
                var_14 ^= var_6;
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
