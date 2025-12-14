/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238783
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
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (signed char)-94)) ^ (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)15966)) : (((/* implicit */int) (unsigned short)4267)))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)63))))), (min((var_12), (((/* implicit */int) arr_1 [i_0] [i_1]))))));
            arr_4 [i_0] [i_0] = ((/* implicit */long long int) max(((-(1368057558))), (((/* implicit */int) arr_1 [i_0] [i_1]))));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1933959473)) ? (((/* implicit */int) (unsigned short)22883)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) min((var_6), (arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_10)) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-1)))) ^ (((((/* implicit */_Bool) (unsigned short)4272)) ? (792835398) : (((/* implicit */int) (signed char)71)))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) ^ (((/* implicit */long long int) 1498677406))));
            arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
            var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)4248))));
        }
        arr_8 [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
    }
    var_19 *= ((/* implicit */signed char) var_9);
}
