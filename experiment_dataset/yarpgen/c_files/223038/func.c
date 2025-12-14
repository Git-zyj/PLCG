/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223038
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_9)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))))) : (((/* implicit */unsigned int) min((((int) var_9)), (((/* implicit */int) var_4)))))));
    var_12 = ((/* implicit */unsigned char) ((var_3) ? (((long long int) var_1)) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)150)))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_6)))))))));
    var_13 = ((/* implicit */unsigned char) var_2);
    var_14 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = arr_1 [i_0];
        var_15 &= ((/* implicit */unsigned char) (!(arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_5 [i_1]))))) : (((var_2) ? (var_9) : (var_0)))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (unsigned char)106))));
        arr_8 [(_Bool)1] = ((/* implicit */_Bool) ((int) arr_5 [i_1]));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((unsigned int) (!(var_1))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) 24U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_6)))));
    }
}
