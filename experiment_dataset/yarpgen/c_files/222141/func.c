/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222141
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
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (arr_0 [i_0]))), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0]))))))) : (min((((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) % (((/* implicit */int) var_2))))), ((-(arr_0 [i_0])))))));
        var_14 ^= ((/* implicit */_Bool) ((unsigned long long int) ((int) 1601564688)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((long long int) (short)8504))))) & (min((min((var_9), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((short) var_7)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) var_9);
        var_16 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [(unsigned char)12] [i_1 - 1])) ? (((/* implicit */int) arr_5 [6LL] [i_1 - 1])) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) arr_5 [(unsigned char)10] [i_1 - 1])) - (((/* implicit */int) arr_5 [10LL] [i_1 - 1]))))));
        arr_7 [i_1] = ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_1])))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_2))))))));
        arr_11 [i_2] [i_2] = max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [2LL] [i_2])) && (var_1)))), (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_0 [0]) : (((/* implicit */unsigned int) arr_2 [i_2 - 1] [i_2])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_1))) || (((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_2])))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)131), (((/* implicit */unsigned char) (signed char)-89))))) ? (min((((/* implicit */unsigned long long int) var_4)), (((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)0] [i_2]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_4))) ? (((((/* implicit */int) (short)-6611)) | (((/* implicit */int) (unsigned char)48)))) : (((/* implicit */int) arr_6 [(unsigned char)14])))))));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) var_12)))));
}
