/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0] [i_1 - 1]);
                            var_11 = ((~((615916261 ? (arr_0 [i_0] [i_1 + 1]) : var_2))));
                            var_12 = ((-(arr_1 [i_0] [i_0])));
                            var_13 = (min(var_13, (((((var_10 ? 15824 : (arr_8 [i_3] [i_2] [i_1 - 1] [i_1 - 1] [i_0] [i_0]))) == ((((arr_6 [i_0] [i_0] [i_0] [i_0]) + 1485392250))))))));
                            var_14 = (((69492064 ? (((arr_6 [i_0] [i_0] [i_0] [i_1 + 1]) * -15824)) : 240)));
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_1 + 1] = var_7;
                arr_11 [i_0] = ((!((min(var_6, var_8)))));
                arr_12 [i_0] = (arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_15 |= (min((min((~8536648534824133338), ((((arr_2 [i_0] [i_0] [i_1 + 1]) ? (arr_0 [i_0] [i_1 - 1]) : 1))))), -15825));
            }
        }
    }
    var_16 = ((((min(((var_3 ? 22547539 : var_8)), ((1 ? var_10 : var_5))))) * (((((15835 << (var_10 - 1308519464)))) & ((15792 ? 148 : 18446744073709551615))))));
    var_17 = 896;
    var_18 &= ((var_3 << (142 - 126)));
    #pragma endscop
}
