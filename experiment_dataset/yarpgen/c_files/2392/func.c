/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2392
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
    var_14 = ((/* implicit */int) var_0);
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((int) var_7));
        var_16 = (short)25972;
        var_17 &= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [14ULL] [14ULL])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -770937274982882196LL))))) ? (arr_1 [i_0 - 1] [i_0 - 2]) : (((((/* implicit */_Bool) arr_1 [i_0] [(short)0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25972)))))))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_0 [i_1 - 2])) / (((/* implicit */int) arr_0 [i_1 - 3]))))));
        arr_4 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) >= (arr_1 [(short)0] [i_1 - 2]))))))) : (((/* implicit */long long int) min((arr_3 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8940293941564650407LL)) ? (((/* implicit */int) (short)-25972)) : (((/* implicit */int) (short)25971))))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 - 2]) : (((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 2])))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1854336950)) ? (((/* implicit */unsigned long long int) -337762620)) : (9844800171534022466ULL)));
        var_20 = ((/* implicit */short) arr_2 [(unsigned short)6] [(unsigned short)6]);
        arr_9 [(unsigned short)7] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4446)) ? (var_0) : (0ULL)))) ? (arr_8 [i_2] [i_2]) : ((~(arr_8 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((unsigned int) 4294967295U)))));
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_5) % (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]))))) ? ((~(4294967295U))) : (arr_3 [i_2])));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((int) 4294967295U));
        var_22 = ((/* implicit */_Bool) arr_1 [(unsigned short)6] [i_3]);
        var_23 -= arr_7 [5LL];
        arr_13 [(unsigned short)3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_11 [(short)4]))));
        var_24 *= ((/* implicit */short) ((int) ((((/* implicit */int) (short)25971)) >= (((/* implicit */int) (short)21389)))));
    }
}
