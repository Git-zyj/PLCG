/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((var_6 ? (arr_3 [i_1]) : (arr_3 [i_1]))) * 0);
                var_17 = (max(var_3, (arr_2 [i_1])));
                arr_6 [i_1] = (((arr_4 [i_0] [i_1]) * (4294967288 / 255)));
            }
        }
    }
    var_18 = ((233 ? 224 : 231));
    #pragma endscop
}
