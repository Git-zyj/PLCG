/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 -= ((((((((-(arr_0 [i_0])))) ? -var_5 : (((var_9 ? (arr_0 [10]) : 2)))))) ? (((-((2 ? (arr_0 [8]) : (arr_1 [i_0])))))) : (((~var_4) ? (~var_2) : -44081))));
        var_16 ^= ((-44081 ? (((!(arr_1 [i_0])))) : (!-2147483633)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            {
                var_17 &= ((((((((12 ? -1133215446 : -11))) ? (((-(arr_3 [i_2])))) : (((arr_3 [i_1]) ? var_14 : 21455))))) ? (((21459 ? 44083 : var_12))) : (-2147483647 - 1)));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_18 = ((+(((!var_0) ? (!156) : ((-1133215443 ? 421662319 : 44082))))));
                                var_19 = -1;
                                var_20 = (((((~(~170)))) ? (--44082) : ((((((arr_6 [i_4]) ? 1133215452 : var_14))) ? ((var_0 ? (arr_6 [i_1]) : 1766856831)) : (~var_1)))));
                                var_21 = ((((((((arr_3 [i_3]) ? (arr_6 [i_3]) : var_3))) ? ((var_13 ? (arr_7 [i_2] [2] [i_4]) : (arr_10 [i_5]))) : (!var_4)))) ? (((~((var_11 ? var_3 : var_3))))) : (((~115) ? ((var_7 ? var_8 : var_2)) : (((~(arr_9 [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        }
                    }
                }
                var_22 = ((((((~63) ? ((0 ? 2 : -10131)) : (((!(arr_8 [i_1] [i_2] [i_2 - 2] [i_2]))))))) ? (((arr_10 [i_1]) ? ((-1027162920 ? 1133215450 : -21)) : ((-1133215445 ? (arr_4 [9] [i_2] [i_1]) : (arr_6 [i_1]))))) : ((~(!59753)))));
            }
        }
    }
    #pragma endscop
}
