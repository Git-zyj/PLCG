/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (1767743947 >> ((((~(arr_4 [i_2 - 1] [i_2] [i_2 + 1]))) - 14436)));
                    var_19 = (min(((max(-67, (max(2581651070, (arr_4 [i_0] [i_0] [i_0])))))), var_0));
                    var_20 = (min(((var_9 ? var_16 : (arr_2 [19] [i_2 - 1] [i_1]))), (min(2527223348, (arr_0 [i_2 - 1] [i_2 + 2])))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_21 = (max(var_21, (min((min(2527223327, (arr_8 [i_0] [i_1] [i_2 + 1]))), ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_2 + 3] [i_2 + 3]) : (arr_8 [i_0] [i_0] [i_0]))))))));
                        var_22 = ((!(3103157335 <= -50)));
                        var_23 = (max(var_7, ((((arr_11 [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_2]) > (arr_9 [i_3 + 1] [i_3 + 1] [16] [i_2] [i_3 - 2]))))));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_24 += (arr_8 [i_4 + 4] [i_1] [i_2 - 1]);
                        var_25 = (arr_11 [i_0] [i_0] [i_2] [i_2]);

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_26 += (-312430324 ? ((min(-312430333, (arr_14 [i_1] [i_2 - 1] [i_4 + 2] [i_1] [i_0] [i_4 + 4] [i_4])))) : (max((((!(arr_9 [6] [i_1] [i_2] [i_0] [i_5])))), 7192972601796106966)));
                            var_27 = (((var_8 ? (arr_14 [i_0] [12] [i_2 + 1] [i_4] [i_2] [i_5] [i_0]) : (arr_14 [i_0] [i_1] [i_2 - 1] [i_5] [i_2] [i_0] [i_5]))) / -var_8);
                            var_28 = (((min(107, 1191809947)) > (((((min(10236, 2527223348)) >= (arr_4 [i_2] [i_2 + 2] [i_2 + 1])))))));
                            var_29 -= ((((((((12513675612467939123 + (arr_10 [18] [i_1] [i_0])))) ? ((-312430324 ? var_9 : (arr_6 [i_0] [i_1] [i_0]))) : (arr_3 [i_0] [i_1])))) ? ((1 ? 3103157362 : 3103157357)) : var_13));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [i_4 + 3] [i_4 - 1] [i_2] = ((((((arr_20 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_2 - 1] [i_2 - 1]) ? (arr_4 [i_4 + 3] [i_2 + 2] [i_2 - 1]) : (arr_4 [i_4 - 1] [i_2 + 3] [i_2 - 1])))) ? (((!(arr_4 [i_4 + 2] [i_2 + 3] [i_2 + 2])))) : (max((arr_4 [i_4 - 2] [i_2 + 3] [i_2 + 3]), (arr_20 [i_4 + 3] [i_4 - 2] [i_4 + 1] [i_4 + 2] [i_2 + 2] [i_2 - 1])))));
                            var_30 = max((arr_3 [i_1] [i_4 - 1]), 3103157349);
                            var_31 = ((!(arr_9 [i_0] [i_2 + 2] [i_2 + 2] [i_2] [i_4 + 1])));
                        }
                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            var_32 = var_0;
                            var_33 = (((((!(arr_13 [i_0] [i_2] [i_2] [i_4 + 2] [i_7 - 2])))) % var_12));
                        }
                    }
                }
            }
        }
    }
    var_34 = var_11;
    #pragma endscop
}
