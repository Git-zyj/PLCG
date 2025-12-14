/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207939
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) - (var_14)))) ? (((((/* implicit */_Bool) (short)-12989)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) arr_5 [i_1]))));
        arr_7 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((-8824285399795419165LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
    {
        var_20 &= ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_15)))))) == (max((var_17), (((/* implicit */long long int) var_3)))))) ? (2741407759273883411LL) : (max((2741407759273883411LL), (2741407759273883411LL))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) max((((unsigned long long int) arr_9 [i_2 + 1])), (((/* implicit */unsigned long long int) arr_8 [i_2 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (min((1578985866712987181LL), (((/* implicit */long long int) arr_9 [i_2 - 2])))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_22 |= ((/* implicit */signed char) arr_1 [i_3]);
        arr_14 [i_3] = ((((/* implicit */_Bool) -1938068859)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
    }
    var_23 = ((/* implicit */short) ((((((_Bool) var_5)) || (((/* implicit */_Bool) var_11)))) ? (max((var_17), (((/* implicit */long long int) var_13)))) : ((+(((-2741407759273883415LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_10))));
}
