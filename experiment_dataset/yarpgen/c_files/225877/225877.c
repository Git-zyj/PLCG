/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((15 ? var_9 : var_10))) ? (((var_17 ? var_12 : var_13))) : ((var_6 ? var_5 : var_11))))) ? (((((9225046543767150118 ? -25348 : var_5))) ? ((var_14 ? 21 : 93727709524908085)) : (((var_8 ? -2952577752696274135 : var_16))))) : ((((((var_9 ? -2952577752696274135 : var_11))) ? (((1 ? var_10 : var_2))) : ((-148552266 ? var_8 : var_4)))))));
    var_19 &= ((((((((25349 ? 18446744073709551615 : 16))) ? ((var_4 ? var_5 : 3205561755)) : (((var_10 ? var_14 : var_4)))))) ? (((((var_7 ? var_16 : var_13))) ? ((903175238 ? (-127 - 1) : var_12)) : ((var_15 ? var_16 : var_0)))) : ((((((var_10 ? var_16 : var_1))) ? ((var_16 ? 25349 : 0)) : ((var_11 ? var_3 : -80)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((0 ? 1037878750 : 0));
                    var_21 -= ((((((((var_11 ? -903175239 : 42515317))) ? ((((arr_0 [i_0]) ? (arr_4 [i_0] [i_0]) : var_13))) : ((0 ? 3257088545 : var_15))))) ? ((((((-8323 ? 1 : 1))) ? ((1037878750 ? var_6 : 65535)) : ((8315 ? 0 : (arr_4 [i_0] [i_1])))))) : ((((((arr_4 [i_0] [i_0]) ? var_8 : (arr_1 [i_0] [i_2])))) ? (((var_9 ? 129 : -903175238))) : (((arr_3 [i_0] [i_2]) ? var_4 : var_0))))));
                    arr_7 [i_0] [i_2] = ((((((((1 ? 127 : var_12))) ? (((var_4 ? (arr_1 [i_0] [i_0]) : (arr_5 [i_2] [i_0])))) : ((var_2 ? var_2 : 14098548471754678802))))) ? (((((var_1 ? (arr_6 [i_0] [i_1] [7] [i_0]) : var_17))) ? (((23 ? 1 : 15360))) : ((var_17 ? var_8 : (arr_2 [i_0] [i_0] [i_0]))))) : (((-30157 ? 17148 : 0)))));
                }
            }
        }
    }
    var_22 = ((((((((127 ? 0 : 0))) ? ((var_10 ? var_15 : var_10)) : (((var_2 ? var_15 : var_6)))))) ? (((((57 ? 0 : -30157))) ? ((-30157 ? var_13 : var_8)) : ((-30157 ? var_2 : var_0)))) : (((((1 ? 1 : var_12))) ? ((1 ? 15 : (-127 - 1))) : (((var_17 ? 42201 : 2)))))));
    #pragma endscop
}
