/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -3635288405517186908;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] [i_0] = (max(((~(arr_1 [i_0]))), ((3635288405517186917 ? (arr_3 [8] [i_2 - 1]) : (arr_3 [9] [i_2 + 1])))));
                        var_18 = (max(var_18, (~25395)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((-3635288405517186909 ? 25386 : -3635288405517186908)))));
                        var_20 = 3909015465152159023;
                    }
                    var_21 = (((42388 - 1) ? var_16 : 0));
                }
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
