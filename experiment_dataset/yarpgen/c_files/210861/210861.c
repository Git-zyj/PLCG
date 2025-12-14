/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] = (arr_8 [i_2] [i_1 + 2] [i_3] [i_1] [i_1 + 1]);
                                var_13 = (i_3 % 2 == zero) ? (((((((arr_8 [i_0] [i_0] [i_3] [9] [i_3]) + (arr_8 [i_1] [i_1] [i_3] [i_1] [i_2])))) ? (((((arr_8 [i_1] [i_1 + 2] [i_3] [i_3] [i_4]) + 9223372036854775807)) << (var_1 - 18324))) : (~2002910384)))) : (((((((arr_8 [i_0] [i_0] [i_3] [9] [i_3]) + (arr_8 [i_1] [i_1] [i_3] [i_1] [i_2])))) ? (((((((arr_8 [i_1] [i_1 + 2] [i_3] [i_3] [i_4]) - 9223372036854775807)) + 9223372036854775807)) << (var_1 - 18324))) : (~2002910384))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = 19752;
                                arr_14 [i_3] = min(((!(arr_9 [i_3]))), ((!((((arr_9 [i_3]) ? var_5 : var_10))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] [i_1 + 1] [2] = (((arr_6 [i_0] [i_0]) ? (29 + 17) : (((!(arr_3 [i_0] [i_1]))))));
                    arr_16 [i_2] [i_1] [i_0] |= ((arr_6 [i_1 - 1] [18]) & (((arr_3 [i_0] [i_2]) + (arr_3 [i_0] [i_2]))));
                }
                arr_17 [i_0] = (((~8732) ? ((-3942376909543004515 ? ((32754 ? 65535 : 15453946286670241054)) : var_0)) : ((((var_5 || ((min(var_9, (arr_3 [i_0] [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
