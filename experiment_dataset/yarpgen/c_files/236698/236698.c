/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = ((-(((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                    var_21 -= (((((arr_1 [i_2]) ? (arr_2 [i_0]) : (arr_1 [i_1]))) % ((-6916 ? ((max(var_5, (arr_1 [i_0])))) : (arr_6 [i_0] [i_2] [i_2])))));
                    var_22 = ((1 ? 0 : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 = ((((((arr_2 [i_3]) ? (arr_2 [i_0]) : 132475372))) ? (((arr_7 [i_0] [i_1] [i_0]) ? (max((arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4]), (arr_4 [4] [i_1] [15]))) : 1)) : ((((!(((~(arr_10 [i_3] [7]))))))))));
                                var_24 = (max(var_24, ((-((-48 % ((3635157778 ? (arr_2 [6]) : -6181))))))));
                                var_25 = (min(var_25, ((min((((-48 ? 16827982988834929668 : var_9))), (((-8937249530712289850 ? 1 : (-6949 + -6167)))))))));
                                var_26 &= ((-(arr_3 [i_0] [i_0] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [11] [i_1] [i_6] [i_1] = ((1 ? (~22527) : ((((((-(arr_19 [i_0] [i_1] [i_1] [i_0] [i_6])))) ? (((arr_0 [i_0]) ? 6167 : var_10)) : (28245 < 3523588275))))));
                                var_27 -= ((!((min((min((arr_15 [i_2]), (arr_4 [i_6] [i_1] [i_2]))), (arr_2 [i_6]))))));
                                var_28 |= (~33778);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_1;
    #pragma endscop
}
