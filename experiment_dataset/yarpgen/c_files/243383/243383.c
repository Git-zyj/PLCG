/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (var_7 ? (min(var_0, ((13296270789029567184 ? 450712855665963266 : var_10)))) : (((~(var_0 % var_11)))));
    var_21 = var_6;
    var_22 = var_10;
    var_23 = ((450712855665963263 ? var_12 : (((((var_8 ? var_10 : var_3))) ? 450712855665963250 : (((var_14 ? 12 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_24 = (max(var_24, (((!((((((-51 + 2147483647) << (((arr_1 [i_1]) - 98)))) / ((-(arr_1 [i_0])))))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_25 *= 1603866672;
                                var_26 += ((((((((max(49, var_16)))) + (((arr_8 [i_0] [i_1]) ? var_9 : var_10))))) ? (((((var_1 ? 10249872154642313390 : (arr_7 [i_0] [i_1] [i_4])))) ? (((-29 ? 136 : 236))) : (max(var_10, var_17)))) : ((var_10 ? (((3180485580689401278 ? 208 : 117))) : (167 + 3180485580689401274)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
