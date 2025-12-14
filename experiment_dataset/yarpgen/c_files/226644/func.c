/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226644
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
    var_11 = ((/* implicit */int) (unsigned short)7);
    var_12 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)78)) ? (((((/* implicit */_Bool) 8118447259454837901ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)50924)))) : (((/* implicit */int) min((var_10), (var_10)))))) % (((/* implicit */int) (unsigned short)65525))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (arr_2 [i_0]))))) == (((((/* implicit */_Bool) ((long long int) 18010000462970880ULL))) ? (3078796664347747770ULL) : (((unsigned long long int) arr_0 [(signed char)8]))))));
        arr_4 [9ULL] = ((/* implicit */signed char) ((unsigned short) arr_1 [i_0]));
        arr_5 [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((unsigned long long int) max((var_9), (var_9))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_9 [3ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [2LL])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))));
        arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) (_Bool)0)))));
        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) / ((-(((/* implicit */int) (signed char)-82))))));
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_15 = var_7;
        arr_14 [i_2] = ((/* implicit */long long int) max(((-((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_2])))))), (min((((((/* implicit */int) (unsigned char)224)) + (((/* implicit */int) var_0)))), (((/* implicit */int) var_9))))));
        var_16 = var_2;
    }
}
