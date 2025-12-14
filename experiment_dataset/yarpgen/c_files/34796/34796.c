/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = ((((((max(65527, 234))) ? (((arr_7 [i_2] [i_1] [i_1] [i_0]) ? (arr_2 [i_1]) : var_10)) : (2 ^ var_7)))) ? ((((((arr_3 [i_2]) - var_3))) ? -var_1 : (arr_5 [i_0]))) : var_3);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((-(((253 == (arr_4 [i_2] [i_2] [i_0])))))) & ((max((arr_0 [i_3 + 3]), (arr_0 [i_0]))))));
                                var_12 = ((~((((min((arr_12 [2] [i_3] [i_0]), (arr_2 [i_4]))) != ((((arr_3 [i_4]) << (9497 - 9497)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_6 ? 43355 : 9296892487502094913));
    var_14 = (((min((!var_4), ((9149851586207456703 ? var_0 : var_3))))) && ((((var_3 > var_6) ? var_10 : ((min(var_5, var_0)))))));
    var_15 = ((var_7 >= ((~(~var_7)))));
    var_16 = ((((-((var_1 ? var_7 : -9)))) != ((((((var_7 ? 15748695575699348827 : 11))) ? (var_4 <= 49478) : (var_1 != var_1))))));
    #pragma endscop
}
