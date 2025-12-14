/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (max(-123, (max(29958, (arr_3 [i_0 + 1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 += 4109758059612979756;
                            var_21 = ((-(arr_7 [i_1] [18] [18])));
                            arr_10 [i_0 - 1] [i_1] [i_1] [i_2] [i_3] |= (arr_6 [i_0 + 1] [i_2 + 1] [i_2] [i_3]);
                            arr_11 [i_0] [i_0] [i_0] [i_2 + 1] [i_2] [i_3] = (((var_13 ? (arr_6 [i_0] [i_1] [i_3 - 1] [i_3]) : (arr_6 [i_3] [i_3] [i_3 - 1] [i_3]))));
                        }
                    }
                }
                var_22 = (min(var_22, (((~((~(arr_4 [i_0 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
