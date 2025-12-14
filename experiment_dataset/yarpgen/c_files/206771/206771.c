/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = var_7;
        arr_3 [i_0] = (max(var_9, ((((!var_18) && ((!(arr_2 [i_0]))))))));
        var_20 = 18446744073709551608;
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_21 = var_13;
        var_22 = 32767;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_23 = var_5;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_24 = ((+(((arr_6 [i_6]) + (arr_19 [i_4] [i_5])))));
                                arr_21 [i_2] [i_2] [18] [i_2] [i_2] [i_2] [i_2] = (((var_10 * var_1) << 13850000374512727839));
                                var_25 = ((13850000374512727839 ? ((((((arr_20 [i_2] [i_2] [3] [15] [17] [14] [i_2]) ? (arr_16 [i_2] [i_3] [3] [9]) : 399598611599010952))) ? (var_16 / 64) : (arr_10 [i_4] [i_4]))) : ((((arr_10 [9] [i_3]) / (arr_14 [i_2] [i_3] [i_4] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 = (max(var_26, 14858482638412500144));
                                arr_37 [i_8] [i_10] = (min((arr_32 [i_9 - 2] [i_10 + 1]), (((-32746 * (var_12 < -2033642489))))));
                            }
                        }
                    }
                }
                var_27 = ((((min(((var_12 ? (arr_29 [i_7] [i_8] [15] [1] [i_8] [17]) : (arr_31 [i_8] [0] [9] [i_8]))), (arr_7 [i_7] [i_8])))) ? (((((var_6 | (arr_23 [15])))))) : var_6));
            }
        }
    }
    #pragma endscop
}
