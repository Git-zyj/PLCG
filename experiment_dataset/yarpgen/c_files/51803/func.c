/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51803
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1007986288416655190LL)))) ? (((((/* implicit */int) arr_0 [i_0])) >> (((var_0) + (8302436235096687488LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_2)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_6);
    }
    var_11 |= ((/* implicit */int) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_4))))) ? (var_8) : (2181832365527082405LL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 95513463)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62562))) : (-4127445434799999774LL)))) ? (((long long int) var_1)) : (var_8)));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [(_Bool)1]))) : (var_7)));
        var_13 = ((/* implicit */long long int) var_5);
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) var_1);
        var_15 = ((/* implicit */signed char) (_Bool)1);
    }
    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((1147210997) == (((/* implicit */int) var_2)))))) + (((12LL) / (arr_12 [i_3 - 2])))));
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? ((-(((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) var_4)))) != (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [24LL] [i_3]))) + (-64121487244145593LL)))))));
    }
}
