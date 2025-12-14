/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((~((601771958170821795 ? 82 : -63))))) ? var_3 : var_14));
    var_21 = ((var_8 ? (min(((min(0, 101))), (min(var_7, 7523545587312939146)))) : 48));
    var_22 = (min(var_22, (((var_3 ? var_0 : 71)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_23 = (((((((15943432469715962080 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? -43 : (arr_0 [i_0]))) != (((-9210898806480495286 ? 186 : ((min(var_17, 57))))))));
        var_24 = (max(var_24, (((((~(arr_0 [8]))) <= 255)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((min((arr_7 [22] [i_2] [i_3]), ((-(((arr_6 [9] [17] [i_1]) & var_1)))))))));
                                var_26 = var_11;
                                var_27 = (min(2, var_18));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_28 = (min(var_28, (max((min(48, (arr_22 [i_3 + 2]))), ((min((arr_18 [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3] [i_6]), var_6)))))));
                                var_29 = (min(((((!var_17) ? (((45 >= (arr_4 [i_6])))) : (!9)))), (min((((arr_21 [i_1] [i_2] [13] [i_6] [i_6] [i_3] [i_3]) ? 9223372036854775807 : var_4)), (0 | var_13)))));
                                var_30 = (min(var_30, (((52 ? (arr_4 [i_3 - 1]) : ((7388624300469581400 ? var_17 : (-9223372036854775807 - 1))))))));
                            }
                        }
                    }
                    var_31 = ((((69 ? (arr_20 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2]) : ((min(var_16, var_7)))))) - ((~((~(arr_8 [i_1] [i_2] [i_1]))))));
                    arr_23 [i_1] = 18446744073709551615;
                    var_32 = ((!(((~(arr_5 [i_3 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
