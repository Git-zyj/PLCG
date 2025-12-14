/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [21] [i_0] [i_3] = (max((((!(!0)))), ((-(~4294967295)))));
                                var_12 = (((((((min(2, 405677099))) ? (arr_3 [i_0] [i_3]) : (max(3, 10))))) ? (max(-30877, (~0))) : 105));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 -= (~(arr_1 [i_0] [i_0]));
                                var_14 = ((-(arr_7 [i_0] [i_6])));
                                arr_23 [i_0] = (max((((!(arr_4 [i_0])))), (~208)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((!9897402146876226810) ? ((((!(arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (min((~-873566606), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_16 = (max((max((max((arr_11 [i_0] [i_0] [i_0] [i_0]), 0)), (!6151316028656367413))), (~47)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_17 = 4294967294;
                                arr_45 [i_13] [5] [i_9] [i_12] [i_10] [i_9] [i_9] = ((!(((208 ? -61545 : (((!(arr_43 [i_9] [i_10] [i_11] [i_12] [i_13] [7])))))))));
                                arr_46 [i_12] [i_12] [i_12] [i_12] [i_13] [i_12] [i_13] = (((-(arr_35 [i_11]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_18 = ((((max(1965166096, 131))) ? (((((arr_32 [i_14] [i_11]) ? 15975346728482633566 : (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [14] [i_9]))))) : ((max((arr_36 [i_11]), -447617975)))));
                                var_19 = (min((max(8485906848448326275, ((max(47, -32765))))), 1008));
                                var_20 = 3789649326888903230;
                                arr_51 [i_14] [i_10 - 1] [i_11] = (min(((-(max((arr_9 [i_9]), 4294967294)))), 60717275));
                                arr_52 [i_9] [i_10] [i_11] [i_14] [i_15] = ((~(~146)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                var_21 = (+-17);
                                var_22 = (min(var_22, (((!((((arr_17 [i_16] [i_17] [i_17] [10] [i_17]) ? (arr_10 [i_16] [i_17] [1] [i_20]) : -3111486212407528402))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        for (int i_22 = 2; i_22 < 14;i_22 += 1)
                        {
                            {
                                arr_71 [0] [i_16] [i_18] [i_18] [i_17] [i_16] [i_16] = -60717275;
                                var_23 = (arr_34 [i_21]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
