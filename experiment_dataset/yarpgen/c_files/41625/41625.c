/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [13] = ((((max(((min(var_3, var_8))), (-13318233583647535 / var_0)))) ? (max((max(var_7, var_4)), 11597)) : 11604));
                        var_16 = (max(((max((max(var_14, var_11)), (11607 || var_15)))), -3824984110602299035));
                        var_17 -= 127;
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [9] = 224;
                        var_18 *= (((((53939 ? var_9 : var_9)) == ((var_12 ? var_2 : var_3)))));

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_2] [i_0] [i_0] = ((11597 ? (max(var_5, 65530)) : var_2));
                            arr_18 [i_0] [i_1] [i_2] [i_2 - 1] [i_2 + 1] = ((((max(53938, -134934247))) ? var_10 : 27338));
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            var_19 ^= (min((((max(53954, 224)))), 231));
                            arr_21 [10] [10] = (3624349318 && 53938);
                            var_20 = (min(var_20, -758796158));
                            var_21 = ((11613 ? 55379 : var_9));
                        }
                    }
                    arr_22 [13] [i_0] |= (max(var_13, var_0));
                    var_22 = 53928;
                }
            }
        }
    }
    var_23 = max(((var_6 ? 17643134352531729831 : (var_4 / var_11))), var_10);
    #pragma endscop
}
