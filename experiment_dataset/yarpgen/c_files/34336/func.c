/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34336
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)36152)))))));
    var_11 += var_8;
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+((+(((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [(unsigned char)7] [7U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [(_Bool)1]))));
        arr_4 [i_0] = ((/* implicit */signed char) 1737512087409174498ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_13 ^= ((/* implicit */_Bool) ((14568007432476579577ULL) >> (((arr_5 [i_1]) - (3136751690U)))));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? ((~(arr_8 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))));
    }
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
}
