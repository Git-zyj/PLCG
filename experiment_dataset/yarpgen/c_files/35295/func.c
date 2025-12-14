/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35295
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
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_11)) : (13000819U)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_1])) <= (((/* implicit */int) arr_0 [i_0]))))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 1])) ? (arr_4 [i_1 - 3] [i_1 + 3] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_1 + 3] [i_1 - 2])));
            var_15 = ((/* implicit */int) arr_3 [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) << (((((arr_4 [i_0] [i_2] [i_2]) + (186613659))) - (18)))));
            arr_8 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15265)) ? (((/* implicit */int) (unsigned short)4471)) : (((/* implicit */int) (unsigned short)4471))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (var_4)))) ? (((((/* implicit */_Bool) (signed char)-11)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524287U)) ? (3621115864U) : (arr_1 [i_0] [i_2]))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((var_2) + (339629578)))));
        }
    }
    var_18 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (var_1))) << ((((~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))))) + (3)))));
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
}
