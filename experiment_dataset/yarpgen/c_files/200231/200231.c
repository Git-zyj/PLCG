/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((-((min(var_3, 148)))))) ? (((var_5 - var_0) ? ((var_8 ? var_7 : var_8)) : (1 - var_7))) : (((var_3 & var_1) ? (~var_12) : ((-4538016196312228836 ? var_2 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (((((60 ? -4538016196312228848 : (arr_0 [i_0] [i_1])))) ? (((-4538016196312228821 | -1) % ((210 ? -4538016196312228795 : 2097151)))) : (min((max(var_15, 4)), (arr_3 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_0] = (((~(((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : 4538016196312228830)))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [13] [i_3] = ((-1253458917 ? 116 : 22));
                            var_20 = ((-4538016196312228830 ? ((var_14 ? ((223 ? var_1 : (arr_4 [i_0]))) : ((((arr_1 [i_2]) ? 44 : (arr_7 [i_1] [i_1])))))) : (((max(var_4, (arr_8 [i_0] [i_1])))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = ((((((((arr_2 [i_0] [i_0]) % var_16))) ? ((((arr_5 [i_0] [i_1]) ? 20 : var_16))) : ((-4538016196312228812 ? var_14 : -4538016196312228848)))) + (((((((arr_9 [i_0] [i_0] [i_1] [i_1]) ? (arr_2 [i_0] [i_0]) : 18))) ? (~var_7) : -16382)))));
                var_21 *= ((((~((3196875943 ? var_0 : 33)))) ^ ((((min((arr_5 [i_0] [i_1]), var_7))) & (min(var_4, -4538016196312228814))))));
            }
        }
    }
    var_22 = (((((1 ? 2 : -4538016196312228801))) ? (((((var_3 ? var_9 : 14685593346666864614))) ? (((var_6 ? var_12 : 2267110318))) : var_1)) : (((((min(249, 65531))) ? (max(var_7, -1836652360493915069)) : (((-4538016196312228806 ? 92 : var_12))))))));
    #pragma endscop
}
