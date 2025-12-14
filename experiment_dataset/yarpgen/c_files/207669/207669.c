/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-83 ? var_7 : var_6))) ? ((min(var_6, var_13))) : var_14));
    var_18 = var_6;
    var_19 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] = 666421445881487080;
                    var_20 = (~17780322627828064536);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [4] [i_4] = (max((max(-var_15, 63987)), ((((min(-5894240035148213685, (arr_3 [17] [i_3])))) ? 15518 : (arr_10 [i_0] [7] [i_4] [i_3] [i_1] [i_2] [i_1])))));
                                var_21 = (arr_11 [i_4]);
                            }
                        }
                    }
                    var_22 = (min(-5169926557414022596, (arr_2 [i_1] [i_2 + 2])));
                }
                arr_13 [i_0] [i_1] = (arr_11 [i_1]);
            }
        }
    }
    #pragma endscop
}
