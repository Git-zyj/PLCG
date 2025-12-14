/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 | (((var_0 != var_7) % ((17254 ? 4268964381 : 48270))))));
    var_17 = (max(var_17, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = ((((var_11 ? 5826205342888271106 : var_4)) <= (((var_2 ? (arr_9 [i_3] [4] [i_3 + 2] [i_3 + 1] [i_3 + 1] [13]) : var_3)))));
                                var_19 = var_14;
                                arr_15 [i_4] = (((17266 | 156) ? ((156 ? -1769393076 : 156)) : ((var_2 + (arr_8 [i_0] [i_1] [i_2] [i_4 + 2])))));
                            }
                        }
                    }
                    arr_16 [i_1] = (((((-1214307853 ? 17265 : 1))) ? ((var_3 ? 4848 : (arr_12 [i_0] [i_0] [i_1] [i_2] [i_2]))) : ((var_12 ? (arr_2 [1] [i_2]) : (arr_8 [i_0] [i_1] [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = (((((17265 ? 15673097046064447038 : 4848))) ? ((((((arr_1 [i_6]) ? (arr_3 [i_0] [i_1] [i_5]) : (arr_2 [i_0] [i_1])))) ? ((max((arr_23 [i_1] [i_6] [i_5 - 1] [i_2] [i_2] [i_1] [i_0]), 65535))) : (arr_18 [i_1] [i_1] [i_1] [i_1]))) : (((((var_4 ? (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_3))) ? ((min((arr_19 [i_6 + 2] [i_5] [i_1] [i_1]), var_5))) : ((-21205 ? 1 : 4848))))));
                                var_21 = (((((((((arr_19 [i_0] [i_0] [i_0] [i_0]) ? (arr_22 [i_0] [i_1] [8] [i_5] [i_5] [i_6]) : 390199952))) ? ((var_2 ? (arr_8 [i_6] [i_5 - 2] [i_2] [i_1]) : (arr_23 [i_0] [i_1] [4] [i_5] [i_5] [i_5] [i_6 + 1]))) : (min((arr_7 [i_6]), var_5))))) ? ((3499591216 << (11507118 - 11507088))) : ((((arr_0 [i_1]) ? (!18446744073709551615) : var_15)))));
                                var_22 = (max(var_22, ((max(((min((((arr_8 [i_1] [i_1] [i_5] [i_6]) << (arr_12 [i_0] [i_0] [i_2] [i_5] [i_2]))), (!17262)))), (max(((min((arr_11 [i_5]), var_14))), ((var_5 ? 822201719814143573 : 11131)))))))));
                                var_23 *= ((min((arr_7 [i_6]), (((!(arr_8 [i_0] [i_1] [i_1] [i_5 - 2])))))));
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_1] = ((~(max(1292019902, -1769393095))));
            }
        }
    }
    #pragma endscop
}
