/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((179 ? ((1 * (arr_2 [i_1 + 1]))) : 1114168129));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (((min(((3 ? var_1 : var_0)), ((48244 ? var_0 : 29835)))) | 0));
                            var_13 ^= var_4;
                            var_14 = (arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_15 = 0;
    var_16 = ((1 ? ((((min(1, var_5))) ? (((var_8 ? var_1 : 1))) : 18446744073709551605)) : var_5));
    var_17 = (min(((4754225154861210131 ? ((var_2 ? -200941123357416007 : 65535)) : (var_7 ^ 7421))), ((((((13444125138512515179 ? var_4 : var_10))) || var_4)))));
    var_18 = 10901948598991781199;
    #pragma endscop
}
