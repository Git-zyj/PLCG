/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((+(((33554416 != -29080) ? (arr_0 [i_0] [i_0]) : (((91519376794935488 <= (arr_2 [i_0] [i_0])))))))))));
                var_18 = (max(var_18, (((((!(~3718640003))) ? (!4294967295) : (max(((((arr_1 [i_0] [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_4 [i_0])))), (arr_0 [i_0] [11]))))))));
                var_19 ^= (min((min((-1 | 443397649887554297), (1 | 1))), 14336));
            }
        }
    }
    #pragma endscop
}
