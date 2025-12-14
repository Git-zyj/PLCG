/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((161 ? 145 : 9));
    var_11 = 2402078899;
    var_12 = ((max(var_8, var_4)));
    var_13 = (max(var_13, 250));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (arr_4 [10] [i_2] [i_2]);
                    var_15 = ((-(max((((arr_0 [i_0] [4]) - (arr_5 [i_0]))), ((min(124, 3951667166)))))));
                    var_16 = (((((2046 << ((((max(27, var_7))) - 221))))) && (((~(arr_1 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
