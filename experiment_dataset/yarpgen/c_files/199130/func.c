/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199130
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27762))) + (10476641827439532378ULL));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */signed char) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) min((var_10), (var_3))))))) && (((((/* implicit */_Bool) max((arr_1 [i_0]), (15836501431993217657ULL)))) && ((!((_Bool)1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) 77056969U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_2))))))) % (((((/* implicit */long long int) ((/* implicit */int) (short)7840))) % (2305843009213693952LL)))));
    }
    var_13 ^= var_10;
    var_14 = ((/* implicit */long long int) var_4);
}
