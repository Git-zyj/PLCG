/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39043
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
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [12ULL] [i_0] = ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [(_Bool)1])));
        arr_4 [i_0] [(short)1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16380)) & (((/* implicit */int) (_Bool)1))))) | (arr_1 [7ULL] [5LL])));
        arr_5 [i_0] [(short)9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)44)) && (((/* implicit */_Bool) (signed char)13))));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_2 [5] [12LL]) : (((/* implicit */int) var_4))))) | (((((/* implicit */_Bool) ((arr_0 [i_1] [5]) << (((((/* implicit */int) (unsigned short)16380)) - (16380)))))) ? (((/* implicit */unsigned int) ((int) arr_6 [i_1]))) : (var_0))))))));
        arr_8 [i_1] = ((/* implicit */_Bool) var_7);
    }
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */unsigned int) 2109439592)) : (1703999248U)));
    var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */_Bool) (unsigned short)24273)) && (((/* implicit */_Bool) 2109439603))))));
    var_15 |= ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (((int) var_4)))) | (((/* implicit */int) var_1)));
}
