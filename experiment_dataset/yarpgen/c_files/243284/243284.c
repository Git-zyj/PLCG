/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 189;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = (max(((~(arr_2 [i_0] [i_1 + 1]))), ((((((~(arr_5 [i_1])))) ? (arr_7 [i_1] [i_1]) : (arr_6 [i_0] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_4] = ((!((!(arr_12 [i_0] [i_0] [i_0] [i_0] [9])))));
                                var_13 = (arr_6 [i_0] [i_1] [i_2]);
                            }
                        }
                    }
                    var_14 |= (((((~(arr_12 [i_0] [i_0] [i_1] [i_2] [i_2])))) ? (!var_6) : 1));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_15 -= ((!((max((arr_8 [i_0] [i_1 - 1]), var_5)))));
                                arr_26 [i_0] [i_0] [i_0] |= var_5;
                                var_16 = 0;
                                arr_27 [i_6] [i_1] = ((((((max((arr_0 [1]), 1))) ? ((max(67, (arr_16 [i_0] [4] [i_6] [i_7])))) : (arr_21 [i_0] [1] [i_5]))) & ((~(arr_17 [i_0] [i_5] [i_6])))));
                            }
                        }
                    }
                }
                var_17 ^= ((((max(var_5, var_1)) * ((min(var_7, 1))))));
                var_18 ^= (((arr_4 [i_0]) ? (((!(!5836895597297021172)))) : (((1 && (!252))))));
                var_19 = (min(var_19, var_9));
            }
        }
    }
    #pragma endscop
}
