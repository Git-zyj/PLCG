/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196543
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
    var_15 = ((/* implicit */int) max((-2819866389282058608LL), (((/* implicit */long long int) 93435714U))));
    var_16 = ((/* implicit */short) var_2);
    var_17 -= ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) (signed char)-89))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) max((min((max((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_2 [10LL]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))), (max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1])))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (~(((unsigned int) var_9))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : ((-2147483647 - 1))))), (-2819866389282058608LL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2819866389282058604LL)) ? (-2819866389282058593LL) : (2819866389282058613LL)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((-7314555200177546867LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
            arr_7 [i_1] = ((/* implicit */unsigned int) ((short) arr_1 [i_0]));
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))));
            var_20 = ((/* implicit */short) var_2);
        }
        for (long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (var_14)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32754))))), (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47914))) ^ (7314555200177546866LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [0U]))))))))))));
            var_22 |= ((/* implicit */long long int) ((signed char) var_14));
        }
    }
}
