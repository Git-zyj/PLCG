/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] [i_2] = 29221;
                        arr_9 [i_0] [i_1 + 2] [i_1] [i_2] [i_3] = (3937 / 18446744073709551615);
                        var_17 = (min(var_17, (((((var_2 ? var_3 : var_5)) / 57344)))));
                        var_18 ^= (arr_6 [i_1] [i_1 - 2] [i_1] [i_1 + 1]);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((((arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 2]) ? ((var_5 ? 13696094410367888597 : 255)) : 18446744073709551615)))));
                            var_20 = (min(var_20, (((~(!13660622206140327047))))));
                            var_21 = ((-(arr_4 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                        }
                    }
                    var_22 = ((~((~((0 ? (arr_6 [i_0] [i_1 + 1] [i_2] [i_2]) : var_14))))));
                    arr_12 [i_0] [i_0] = ((((4711 ? 2143713535035372128 : 0))) ? (arr_10 [i_0] [i_0] [i_1] [i_1 + 2] [i_1] [i_2]) : (((((var_8 ? (-127 - 1) : 15))) ? (~16) : (((3007374073 ? (arr_2 [i_0]) : (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2])))))));
                    var_23 = ((arr_1 [i_1 + 2] [i_1 - 1]) ? 6335 : (((!(!-1)))));
                }
            }
        }
    }
    var_24 &= max(var_11, var_7);
    var_25 = (((-((var_15 ? 32768 : 3941)))) ^ var_10);
    #pragma endscop
}
