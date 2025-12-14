/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [18] &= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = var_3;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (arr_5 [i_1]);
        var_20 = (arr_5 [i_1]);
        var_21 = ((!(arr_1 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_22 = (((((((arr_5 [i_3 + 2]) && var_9)))) + (9430482208560120863 + 17039084775024059939)));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_23 = 3504647203209328207;
                        var_24 -= ((~(((arr_10 [i_3] [i_3 + 2] [i_3] [i_3] [i_3 + 1]) / (arr_8 [2] [2] [i_2])))));
                        arr_12 [i_2] [i_2] = (min((((164 / var_5) ? ((-(arr_11 [i_1] [i_1] [2] [i_1] [i_1]))) : -164)), (((((((!(arr_6 [i_1]))))) >= (max((arr_9 [i_1]), 9016261865149430748)))))));
                    }
                    var_25 = ((((((((0 ? 3440479547796142393 : -3504647203209328207)) < ((min((arr_0 [9]), (arr_1 [i_2] [i_1])))))))) >= (--9016261865149430734)));
                    var_26 = (min((arr_7 [i_2 - 4] [i_2]), (arr_11 [i_2 - 4] [i_2 - 4] [i_3 + 1] [6] [i_3 + 1])));
                    var_27 = (min(var_27, (arr_4 [i_3])));
                }
            }
        }
    }
    var_28 = 156;
    var_29 = (min(((((var_15 ? 121 : 9430482208560120850)) & ((0 << (9016261865149430756 - 9016261865149430745))))), var_7));
    var_30 = (9430482208560120858 < 1);
    var_31 = (min(((max(711131850, 135))), 13442415548443364232));
    #pragma endscop
}
