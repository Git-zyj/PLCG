/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38223
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
    var_12 ^= ((/* implicit */int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_0]))))) : ((+(((unsigned int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_5 [8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_0 [18]) : (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0 + 1] [i_1])))));
            var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)59932))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) ((signed char) 693989415)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [8LL])) ? (var_5) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) != (((/* implicit */int) arr_8 [9LL] [i_2]))))))))));
            var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0] [(unsigned short)12])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((4157222158522003108LL), (((/* implicit */long long int) (signed char)0))))) || (((/* implicit */_Bool) (~(var_9))))))) : (((/* implicit */int) arr_8 [i_0 + 2] [(unsigned short)3]))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) -1927193331)) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_7))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_2])))))))) : ((+((+(var_8)))))));
        }
    }
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((int) var_3)), (var_2))))));
}
