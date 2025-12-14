/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 *= (((2975525431191186785 == 0) % ((~(arr_5 [i_3 + 2] [i_3 + 2] [i_0 + 2])))));
                            var_17 &= (max(((var_8 << (((arr_7 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 3]) - 13)))), (arr_7 [i_2] [i_3 - 3] [i_3 - 3] [i_3 + 2] [i_3] [i_3 - 3])));
                            var_18 += (((!var_7) || ((9191 || (arr_1 [i_0 - 4] [i_0 - 3])))));
                            var_19 = (((((arr_1 [i_0 - 1] [i_1]) || (arr_1 [i_1] [i_2]))) ? ((98 ? (50109 != var_8) : ((((arr_3 [i_0]) == 9191))))) : ((((9189 + (arr_7 [13] [i_1] [3] [12] [i_1] [i_1])))))));
                        }
                    }
                }
                var_20 = (((var_12 % 55436) ? (((((62 ? 6272107046025133430 : var_12)) == (189 - 1976)))) : (((var_9 == (((arr_1 [i_0] [5]) ? 1 : (arr_0 [i_0]))))))));
            }
        }
    }
    var_21 = (max(var_7, (((65290 & 6) ? var_1 : (var_15 ^ 0)))));
    var_22 = var_12;
    #pragma endscop
}
