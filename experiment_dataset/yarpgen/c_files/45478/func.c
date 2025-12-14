/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45478
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (short)30036);
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (signed char)5))));
        }
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) (_Bool)1)))));
            var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0] [i_2 + 2] [i_2]));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_4 [i_2] [i_2 + 3] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (216851258U) : (((/* implicit */unsigned int) arr_9 [i_0] [i_0])))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 2] [i_2])) ? (((((/* implicit */_Bool) -4741692488495683529LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            arr_10 [i_0] [11ULL] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4679231806322313147ULL)))));
        }
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((((/* implicit */int) arr_2 [(unsigned char)1] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_23 = ((/* implicit */_Bool) var_5);
}
