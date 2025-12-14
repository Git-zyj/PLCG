/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52692
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
    var_12 = var_3;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_0))));
        arr_3 [i_0] = ((/* implicit */signed char) ((arr_2 [i_0]) <= (arr_2 [i_0 + 1])));
        var_14 = ((/* implicit */short) ((arr_1 [i_0 + 1] [i_0 - 3]) || (arr_1 [i_0 + 2] [i_0 - 1])));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-64)) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 1])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_4)) : (((var_10) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
            var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 + 1])) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))));
        }
        arr_11 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1]);
    }
    var_16 = (((-(var_11))) / (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_2)) / (var_7))) < (((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */int) (signed char)-80)))))))));
}
