/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((~var_11) || (((((1607253579906060156 ? var_15 : var_0)) % (arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((((((((46826 >> (var_12 - 5153)))) ? var_1 : (((arr_4 [i_0] [i_1] [i_2 - 2] [i_3]) ^ var_15))))) ? ((~((0 ? -1 : -1993773592892604728)))) : ((((~26) + 1)))));
                            var_18 = ((((((((~(arr_0 [i_0])))) | -var_4))) | (((!var_5) ? (arr_2 [i_0] [i_0]) : 51))));
                        }
                    }
                }
                var_19 ^= ((!((((var_2 - (arr_2 [11] [i_1])))))));
                var_20 = ((~(((!95) ? (6204440806482298614 > var_13) : (80 + var_9)))));
            }
        }
    }
    var_21 = (min(var_21, 12510));
    var_22 = var_4;
    #pragma endscop
}
