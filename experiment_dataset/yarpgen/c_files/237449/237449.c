/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~(((var_3 + 2147483647) >> (var_13 - 59)))))) ? (((var_17 | (!var_1)))) : (((101 ? var_1 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_1] [i_1] = ((((((arr_4 [i_1] [i_1 - 1]) | (arr_3 [i_1] [i_0] [i_0])))) || ((((min(65535, var_3)) / var_15)))));
                var_21 = (min(((var_14 + (arr_4 [i_1 - 1] [i_0 + 2]))), var_12));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((arr_10 [i_0] [i_0] [i_0] [i_3 + 2] [2] [i_1 - 2]) | ((max(var_5, (arr_3 [i_1 + 1] [i_1 + 1] [i_2]))))))));
                            var_23 |= (((max((!var_0), ((var_13 ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 154))))) != (arr_3 [i_0] [i_0] [i_2]));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((-(var_17 != var_16)));
    var_25 = (min(var_25, (((((!(!var_11))))))));
    #pragma endscop
}
