/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((0 << ((((min(var_5, var_0))) + 28399))))) ? (min((((var_13 ? -1374524263 : var_8))), ((var_6 ? var_11 : var_10)))) : (((((min(2748547645541368436, var_7))) ? (var_12 > var_5) : ((var_0 ? 72 : var_0)))))));
    var_16 *= (((((1 ? ((var_10 ? var_12 : var_8)) : var_12))) ? (((((((var_10 ? var_8 : var_3))) && (((var_2 ? var_5 : var_7))))))) : (((var_6 << 1) ? 2748547645541368446 : var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((((((4294967295 ? 0 : 84))) ? (((arr_0 [i_0]) ? 1 : var_7)) : (arr_0 [i_0 + 2])))) ? 1717263089 : var_3)))));
                var_18 = max((((((7329913498817358937 ? (arr_1 [i_0]) : var_5)) % (((arr_2 [i_0 + 1] [i_1]) ? (-127 - 1) : -14513))))), (min(2748547645541368450, (arr_2 [i_1] [i_0 + 2]))));
                var_19 = (min(var_19, var_12));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [i_1] [i_2 - 2] [1] [i_3 + 1] [i_2] = (((((((arr_7 [i_0 + 1] [i_1] [2] [i_1]) < 48)) && (~var_7))) ? (((14508 ? ((((arr_3 [i_3 + 1]) && 1))) : (((arr_8 [i_2] [i_4] [i_2 - 2]) ? 1 : (arr_12 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_4 - 1])))))) : ((~((29855 ? var_8 : 2989690808))))));
                                arr_15 [9] [9] [i_2] [i_2] [i_4] = (((((((4194303 ? (arr_7 [0] [i_2 - 1] [1] [i_4]) : var_0)) >= (arr_9 [i_2] [i_3 + 1] [i_2] [i_1] [i_2])))) + (arr_7 [i_1] [i_2] [i_3 - 2] [i_3 - 2])));
                                arr_16 [i_0] [i_2] [i_2] [i_3 + 3] [i_2] = (min((((1792 && var_11) ? -var_2 : ((var_14 ^ (arr_11 [i_4 - 2] [i_2] [i_1] [i_1] [i_2] [i_0]))))), ((((arr_0 [i_0 + 2]) || 4294967295)))));
                                arr_17 [i_2] [i_2] = (min((max((((arr_11 [i_0] [i_4] [i_2] [0] [i_2] [i_2]) ^ var_11)), (var_0 / 999438574))), (((-((1 ? (arr_4 [i_0] [i_0 + 2] [i_0 + 2]) : var_14)))))));
                                var_20 = (arr_0 [i_2 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 |= var_11;
    #pragma endscop
}
