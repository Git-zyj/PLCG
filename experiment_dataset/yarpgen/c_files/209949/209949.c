/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((2147483647 && (((~((2147483647 ? (-2147483647 - 1) : 2147483647)))))));
    var_17 = ((((!(!var_6))) ? (-2147483647 - 1) : ((~(~var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 ^= ((var_13 << (1 < 102470265)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 20;i_4 += 1)
                            {
                                var_19 = (((max((((2147483647 ? 2147483647 : var_11))), (max(124, var_3)))) & (((130023424 ? (arr_12 [i_1] [i_2] [i_4 - 3]) : (arr_12 [6] [i_2] [i_4 + 1]))))));
                                arr_13 [i_4 + 1] [i_4] [i_2] [i_4] [i_0] = (min(-2147483647, (max(7084170554794945324, (!var_14)))));
                                var_20 -= ((-(((arr_6 [i_0] [1] [i_4 - 1] [i_4]) ? (max(17809, 2147483639)) : (min(2147483647, (-2147483647 - 1)))))));
                                arr_14 [i_4] [i_4] = (max((max(-2147483621, var_9)), (min(4037111045, var_14))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_17 [i_0] = (((~var_3) ? ((min(var_7, 140))) : ((var_0 ? 27896829 : 4211614362))));
                                var_21 -= 4267070455;
                                var_22 ^= -2147483647;
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] = ((((~(arr_7 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((-710305989 ? 1 : -1546357027))) : (max(var_2, 2147483641)));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_23 = ((var_9 ? (min((1 >= 9), ((4294967295 ? 3 : 1)))) : ((((max(90, 27896831))) ? (var_10 > 0) : ((13718578057237816101 ? 1173845353 : -1173845343))))));
                                arr_23 [i_0] = var_8;
                            }
                            var_24 -= ((((((-1173845348 ? -1940300051 : -1546357045))) ? (arr_19 [i_1] [i_3] [i_1]) : var_4)));
                        }
                    }
                }
                var_25 = (max((arr_22 [i_0] [1] [i_1] [i_0] [3] [i_0] [3]), (min((((-1259717208 ? var_10 : var_12))), var_2))));
            }
        }
    }
    #pragma endscop
}
