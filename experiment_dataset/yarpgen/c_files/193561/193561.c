/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((3060 ? -1 : 1751905835));
    var_15 = max(var_5, (((-var_8 ? (((-1751905830 ? -1751905830 : var_1))) : (min(var_13, var_2))))));
    var_16 = ((((((var_4 ? var_2 : var_2)))) ? ((min((!var_6), var_5))) : ((8084420439864196080 ? (3444558688451530762 / -14561) : var_13))));
    var_17 = min((((26 ? -27044 : 697283891))), ((min(524287, 14560))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min((~-1108585879), (((arr_0 [i_1]) / ((min(171, 1)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_19 ^= (((min(45816, 11335611628393803082)) | var_9));
                            var_20 = (-32767 - 1);
                        }
                    }
                }
                var_21 = (max(var_21, (arr_5 [i_1] [i_0 - 2] [3])));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_16 [i_4] = ((((1 | ((226 ? 2022765504 : 151)))) >> (((~var_3) - 5830107522098758803))));
                            arr_17 [i_5] [i_4] [i_1] [4] = (min(((~((-103 ? 5509686953316560973 : var_0)))), (((1 <= ((81 ? (arr_10 [i_5]) : 0)))))));
                            var_22 ^= ((+(min(((min((arr_15 [i_0 + 2]), var_13))), var_6))));
                            arr_18 [i_0] [i_0] [i_0] = (1 ^ -23281);
                            arr_19 [i_0] [i_1] [i_4 - 4] [i_5] = ((((min(1, (arr_12 [i_0 + 1])))) == (((((arr_13 [i_5] [i_0] [i_1] [i_0]) || 239)) ? (arr_9 [i_1] [i_1] [i_4] [i_5]) : (arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
