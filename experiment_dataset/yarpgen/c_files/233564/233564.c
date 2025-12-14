/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = arr_4 [i_1];
                            arr_11 [i_0] [i_0] [i_0] = (arr_5 [i_1 + 2] [i_1 + 2] [i_0 + 1]);
                            var_19 = (!(arr_7 [i_3] [i_1] [3]));
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] = ((((!(((var_3 ? (arr_4 [i_2]) : 1))))) || ((!((max((arr_0 [i_0]), (arr_4 [i_0]))))))));
                        }
                    }
                }
                var_20 = ((9 * 57344) / ((120 ? 2147483647 : -9)));
            }
        }
    }
    var_21 &= (((((var_0 ? var_9 : ((var_6 ? var_5 : var_17))))) ? var_5 : var_3));
    var_22 = (!7768708588152481219);
    var_23 = (((((min(var_2, 8))) ? var_1 : -var_5)));
    #pragma endscop
}
