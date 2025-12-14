/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 ^= (((((31 ? 37 : -17760))) ? (((((((!(arr_1 [i_0]))))) & (max(55, 1365449613))))) : (((var_4 && 31) ? ((~(arr_3 [i_0] [i_0] [i_0]))) : (arr_2 [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = (((65499 / 234881024) ? 64604 : ((((var_1 & (arr_4 [i_0] [i_1]))) % (((var_11 ? 29 : var_5)))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, 54537));
                            var_14 |= ((!((min((max(var_8, 17769)), (!1365449604))))));
                            arr_11 [i_3] [i_3] [i_2 - 2] [i_2] = (((!var_7) != (((0 <= (arr_1 [i_2 - 2]))))));
                            arr_12 [i_0] [i_3] [i_3] [i_0] = (((arr_9 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 2]) == ((((!(!1)))))));
                        }
                    }
                }
                var_15 ^= var_4;
                arr_13 [i_0] [i_0] [i_0] = (max(((((arr_7 [i_0] [i_0] [i_0] [i_0]) / (arr_7 [i_1] [i_1] [i_0] [i_0])))), 0));
            }
        }
    }
    var_16 = var_1;
    var_17 = (max(var_17, (!var_11)));
    #pragma endscop
}
