/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(-2113330476, var_7)) | ((((max(-14401, var_6))) ? var_9 : ((12 ? 6476825939745614805 : 4398046511088))))));
    var_17 = var_15;
    var_18 = var_9;
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] = ((1 ? ((max(var_11, (arr_2 [i_1])))) : (~2251799813160960)));
                            var_20 = 1703843867;
                            var_21 = ((((((arr_5 [i_1] [i_2] [i_3]) ? var_6 : var_0))) ? var_8 : (min(var_11, 4398046511081))));
                            arr_11 [8] [i_2] = (((2251799813160955 & (var_13 ^ 503316480))));
                        }
                    }
                }
                var_22 *= (arr_2 [i_1]);

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_23 = -21234;
                    var_24 = (min(-108, var_13));
                    var_25 = (((((((-17015 ? 511 : 202))) ? 8192 : -32767)) / (arr_14 [i_4] [i_1] [i_4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_26 = (((((arr_16 [i_0] [i_1]) < ((33402 ? (arr_9 [i_0] [10] [6] [i_0]) : var_14)))) ? ((((max((arr_5 [i_0] [i_5] [i_4]), 3791650815))) ? var_2 : ((max(88, var_2))))) : ((((((var_15 ? var_14 : (arr_3 [i_0] [i_1] [i_4])))) && (arr_12 [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_6 - 1]))))));
                                arr_21 [i_0] [i_1] [18] [i_6 - 2] = (((arr_6 [0]) - (min((arr_20 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6 - 1]), ((min(var_6, 1496817966673977973)))))));
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((min((max(((var_14 ? var_1 : (arr_18 [i_1] [i_7] [i_8] [i_8]))), var_2)), ((((min(2729004268908471056, 1))) ? 51741 : -5931)))))));
                                var_28 = (var_7 ? -75 : (max((arr_16 [i_0] [8]), ((45 ? var_0 : (arr_5 [i_8] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_29 = ((((((!((((arr_29 [i_0] [i_1] [i_7 - 3] [i_0] [i_7 - 3]) & 183))))))) % ((11222 ? (arr_12 [i_1] [i_1] [i_7 + 2] [i_7 + 1]) : var_1))));
                    arr_30 [19] [19] [i_7] [i_7] = (((((((var_12 ? (arr_0 [i_7 - 3]) : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_7 [i_0] [i_0]) ? (arr_14 [i_0] [10] [i_1] [i_7]) : (arr_6 [i_0]))) : var_0)) << (((max(9609874698719475074, (((-4650604467535067934 ? 122 : 864691128455135232))))) - 9609874698719475066))));
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    arr_33 [i_10] = (arr_3 [i_10] [i_10 + 1] [i_10 - 1]);
                    var_30 |= ((-((min(2251799813160960, 3791650804)))));
                }
                var_31 = (min(var_31, 1));
            }
        }
    }
    #pragma endscop
}
