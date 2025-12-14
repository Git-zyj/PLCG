/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219579
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_14);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] = min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_7)))), (min((((/* implicit */long long int) var_15)), (var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_0))))) : (min((var_5), (var_8)))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_12))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_5)))))) < (((var_15) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (var_3)))) : (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) -2)) ? (9) : (((((/* implicit */_Bool) 16)) ? (((var_9) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (short)-19552)))) : (-1186307253))));
        arr_12 [i_3] = ((/* implicit */long long int) min((-2), (-2)));
    }
    var_17 *= ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (var_1)))), (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) var_1)))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    var_18 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_0))))) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) var_1)))) : (((((/* implicit */_Bool) var_11)) ? (var_4) : (var_5))))), (var_4)));
    var_19 = ((/* implicit */signed char) var_9);
}
