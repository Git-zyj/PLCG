/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 *= ((-(arr_1 [i_0 + 2])));
                    var_18 = ((((((min(var_6, (arr_7 [i_0] [i_1] [i_2])))) ? (var_8 > 4294967295) : (((arr_5 [i_0] [i_0] [10] [i_2]) ? 4294967295 : (arr_7 [i_2] [16] [i_0])))))) ? ((0 ? ((96 ? var_13 : var_6)) : (var_9 != var_1))) : 0);
                    arr_8 [i_0] [i_1] [8] [12] = (((((-112 ? (arr_6 [i_0] [i_0 + 1] [i_0] [i_0]) : ((min(3, -99)))))) ? (arr_2 [i_0]) : (min(((-112 ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : var_9)), var_14))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [1] [i_1] [1] [i_0] = 0;
                                var_19 = ((((((((var_3 ? var_0 : (arr_14 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 2] [i_4])))) ? ((13 ? (arr_0 [i_0]) : var_10)) : 16854))) ? var_3 : ((((((0 ? 4294967295 : (arr_6 [i_0 - 1] [i_1] [i_2] [i_0 - 1]))) == ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_0 + 1] [i_0] [i_0]) : var_9)))))))));
                                arr_16 [i_4] [i_4] [7] [7] [i_1] [i_0] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_5;
    var_21 = var_10;
    #pragma endscop
}
