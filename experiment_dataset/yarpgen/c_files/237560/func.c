/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237560
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0]) == (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) (+(var_7)));
        arr_8 [i_1] = ((/* implicit */signed char) (-(((var_12) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_11 [i_2] = (unsigned short)8497;
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((arr_10 [i_2] [i_2]) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2])))))));
        arr_12 [i_2] |= ((/* implicit */short) (-(arr_1 [i_2] [i_2])));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((short) (~(var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned char)43))))) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (-1971164918)))))));
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) (short)-9))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) (unsigned short)10100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (4721092661312607925ULL)))))));
}
