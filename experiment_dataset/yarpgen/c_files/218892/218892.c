/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (min((max((17966815106382920673 >= 16383), (min(1992422387, var_7)))), 2302544909))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 |= ((((((((arr_10 [i_0] [i_3]) ? 2302544898 : var_4))) ? (((arr_3 [i_3]) >> (-1652939060 + 1652939123))) : -1)) >> ((((((65535 >> (((arr_5 [6] [i_2 + 1] [i_3]) - 211)))) - ((max(0, (arr_9 [i_0] [i_0] [i_1] [i_2 - 3] [i_2] [i_0])))))) + 143))));
                            arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = 1886353166;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_18 -= var_0;
                            var_19 = (max(var_19, (min(((max((~-102), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), ((((max((arr_12 [i_0] [i_1] [i_0] [i_5]), -164161495107507440))) ? (((var_7 ? -34 : var_6))) : (arr_10 [i_4] [i_5])))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_4 ? var_12 : ((max(((var_11 >> (2147483647 - 2147483641))), var_8)))));
    #pragma endscop
}
