/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227424
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)15)) == (((/* implicit */int) var_12))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (1ULL)))) ? (((/* implicit */int) min(((signed char)15), (((/* implicit */signed char) (_Bool)0))))) : (max((var_3), (var_3))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) min((((_Bool) arr_2 [i_0] [i_0])), ((_Bool)1)));
        var_18 &= ((/* implicit */unsigned short) ((short) arr_1 [i_0] [i_0]));
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)16] [i_0]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [(unsigned char)4] [i_0]))))) ? (((/* implicit */int) arr_0 [(signed char)10])) : (((/* implicit */int) arr_2 [20ULL] [i_0]))))));
        var_20 += ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)6] [i_0]))) * (min((8972014882652160ULL), (((/* implicit */unsigned long long int) -1503561212)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1341660186U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)8] [i_0])))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [16U] [i_0])))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))));
        var_22 = ((/* implicit */signed char) arr_4 [i_1]);
    }
    var_23 -= ((/* implicit */unsigned long long int) var_4);
    var_24 = ((/* implicit */unsigned char) var_9);
}
