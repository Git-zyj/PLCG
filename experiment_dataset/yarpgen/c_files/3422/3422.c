/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 ^= (((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((max(2147483647, 255)) >= 65535)))) : var_16);
                    var_21 -= ((~((((arr_5 [i_0] [i_0]) >= (arr_5 [i_0] [i_1]))))));
                    var_22 = ((((((var_12 ? 1 : var_19)))) >= -1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((arr_7 [i_2] [i_3]) >= (((((arr_8 [i_0] [i_0]) >= (arr_2 [i_0]))))))))));
                                var_24 = 818133916;
                            }
                        }
                    }
                    var_25 &= (min((~112), (min((arr_11 [i_0] [i_0] [7] [i_1] [1] [i_0]), var_15))));
                }
            }
        }
    }
    var_26 = 6469600726903609411;
    var_27 -= (((max(4294967295, (var_6 | 1))) | var_18));
    var_28 = 3476833402;
    #pragma endscop
}
