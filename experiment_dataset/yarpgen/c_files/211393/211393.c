/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 80));
                var_16 = -99;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                arr_10 [i_2] = ((-((((arr_9 [i_3 - 1] [i_3]) <= (arr_9 [i_3 + 1] [4]))))));
                var_17 = ((-1 ? (((var_9 & (arr_8 [i_2] [i_3 - 2])))) : (((arr_0 [i_2 - 1]) >> (((arr_0 [i_2 + 1]) - 1709198334))))));
            }
        }
    }
    var_18 = (max(var_4, (var_9 - 9223372036854775808)));
    #pragma endscop
}
