/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((+((var_12 ? (!var_11) : ((min(var_6, var_6)))))));
    var_15 |= (var_10 < var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] = ((var_9 ? 65533 : var_10));
                    var_16 = ((~(max((arr_7 [i_0] [i_1] [i_2] [i_2]), (arr_5 [i_1] [i_2])))));
                }
                var_17 = var_2;
                /* LoopNest 3 */
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_18 = ((((((arr_14 [i_1] [i_0] [i_0] [i_1] [i_1]) ? var_5 : ((32612 ? 536868864 : 1))))) < ((-4947557966324931764 ? var_10 : (((arr_0 [i_3] [i_3]) ? (arr_11 [9]) : (arr_6 [i_1] [i_1])))))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((var_12 ? (((min(34, (arr_1 [i_3 + 1]))))) : ((((var_4 ? 1152921504573292544 : 576460752303423488)) & (((1 ? 4947557966324931763 : var_0)))))));
                                arr_17 [i_0] |= ((((!(((var_4 ? var_6 : 221))))) ? var_0 : 1));
                                var_19 = (((16141 || 4) ? ((((68 || 25918) || 6414126019687908024))) : 39617));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
