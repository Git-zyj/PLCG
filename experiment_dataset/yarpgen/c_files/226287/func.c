/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226287
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
    var_10 &= ((/* implicit */long long int) var_7);
    var_11 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) var_4)) % (var_7))))));
    var_12 = ((/* implicit */long long int) var_2);
    var_13 |= ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_14 = max(((short)32752), ((short)32758));
        arr_3 [i_0 - 1] |= ((/* implicit */short) var_1);
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1649557961))))) : (((/* implicit */int) var_5))));
        arr_4 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_12 [i_2] [i_3 + 1] = ((/* implicit */short) ((unsigned int) min((((((/* implicit */_Bool) (short)-15822)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))) : (4294967295U))), (((/* implicit */unsigned int) var_5)))));
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)395)), (4294967295U)));
                }
            } 
        } 
        arr_13 [i_1 - 1] = ((/* implicit */signed char) arr_10 [i_1]);
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4 - 1] = ((/* implicit */signed char) ((((arr_2 [i_4] [i_4 - 2]) != (var_9))) ? ((-(3180403986622560078LL))) : (((/* implicit */long long int) 2782857041U))));
        arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_4 + 2] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 + 2]))) : (((((/* implicit */_Bool) (short)32752)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))));
        arr_18 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
}
