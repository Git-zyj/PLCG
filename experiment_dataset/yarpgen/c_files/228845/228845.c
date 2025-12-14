/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (min((~-653655030), 0));
                            arr_11 [i_1] [i_0] = (arr_8 [i_0] [i_0] [i_2] [i_3]);
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] = ((((((18446744073709551606 ? 9223372036854775807 : -653655030)))) ? (max((-9223372036854775807 - 1), 1)) : (arr_9 [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_5 - 1] [i_0] [i_5] = ((-(arr_2 [i_0])));
                            var_15 = (max(var_15, ((((((~((124 ? 1 : 131))))) ? ((-(!4064))) : (((!(((var_0 ? (arr_13 [12] [12] [12]) : var_13)))))))))));
                            var_16 &= (max((((((min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? ((max(var_6, (arr_7 [i_0] [i_0] [i_1] [i_0] [i_5 - 1] [i_5 - 1])))) : (((arr_4 [i_0] [i_0] [i_0]) >> (((arr_3 [i_0]) - 150))))))), (((arr_16 [i_0] [i_1] [i_0] [i_0] [i_1] [i_5 - 1]) ? (min(0, (-9223372036854775807 - 1))) : (arr_7 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                            var_17 = 10;
                        }
                    }
                }
            }
        }
    }
    var_18 *= var_11;
    #pragma endscop
}
