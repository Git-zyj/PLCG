/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212191
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((var_8) % (var_2))));
        var_10 = ((/* implicit */unsigned char) var_7);
        var_11 *= arr_1 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_5);
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1])))));
        var_12 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_1] [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) -614716962)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-1))))) : (3061424636U)))));
        arr_10 [(short)6] |= ((/* implicit */int) (-((+(arr_5 [i_2] [i_2])))));
        arr_11 [i_2] = ((/* implicit */long long int) ((min((arr_4 [i_2] [i_2]), ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_2]))) : (((/* implicit */int) ((unsigned char) arr_4 [i_2] [i_2])))));
        var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_7 [i_2])))) ? (((/* implicit */int) max(((short)26), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) (unsigned char)3))));
        arr_12 [i_2] = ((/* implicit */short) min((((((/* implicit */int) (short)25857)) <= (((/* implicit */int) (signed char)49)))), (((var_4) > (((/* implicit */long long int) var_6))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_7 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254))))))));
        var_14 = ((/* implicit */unsigned int) arr_0 [i_3] [i_3]);
        arr_16 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -5821313678056336079LL)) ? (3936836369U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1762851149870181379LL)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (_Bool)1))));
}
