/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = arr_4 [i_1] [i_1] [i_0];
                var_18 ^= (((arr_4 [i_1] [3] [i_1]) ? (min(-1, ((var_1 >> (((arr_0 [i_1]) - 14386155033434214760)))))) : (((((((arr_0 [i_0]) ^ (arr_1 [i_0]))) != (((31080 ? 0 : (arr_1 [i_1]))))))))));
                var_19 = (max(var_19, ((min(-var_4, (min(var_3, (arr_0 [i_0]))))))));
            }
        }
    }
    var_20 = 106;
    #pragma endscop
}
