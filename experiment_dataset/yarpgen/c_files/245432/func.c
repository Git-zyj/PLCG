/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245432
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((((+(arr_1 [i_0] [i_0]))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) : ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (max((1761530671U), (((/* implicit */unsigned int) var_9)))) : (((arr_1 [i_0] [i_0]) & (arr_1 [(_Bool)1] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (~(arr_0 [i_1]))))));
        arr_6 [8LL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)26))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 -= ((/* implicit */unsigned char) ((unsigned int) ((arr_0 [i_2]) << (((((/* implicit */int) arr_8 [i_2] [10U])) - (7663))))));
        var_18 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_7 [i_2]), (arr_7 [i_2]))))));
    }
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) : (max((var_0), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) (~(var_2))))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        var_19 += ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_0 [i_3])))) ? (max((arr_0 [i_3]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))));
        arr_13 [(_Bool)1] = ((/* implicit */signed char) min((((((/* implicit */int) arr_8 [i_3] [18ULL])) << (((arr_1 [i_3] [i_3]) - (266994737U))))), (((/* implicit */int) (short)26355))));
    }
    var_20 = ((/* implicit */unsigned int) var_9);
}
