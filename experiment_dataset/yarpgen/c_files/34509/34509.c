/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [i_0] = (((((4194303 ? 1 : 1) - 255))));
                            var_11 = ((((max((arr_3 [i_0] [i_0]), (((arr_1 [i_0]) ? 49280 : (arr_1 [i_2])))))) ? (((max(705835483, (arr_10 [i_0] [i_0] [i_0] [i_0]))))) : (((!((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? var_2 : var_5))))))));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_12 = ((!(((((((arr_6 [i_0] [i_0]) * 1))) ? (arr_5 [i_0] [i_1] [i_4] [i_3]) : (var_9 % 252))))));
                                var_13 = (((arr_12 [i_0] [i_1] [i_0] [i_3] [i_4]) & (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_14 = (arr_1 [i_0]);
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_1 [i_1]);
                                arr_18 [i_0] [i_2] [i_0] [13] = ((var_3 != ((16255 ? 12576998128643811464 : -32761))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_15 = (arr_22 [i_0] [i_1] [i_0] [i_3] [i_6]);
                                var_16 = var_8;
                            }
                        }
                    }
                }
                arr_23 [i_0] = (max(((((arr_1 [i_0]) || (arr_10 [i_0] [i_0] [i_1] [i_1])))), (max(15, 4194282))));
                arr_24 [i_0] = (max(var_10, var_7));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            {
                var_17 = ((((max(-1968085738, 29786))) ? -4194303 : (arr_29 [i_7])));
                var_18 = ((((((arr_26 [i_7]) ? (arr_26 [i_7]) : (arr_26 [i_7])))) ? (max((4294967285 * -124), -2974655191413905985)) : ((max((((arr_27 [i_8]) ? var_10 : (arr_27 [i_8]))), ((45270 ? var_10 : (arr_25 [i_7] [i_8]))))))));
            }
        }
    }
    #pragma endscop
}
