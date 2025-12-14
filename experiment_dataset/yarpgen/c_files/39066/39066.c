/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-(min((!var_0), var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (-25198 & -117);
                var_16 = 21057;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = (min(((((arr_2 [i_2] [i_2 - 2]) ? (arr_8 [i_1] [i_2 + 1]) : var_3))), (min((arr_2 [i_2] [i_2 - 1]), (arr_2 [i_2] [i_2 + 1])))));
                            arr_12 [i_1 - 2] [i_2] [i_2] = ((var_2 && ((((arr_0 [i_0]) ? 36462 : (min(var_3, var_10)))))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] &= max((min(var_8, (arr_3 [i_2 + 2] [i_1 - 2]))), (((var_1 != (arr_3 [i_2] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
