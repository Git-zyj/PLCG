/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212806
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
                var_11 = max((((!var_8) ? var_0 : -var_8)), (max(-661358925412328301, (arr_1 [5]))));
                arr_8 [4] |= ((~((~(arr_5 [i_0] [i_0])))));
                var_12 = ((((min(((max(var_3, (arr_0 [1])))), (~1)))) ? (arr_0 [0]) : (((((((arr_1 [1]) < 1))) == -13)))));
                var_13 = max(((4729994357914593655 ? 127 : -3568234281676351158)), (1 <= 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [17] [i_3] = ((!(((arr_4 [i_0]) && (arr_4 [i_1])))));
                            arr_15 [i_0] = ((((((!-3648694776630318028) ^ (arr_13 [i_0] [i_2] [i_2] [i_0] [i_0])))) ? 1 : ((((!1) && (((-7702683528092806161 ? var_2 : 115))))))));
                            arr_16 [15] [i_0] [i_2] [i_0] = (((((~(arr_4 [i_3])))) ? var_6 : ((max(var_3, (arr_4 [i_0]))))));
                            var_14 = (((arr_7 [i_3] [9] [i_1]) <= (((1 == (arr_7 [i_0] [i_0] [i_0]))))));
                            var_15 = ((((max((~19121), (arr_9 [i_0] [11])))) * (((!11776) * (((arr_3 [i_0]) ? var_6 : (arr_9 [i_0] [i_2])))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_2 + (((!(~var_9))))));
    var_17 = var_0;
    var_18 |= ((max(((max(var_9, 57))), var_6)));
    #pragma endscop
}
