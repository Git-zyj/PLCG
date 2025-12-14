/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = (!18223904062898501324);
                            var_19 = ((((((((-61 ? 1 : var_6))) ? 57595 : ((var_14 ? (arr_3 [i_2]) : 18223904062898501324))))) ? ((max(((var_13 ? var_5 : var_5)), var_0))) : var_7));
                            arr_14 [i_3] [4] [i_2] [17] = (((((237 ? -32755 : ((-4266 ? -11511 : 127))))) ? (min(18446744073709551592, ((var_13 ? var_2 : (arr_1 [i_0 - 3] [i_0 - 3]))))) : ((3 >> (((arr_5 [i_1] [i_1]) - 11919758456983273421))))));
                        }
                    }
                }
                var_20 = 8061046331017211826;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_21 [19] [i_5] [i_1] [i_4] [i_1] = ((!((max(var_16, (arr_12 [i_1] [i_1] [i_4] [i_5]))))));
                            arr_22 [i_0] [i_5] [i_5] [i_4] [17] = ((var_2 ? 1 : (((!-25286) ? ((var_7 ? (arr_19 [i_5] [22] [i_4] [i_4] [22] [i_4]) : var_4)) : -32))));
                            var_21 = (min(var_21, ((((((1 >> (24944 - 24921)))) ? 0 : (max(-49, 4147757843)))))));
                        }
                    }
                }
                var_22 = var_3;
            }
        }
    }
    var_23 = (min(var_23, ((((((var_0 ? var_9 : 17)) ? ((var_9 ? var_4 : 208)) : (!13245)))))));
    var_24 -= (((((var_10 | (~var_15)))) ? (((((4095 ? var_5 : var_2))) ? (var_10 && var_13) : (var_2 / var_5))) : ((((max(var_8, var_11)))))));
    #pragma endscop
}
