/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((-(((arr_0 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 + 2])))));
        arr_5 [i_0 + 2] = (max(((((arr_0 [i_0 + 2]) ? var_17 : (((467593793 ? 72 : 240)))))), 13422212604193539108));
        arr_6 [i_0 + 2] [i_0 - 1] = var_12;
        var_21 = (((arr_1 [i_0]) >> ((((var_0 ? (~var_18) : (arr_1 [i_0 + 2]))) - 26980))));
        var_22 = (60 % 60);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_23 = ((!((((arr_9 [i_1]) ? (arr_2 [i_1 + 1]) : var_1)))));
        var_24 = var_19;
        var_25 = var_15;
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (((4865 ? -1 : 50)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_27 = (((!104) ? ((-(arr_15 [i_4] [i_2 - 1] [i_4]))) : ((min((arr_15 [i_2] [i_2 + 2] [i_4]), (arr_15 [i_2] [i_2 - 1] [i_2]))))));
                                arr_24 [i_2] [i_3] [i_3] = ((2188640451642966390 + (((var_16 % (arr_16 [i_2] [i_2] [i_2] [i_2 + 2]))))));
                                arr_25 [i_2] = var_12;
                                arr_26 [i_5] [i_5] [i_2] = (arr_14 [i_2] [i_2] [i_2]);
                            }
                        }
                    }
                    arr_27 [i_2] [i_2] [i_2] [i_2 + 1] = ((((((((var_8 ? 2139982033722053705 : 0))) ? (arr_19 [i_2] [i_3]) : (((arr_18 [i_2] [i_3] [i_4]) ? (arr_13 [i_4] [i_3] [i_2 - 1]) : var_2))))) ? var_7 : ((((min(0, (arr_15 [i_2] [i_2] [i_4])))) ? (min(4773775387665387607, 3)) : (arr_9 [i_4])))));
                    var_28 += (arr_22 [i_2 + 2] [i_2]);
                }
            }
        }
        arr_28 [i_2] = ((42 >> (3180896845 - 3180896830)));
        arr_29 [15] [i_2] = ((~(~43)));
        var_29 = arr_3 [i_2] [i_2 + 2];
    }
    #pragma endscop
}
