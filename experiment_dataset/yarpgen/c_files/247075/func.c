/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247075
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
    var_13 = (-((~(max((2147483629), (((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_15 *= ((/* implicit */unsigned int) var_9);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (2147483615) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (max((-1), (-2147483625))) : (((/* implicit */int) (_Bool)1))))));
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [0LL] [i_0])))) ? (max((((/* implicit */int) ((unsigned short) var_1))), ((-(((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))) : ((+(((/* implicit */int) min((((/* implicit */short) (signed char)-69)), ((short)26135))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */_Bool) var_3);
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_0 [i_1] [i_1]))))));
        var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_10)))))))) : (((/* implicit */int) max((arr_3 [i_1] [i_1]), (((/* implicit */short) arr_1 [i_1] [2ULL]))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) arr_3 [(signed char)0] [(short)4]))))) : (((/* implicit */int) var_1)))))));
    }
}
