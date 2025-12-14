/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (!31191);
                                arr_12 [i_1] = (arr_6 [i_4] [10] [i_0] [i_3]);
                            }
                        }
                    }
                    arr_13 [i_1] = ((31183 ? ((((arr_3 [i_0] [i_1] [i_2]) < 31214))) : ((~(arr_2 [i_0] [1] [i_2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_18 = -1179608620;
                arr_18 [i_5] [i_6] = ((((((-1179608622 + 2147483647) >> (1179608622 - 1179608610)))) ? ((((arr_3 [i_5] [i_5] [i_5]) ? (arr_1 [i_6]) : (arr_1 [i_5])))) : var_16));
            }
        }
    }
    var_19 = ((-(min(((1 ? -626 : 31183)), (!-1179608634)))));
    #pragma endscop
}
