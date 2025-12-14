/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219317
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)3] = ((/* implicit */signed char) max(((unsigned short)33955), (((/* implicit */unsigned short) (short)-27892))));
        arr_4 [19LL] = ((/* implicit */int) ((short) min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) != (((/* implicit */int) arr_5 [(_Bool)1]))));
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (var_9))) >= (((/* implicit */unsigned int) max((((/* implicit */int) ((15579685352223625174ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19631)))))), (((((/* implicit */_Bool) var_8)) ? (arr_8 [i_1]) : (((/* implicit */int) arr_13 [i_1] [(short)7] [i_3] [i_3 - 1])))))))));
                    var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)24429))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_1])), (arr_6 [i_1])))) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) ((((unsigned int) var_3)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -7833829237952704157LL)) || (var_4))))))))));
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)-27906)), ((unsigned short)23518)));
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_9 [i_4] [16U])))));
        var_19 *= ((/* implicit */unsigned char) ((unsigned long long int) max((7833829237952704160LL), (((/* implicit */long long int) (unsigned short)58675)))));
    }
    var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((var_5), (var_11))) : (((/* implicit */unsigned long long int) ((-7833829237952704157LL) / (-240914535435895397LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_6))))) : (((/* implicit */int) (signed char)115)))))));
}
