/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35812
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = (((~(arr_1 [i_0]))) ^ (((/* implicit */unsigned long long int) (+(var_10)))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) >= (2670429525U))))) / (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_12 += ((/* implicit */unsigned char) var_6);
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((var_10) + (9223372036854775807LL))) >> (((((int) arr_3 [(_Bool)1] [7U])) - (1716172196)))));
        arr_6 [(_Bool)1] = ((/* implicit */short) 18446744073709551601ULL);
        var_13 = ((/* implicit */signed char) ((long long int) 1776258208));
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        arr_10 [7] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) arr_7 [i_2 - 2] [i_2 + 1]))), (((((_Bool) (_Bool)1)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)3965))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((_Bool) (+(((/* implicit */int) var_5))))) ? (((long long int) max((63ULL), (18446744073709551615ULL)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_2 + 1])), (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (2173280719U))))))));
    }
    var_14 &= ((/* implicit */short) ((((/* implicit */int) var_1)) >> (((var_6) - (2641458931U)))));
    var_15 = 2173280721U;
}
