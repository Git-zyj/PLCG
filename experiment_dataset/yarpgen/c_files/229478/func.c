/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229478
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) (~((~(var_10)))))));
        var_12 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (0ULL)))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) min(((~(6932981350737364713ULL))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))));
        arr_8 [i_1] [i_1] = max((((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1])))), ((-(((/* implicit */int) arr_2 [i_1])))));
        var_13 *= ((/* implicit */signed char) ((_Bool) arr_6 [i_1]));
        arr_9 [i_1] = ((/* implicit */unsigned short) max((var_7), (((((/* implicit */int) arr_1 [2U])) == ((+(((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        arr_10 [i_1] [i_1] = ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_1 [4LL])));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((_Bool) var_10));
        arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((~(((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_12 [i_2]) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_7))));
    }
    var_15 += ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_4)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_1))) : (((/* implicit */unsigned long long int) (~(var_9)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))));
    var_16 ^= ((/* implicit */int) var_9);
}
