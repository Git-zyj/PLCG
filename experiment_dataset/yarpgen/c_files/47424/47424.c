/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((15304 & (((var_8 || var_6) / ((-15303 ? 15305 : 0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_11 -= ((((((7 ? -15304 : 1)))) ? ((((-15303 ? var_7 : -1800987240)))) : (0 == var_7)));
                var_12 -= ((((min(((var_7 ? (arr_3 [i_0 - 1] [2]) : -32755)), (arr_3 [10] [8])))) ? ((11799324992985670322 ? ((var_9 ? var_3 : var_3)) : 2045425882)) : var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = min(4341, 7);
                            var_14 = (((-32767 - 1) ? 253 : (((((arr_4 [i_0] [i_0]) != 134217727)) ? 201 : 1))));
                            var_15 = (((((var_3 + (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (arr_4 [i_0] [i_0 - 1]))) : ((65535 ? var_5 : var_1))));
                            var_16 *= -2935241811073043253;
                        }
                    }
                }
                var_17 *= ((18446744073709551615 ? ((-32755 ? (arr_2 [11]) : (!-134217712))) : ((148 ? (!var_0) : (!1)))));
            }
        }
    }
    var_18 = 255;
    #pragma endscop
}
