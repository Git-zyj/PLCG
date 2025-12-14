/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_11);
    var_17 = (min(var_17, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((arr_2 [i_0] [i_1] [i_2]) ? (!40) : (arr_7 [i_0] [i_1])))) ? ((-(((arr_3 [i_1]) ? (arr_4 [i_0] [i_0]) : 6372)))) : ((187 ? (arr_0 [i_0] [i_2]) : (arr_7 [i_0] [i_0]))))))));
                    var_19 = ((3 ? ((((arr_5 [i_0]) ? (arr_8 [i_0]) : (((~(arr_1 [i_0]))))))) : 18446744073709551615));
                    var_20 ^= ((15702015358029263235 ? ((((((arr_4 [i_0] [i_0]) ? (arr_4 [8] [8]) : -29726))) ? (arr_7 [i_0] [i_1]) : (((arr_4 [i_1] [i_2]) ? 14998736966548790332 : (arr_4 [i_0] [1]))))) : (((-(arr_8 [i_1]))))));
                }
            }
        }
    }
    var_21 = var_10;
    var_22 &= var_12;
    #pragma endscop
}
