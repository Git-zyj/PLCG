/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~2902043303692913036);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = -2004833371;
                                var_18 &= ((-((((((arr_5 [i_3] [i_1 - 2] [i_4]) ? var_3 : (arr_11 [i_0] [i_1 + 1] [i_3] [6])))) ? (arr_15 [i_3] [i_3] [i_3] [i_2] [10] [i_1] [i_3]) : (!12536244717954377650)))));
                                var_19 = ((((247 || ((!(arr_0 [0]))))) && ((max(47729, (min(5910499355755173966, 1)))))));
                                arr_17 [i_1] [i_1] [i_1] [1] [i_1] = ((((min((min(2147483644, var_12)), (((arr_10 [i_1] [i_1] [i_1] [i_4]) ? 8 : 2004833371))))) ? (arr_4 [i_1] [i_1]) : ((1373895160502514505 ? (~-2004833372) : var_11))));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        var_20 = (((((((62 ? (arr_11 [3] [i_1] [i_1] [1]) : 12))) ? ((var_4 ? (arr_0 [i_2]) : 231)) : 12806907913106884575)) / 69));
                        var_21 ^= (((min((max(var_15, var_5)), (~238))) & ((((((arr_19 [i_0] [i_2] [i_0]) != var_11)) ? ((-1978246892 ? 65531 : -2004833361)) : var_11)))));
                    }
                    var_22 = 1;
                    var_23 = ((max((-1829087777 || var_15), (~-17))) != (~121));
                }
            }
        }
    }
    #pragma endscop
}
