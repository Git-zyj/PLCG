/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(20094, 247801639));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((959726546 ? 3335240760 : 54));
                                arr_13 [i_2] = ((min((arr_8 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]), var_11)));
                                var_18 = min(((var_2 ? (arr_11 [i_0] [i_1] [i_1] [i_3] [i_4]) : ((min(-7442, (arr_2 [i_0])))))), (arr_9 [i_0] [i_1] [i_2] [i_3] [i_0]));
                                var_19 *= (!((((min(584918195318960454, 2100963473312884330)) | 2932264770))));
                            }
                        }
                    }
                    var_20 ^= ((~((((arr_7 [i_0] [i_0] [i_1] [i_2]) < (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_21 = ((((!(arr_5 [i_2] [i_2] [i_1] [i_0]))) ? (min((var_4 + -998905318), 18343910254217205074)) : (((((min((arr_7 [i_0] [i_0] [i_2] [i_1]), var_16))) ? ((var_0 >> (2932264770 - 2932264759))) : (~-47))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    arr_19 [i_0] [i_6] [i_6] |= (((((arr_7 [i_0] [i_0] [i_0] [i_6]) ? (var_7 >= 3335240750) : (arr_5 [i_0] [i_5] [i_6] [i_0]))) >= ((-1550032208 ? 34265 : -7725))));
                    var_22 = (arr_1 [i_5]);
                    var_23 = ((~(max(-65535, var_8))));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_24 = (max((((((var_8 ? var_12 : 3335240721))) + ((6768133691614163131 + (arr_16 [i_7] [i_7] [i_7]))))), (~3005109545)));
        var_25 = (((247801639 > 5638948677946135708) ? (9742738456101621189 % -23910) : -31));
        var_26 = var_1;
    }
    var_27 = ((+(((var_7 / 1) + (50 % -54)))));
    var_28 = (max(var_28, (((var_5 != (max(var_8, (var_15 % var_0))))))));
    var_29 = (!var_0);
    var_30 = var_10;
    #pragma endscop
}
