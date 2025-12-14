/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0 - 1] [i_0 - 1] = (((arr_1 [i_0 - 2] [i_1]) || ((min(-3005, 1878906442)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = ((((arr_0 [i_0]) ? var_0 : (-2147483647 - 1))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] &= var_4;
                            var_19 = ((((((-32767 - 1) % 224))) ? ((min((arr_5 [i_0] [i_1] [i_3]), (arr_9 [i_0] [i_0] [i_2] [i_3])))) : (arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 2])));
                            arr_11 [i_0 - 2] [i_2] [i_2] [i_3] [i_1] = ((((!((((arr_7 [i_0 + 2] [i_2] [i_0 + 2]) ? 224 : 6093))))) ? (((((var_12 && var_10) >= (arr_7 [i_0] [i_2] [i_0]))))) : ((((max((arr_5 [i_2] [i_1] [i_0]), 17275))) ? (-127 - 1) : (var_3 ^ var_8)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((var_6 <= var_14) ? (((max(49, 32)))) : var_7))) ? (((((!38101) && (((var_2 ? 18446744073709551605 : var_7))))))) : (max(((52 ? var_14 : 0)), var_6))));
    var_21 = (~18446744073709551615);
    var_22 = (max(var_10, var_1));
    #pragma endscop
}
