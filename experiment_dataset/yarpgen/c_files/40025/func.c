/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40025
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
    var_11 = ((/* implicit */long long int) min((var_11), (min((((((/* implicit */_Bool) (~(var_9)))) ? (var_8) : (((((/* implicit */_Bool) 9223372036854775792LL)) ? (6816806956173607406LL) : (6816806956173607385LL))))), ((+(((((/* implicit */_Bool) -9223372036854775796LL)) ? (var_7) : (var_8)))))))));
    var_12 = ((long long int) (-(var_9)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_13 = (~(arr_1 [i_0]));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2433284389525386269LL)) ? (4072017297849772749LL) : (1783039474185504719LL))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((long long int) -7390160177952226421LL))));
        var_16 = ((/* implicit */long long int) min((var_16), ((((~((~(-5783368073627631181LL))))) / ((~(-4411665661148214552LL)))))));
        arr_5 [i_1] [i_1] |= (~(-8835353692419096623LL));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] [i_1] &= ((arr_3 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [0LL] [i_2] [19LL])))))));
            arr_10 [i_1] [i_2] [17LL] = ((long long int) arr_4 [i_1] [i_2]);
        }
        /* vectorizable */
        for (long long int i_3 = 3; i_3 < 21; i_3 += 2) /* same iter space */
        {
            var_17 = ((((/* implicit */_Bool) arr_6 [i_3 - 3] [i_3 - 1] [i_3])) ? (arr_14 [i_3 - 3] [i_3 - 1] [i_3]) : (arr_14 [i_3 - 3] [i_3 - 1] [i_3]));
            var_18 = 6761007790207569471LL;
        }
        for (long long int i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_19 = arr_13 [i_1] [8LL];
            var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_4] [i_4 - 2])) && (((/* implicit */_Bool) 9223372019674906624LL)))) || (((/* implicit */_Bool) -5783368073627631186LL))));
        }
        var_21 = ((/* implicit */long long int) ((2779840887715681117LL) != (arr_17 [i_1] [i_1])));
    }
}
