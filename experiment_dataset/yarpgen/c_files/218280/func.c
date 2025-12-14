/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218280
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
    var_12 = ((/* implicit */unsigned short) (unsigned char)0);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_14 *= ((/* implicit */short) (unsigned char)0);
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) (unsigned char)0))));
            var_16 = ((/* implicit */unsigned long long int) (unsigned char)14);
            var_17 *= ((/* implicit */unsigned int) 288230376084602880ULL);
        }
        for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_18 = 274877906943ULL;
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)233)) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)255)))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_5 [i_0] [i_3] [i_3]))));
            var_21 |= ((/* implicit */int) 274877906967ULL);
            var_22 = ((/* implicit */short) 4294967295U);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_23 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)235)) >> (((arr_9 [i_0] [i_4]) - (3767397635U)))));
            var_24 ^= ((/* implicit */unsigned char) 18446743798831644666ULL);
        }
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) != (arr_10 [i_0] [i_0])));
    }
    var_26 = ((/* implicit */unsigned char) (_Bool)1);
}
