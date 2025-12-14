/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239066
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((var_7) >> (((((/* implicit */int) var_6)) - (27052))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_0))))))))) > (((max((var_8), (var_7))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6)))))))));
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_5) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_4))))) / (((min((((/* implicit */unsigned int) var_2)), (var_8))) >> (((min((var_8), (((/* implicit */unsigned int) var_2)))) - (107U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_12 -= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */signed char) (((-(arr_0 [(unsigned short)14] [9ULL]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_1]);
        arr_5 [i_1] |= ((((((/* implicit */int) ((((/* implicit */int) arr_1 [17U])) >= (((/* implicit */int) arr_4 [(unsigned char)12] [i_1]))))) >> (((((/* implicit */int) arr_1 [2U])) / (((/* implicit */int) arr_1 [i_1])))))) >= (((/* implicit */int) ((max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (arr_2 [i_1]))) >= (min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (arr_2 [i_1])))))));
    }
}
