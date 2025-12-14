/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203246
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned char) 3071249803U);
    var_11 = var_7;
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */long long int) (-(var_5)));
        var_12 *= ((/* implicit */unsigned char) ((((3071249803U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_13 = arr_0 [1LL];
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_3 [i_1] [i_1]))));
        }
        var_15 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0)))));
        var_16 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1])))) != (var_8)));
        arr_8 [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -8727206880640435013LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (3071249818U))), (((/* implicit */unsigned int) var_8))));
    }
    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), ((+(-1LL)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (unsigned int i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_17 [i_3] [i_3] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_3])), (8124745995074525320LL)))) ? (min((((((/* implicit */_Bool) 5376450331564720576LL)) ? (((/* implicit */long long int) 0)) : (-1789165919597467339LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) | (var_4)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 2] [i_3])) / (((/* implicit */int) arr_10 [i_3]))))));
                    var_18 += ((/* implicit */int) ((((/* implicit */_Bool) max((11), (((((/* implicit */_Bool) -22)) ? (((/* implicit */int) arr_11 [i_4] [i_5])) : (2120484262)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) (~(arr_12 [(_Bool)1] [(_Bool)1])))) ? (min((907101562U), (((/* implicit */unsigned int) 32767)))) : (arr_16 [18U])))));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */long long int) var_3);
    }
    for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
    {
        var_19 &= ((/* implicit */_Bool) max((-5376450331564720585LL), (((long long int) arr_12 [i_6] [(unsigned char)18]))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_16 [2]))));
    }
}
