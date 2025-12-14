/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 *= (min(-9223372036854775795, 1194082326));
                            arr_10 [i_2] [i_2] [i_1] [i_0] = (((((3998 | 3100884960) ? var_0 : var_5))) ? ((((arr_2 [i_1 - 2]) ? var_3 : (arr_2 [i_1 - 4])))) : ((~(arr_9 [5]))));
                            var_12 += var_8;
                            var_13 = (max(var_13, ((((min((arr_9 [i_0 + 1]), (var_2 & var_3))) >= (((((max(1193318560409346171, 48389))) ? (arr_2 [i_0]) : -1))))))));
                        }
                    }
                }
                var_14 = (1 | -1);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_16 [i_4] [i_5] = ((var_0 * (((var_3 | (arr_2 [i_0 + 1]))))));
                            var_15 -= ((((24576 ? 288230376151711743 : 2147483647)) < ((((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 + 2]))))));
                            var_16 += ((((min((arr_15 [i_1 + 1] [19] [i_1 + 1] [i_0 - 1] [i_0 - 3]), (arr_15 [i_5] [i_5] [i_1 + 1] [i_0] [i_0 - 2])))) ? (((arr_15 [i_5] [i_5] [i_1 - 4] [i_0] [i_0 - 1]) ? (arr_15 [i_5 + 4] [i_5] [i_1 + 4] [i_0 - 3] [i_0 - 3]) : (arr_15 [i_4] [i_0 - 3] [i_1 - 3] [i_0] [i_0 - 3]))) : (!var_9)));
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((min(66060288, 20209)))) ? (max(((min(var_4, 0))), var_6)) : (1194082336 * -221729108)));
    var_18 = 13;
    #pragma endscop
}
