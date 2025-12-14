/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((max(var_11, var_13)) != var_0)))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((((min((max(10745740519433454255, var_4)), var_11))) ? (252 % 1149971026) : ((-1130536684012945027 ? var_0 : var_4))));
                                var_16 = (max((min((((1149971016 ? 1149971040 : 4294967293))), 17323)), (((((7607307374843570205 ? var_2 : var_0)) ^ (((var_6 ? 17332 : var_0))))))));
                                var_17 = (max(var_17, (((((min(-1149971016, var_8))) ? ((min(((var_3 ? 5148073515066281007 : var_13)), (var_3 + var_11)))) : (max(8188093418556902058, -108)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_9, ((min(((-1 ? var_7 : var_8)), var_13)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = (((~-1) ? -46 : 18446744073709551614));
                    arr_26 [i_5] [i_5] [4] [i_5] = ((var_6 ? (min(25970, 1189289635138474583)) : var_2));
                }
            }
        }
    }
    var_19 -= ((((((var_8 ? var_9 : 17321)))) ? (max(var_6, (((4294967293 >> (14445 - 14431)))))) : ((max(var_0, (min(var_13, -17)))))));
    var_20 -= ((18446744073709551609 ? (((51090 ? (var_8 % var_11) : 48203))) : 7205203727961561399));
    #pragma endscop
}
