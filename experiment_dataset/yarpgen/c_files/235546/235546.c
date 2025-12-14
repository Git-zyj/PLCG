/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 -= (((((0 >= 0) ? 5 : (!0))) > var_15));
                    arr_8 [i_0] [i_2] = ((((max((arr_4 [i_0 - 2] [i_1] [i_1]), (arr_4 [i_0 + 1] [i_1] [i_0])))) ? ((((-5 ? 11885 : 14208588842247899303)) + (arr_4 [i_0] [i_0] [i_0 - 2]))) : (((~((-10 ? var_1 : (arr_1 [i_1] [8]))))))));
                    var_18 = var_5;
                }
            }
        }
    }
    var_19 = (~var_4);
    #pragma endscop
}
