/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31633
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
    var_14 = ((/* implicit */unsigned short) min((((signed char) var_11)), (((/* implicit */signed char) var_13))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            arr_4 [(short)9] = ((/* implicit */short) (-(((int) arr_1 [i_0]))));
            var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) 1229495341)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_3 [i_0] [(unsigned char)6] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) (short)25680)))))));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_0])) ? (arr_3 [i_0] [9LL] [i_0]) : (((/* implicit */unsigned int) var_3)))) : (arr_3 [i_0 + 1] [i_0] [i_0 + 1])));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!((!(((/* implicit */_Bool) 1229495341)))))))));
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1]))));
            arr_9 [i_0] [i_2] = ((/* implicit */short) ((_Bool) (_Bool)1));
        }
        for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1])) ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 3]) : (((/* implicit */long long int) arr_1 [i_0 - 1])))))));
            arr_12 [i_3] = ((/* implicit */unsigned short) (!((!(var_13)))));
        }
        var_20 += ((/* implicit */short) arr_10 [i_0] [11ULL] [1U]);
        var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(short)2] [i_0 - 1] [i_0 - 1])))))));
    }
    var_22 &= ((/* implicit */unsigned int) var_9);
}
