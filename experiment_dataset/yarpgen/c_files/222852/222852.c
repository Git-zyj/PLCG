/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 224;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += ((!(((-(var_3 > 172810152041834834))))));
                                var_16 = (min(33770, 31776));
                            }
                        }
                    }
                    arr_11 [i_2] [i_1] [i_2] = min(31758, (var_10 / var_9));
                    var_17 = (var_4 <= 33796);
                    arr_12 [i_2] [i_1] [i_2] = (((!33770) ? ((min(17340330083713896082, var_11))) : 3226767079453503636));
                }
            }
        }
    }
    var_18 = -9223372036854775789;
    var_19 = 6917063530193081377;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            {
                var_20 = (min(var_20, (!-var_6)));
                arr_19 [i_6] [i_6] = (0 > 1106413989995655533);
            }
        }
    }
    #pragma endscop
}
