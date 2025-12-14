/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228635
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_11 *= ((/* implicit */unsigned long long int) -7064197561627836217LL);
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_1 [5LL]))))))));
        var_13 &= ((/* implicit */int) var_3);
        arr_3 [i_0] [8U] &= ((/* implicit */signed char) ((463610083U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)4] [i_0 - 1])))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */short) ((unsigned int) ((_Bool) (-(var_9)))));
        var_15 &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)60290)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) -828479087)) ^ (463610052U)))))));
    }
}
