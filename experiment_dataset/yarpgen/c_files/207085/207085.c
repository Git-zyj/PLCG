/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1708132846;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 = ((var_12 ? (!var_4) : (var_17 & 23567)));
                    var_22 = var_3;
                    var_23 = (((((var_11 ? var_5 : var_8))) ? (!1203384120) : -var_14));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((var_0 >= (4294967295 != var_6))))));
                                var_25 = (max(-1, (var_5 && 4501400604114944)));
                                var_26 = ((!(var_12 * 32491)));
                                var_27 += ((((-1 ^ var_2) ? var_7 : var_12)));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] = (((((!(var_19 < 0)))) % (~var_8)));
                }
            }
        }
    }
    #pragma endscop
}
