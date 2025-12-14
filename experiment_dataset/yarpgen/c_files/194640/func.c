/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194640
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
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8256517766441496530ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1194))) : (var_6))) ^ (((/* implicit */long long int) min((var_1), (var_1))))))) & (min((((((/* implicit */_Bool) var_4)) ? (1134399461245476476ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (var_11)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 156959499)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) + (((unsigned int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) == (1931779420236158262LL)))), (((((/* implicit */_Bool) min((arr_1 [(_Bool)1]), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)61)), ((short)1194))))) : (arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = (_Bool)1;
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_8 [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_1 [i_1]))))) : (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (short)1172)))))))));
        arr_9 [(short)12] [(short)12] = ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) arr_1 [i_1]))))))) == (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_5 [0]) : (arr_5 [2ULL]))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)3584))))))));
    }
    var_16 = var_13;
    var_17 = ((/* implicit */_Bool) var_4);
}
