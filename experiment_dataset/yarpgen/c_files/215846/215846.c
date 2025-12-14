/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-(min(1986746669, var_13))))) ? (max((var_18 & var_4), 1703756431306739610)) : (!-32760)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 ^= ((((((~(arr_0 [i_2]))) + 9223372036854775807)) << (var_18 - 16354)));
                    arr_7 [i_1] [i_1] [i_2] [i_0] = (max((~var_11), (((~(arr_6 [i_2] [i_2] [i_2] [i_2]))))));
                    var_22 = (arr_1 [8]);
                    arr_8 [i_0] [i_0] [1] [i_2] = ((((max((arr_0 [i_0]), (arr_3 [i_1])))) ? (!112) : (arr_3 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
