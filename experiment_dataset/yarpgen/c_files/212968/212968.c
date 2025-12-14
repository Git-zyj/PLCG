/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((9223372036854775792 ? 0 : 3594889881));
    var_12 = ((var_6 | var_2) ? -var_9 : 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 *= (min(var_0, ((-558510344 ? (arr_0 [i_0]) : (arr_0 [i_1])))));
                arr_6 [i_0] [i_0] [i_1] &= 4095;
                var_14 *= var_8;
                arr_7 [i_0] [i_0] [i_0] &= (min(558510343, ((var_9 ? var_1 : (arr_3 [i_0] [19])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 &= (((((arr_9 [i_0] [i_3 + 3]) ? -1839353042869409680 : var_5))) ? (((!(arr_9 [i_1] [i_3 + 1])))) : (65535 != 7));
                                var_16 = ((var_9 ? 5881153549424572044 : 1));
                            }
                        }
                    }
                    arr_14 [i_2] [14] [i_0] [i_0] = min((222 & 1), (max((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_1]))));
                }
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_17 [i_5] [i_1] [i_5] = (((((var_9 ? 1 : var_3))) - ((var_8 ? (min(0, 63)) : var_9))));
                    var_17 = (min(var_17, 0));
                }
            }
        }
    }
    #pragma endscop
}
