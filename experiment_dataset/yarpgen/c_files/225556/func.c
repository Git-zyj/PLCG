/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225556
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
    var_16 += ((/* implicit */unsigned int) ((_Bool) min((min((var_13), (((/* implicit */unsigned long long int) (short)-26427)))), (var_13))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (signed char)11);
        arr_4 [i_0] = ((/* implicit */int) ((unsigned char) arr_3 [i_0]));
        var_18 += ((/* implicit */unsigned long long int) ((arr_2 [(signed char)17] [i_0 + 1]) == (arr_2 [i_0] [i_0 + 1])));
        var_19 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (unsigned char)215))))) * (((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) 
    {
        var_20 -= ((/* implicit */signed char) var_2);
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_1))))))) <= (((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1] [19LL]))) ? (min((var_13), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) var_3))))));
        arr_8 [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) 0U))) ? (((arr_3 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((/* implicit */long long int) var_6))));
    }
    var_22 = ((/* implicit */unsigned short) ((max((var_11), (((/* implicit */int) ((short) var_8))))) * (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_1)))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) <= (14976338706622240438ULL))))))));
}
