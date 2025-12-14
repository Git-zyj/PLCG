/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26190
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
    var_13 = ((/* implicit */_Bool) ((8652872770318797086ULL) >> (((var_10) - (1879831558U)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 += min((min((274877906943LL), (-274877906944LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) 8652872770318797063ULL)))), ((!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483647)) == (18446744073709551615ULL)))) ^ (((/* implicit */int) arr_4 [i_1]))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((((arr_6 [i_1] [i_1]) == (((/* implicit */unsigned long long int) arr_5 [(short)8] [(short)14])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_4 [i_1])))))))) | (max((((/* implicit */int) ((((/* implicit */unsigned int) -1290115699)) <= (2000030920U)))), (arr_5 [i_1] [i_1])))));
        var_17 = ((/* implicit */int) 9223372036854775790LL);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_5 [i_2] [i_2]))));
        var_19 = arr_6 [17U] [i_2];
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_20 *= ((((/* implicit */int) arr_11 [i_3] [i_3])) == (((/* implicit */int) arr_11 [i_3] [i_3])));
        arr_14 [i_3] = ((/* implicit */unsigned int) ((18446744073709551609ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3])))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) arr_10 [i_3] [i_3]);
    }
    var_21 = (+((+(((/* implicit */int) var_0)))));
}
