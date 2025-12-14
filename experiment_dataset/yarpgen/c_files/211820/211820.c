/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((~(~-57)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [10] [i_0] = ((((((((arr_1 [i_0]) != -1))) != (((-77 || (arr_3 [i_3])))))) ? (((arr_15 [i_0] [i_3 - 1] [i_2]) ? (arr_9 [i_3 + 3] [i_1] [i_2] [14]) : (arr_15 [i_0] [i_3 + 3] [i_2]))) : ((~(-53 - 24)))));
                                arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [i_0] = ((max(((min(32, var_7)), ((~(arr_11 [2] [2] [i_2])))))));
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((~(~var_0)))) ? ((((min(32, (arr_0 [i_2])))) ? var_6 : (~76))) : (((!var_4) & ((min(-106, var_2)))))));
                                arr_19 [14] [i_2] [i_2] [i_2] [i_0] = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_19 = (((((((min(var_6, var_8))) ? var_0 : (arr_6 [2])))) && ((((!var_17) ? (!var_1) : ((max((arr_24 [i_0] [i_6] [i_5]), var_5))))))));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6] = ((+(max(((var_8 ? (arr_20 [i_0] [i_1] [i_6]) : -33)), ((max(var_17, var_3)))))));
                        }
                    }
                }
                arr_27 [i_0] [1] [i_0] = ((-(((arr_15 [i_1] [i_1] [i_0]) % -122))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
