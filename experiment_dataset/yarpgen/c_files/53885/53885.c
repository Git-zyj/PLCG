/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((var_13 / var_14), ((((var_5 ? var_11 : var_11)) % (var_3 < 65504))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((var_14 & (min((min(var_6, (arr_1 [i_0]))), (arr_3 [i_0 - 2] [i_0 + 2])))));
                var_17 = ((((!(arr_0 [i_1] [i_0 - 2]))) ? (((var_12 >= 9365236212773826610) | ((-9714 ? 12 : 9081507860935725005)))) : var_3));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = min(var_0, ((-((((arr_7 [i_0]) > 9365236212773826610))))));
                                var_19 = (max(var_19, 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((var_8 != ((var_12 ? 117146095 : var_2)))) ? ((((var_10 ? 248 : var_5)) % (min(32760, 2147483647)))) : 1));
    #pragma endscop
}
