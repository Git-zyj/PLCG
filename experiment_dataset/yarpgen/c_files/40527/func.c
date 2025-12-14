/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40527
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_1 [i_0] [i_0])) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14514104348654384800ULL)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [22LL]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~((~(arr_1 [i_0] [i_0])))));
        var_15 += ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) != (((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (12355885187960578482ULL)))) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) 541165879296LL)), (arr_0 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_16 -= ((((/* implicit */_Bool) min(((+(arr_4 [6LL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -541165879276LL)) || (((/* implicit */_Bool) arr_5 [0LL])))))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_5 [4ULL]))) : (max((((unsigned long long int) 2305561534236983296ULL)), (((/* implicit */unsigned long long int) (~(arr_4 [14ULL])))))));
        var_17 = ((/* implicit */unsigned long long int) ((long long int) min((((arr_1 [i_1] [i_1]) ^ (arr_4 [i_1]))), (((((/* implicit */_Bool) -541165879278LL)) ? (-5797176909086762178LL) : (1LL))))));
    }
    for (long long int i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), ((+(((((/* implicit */_Bool) arr_8 [10ULL])) ? (((((/* implicit */unsigned long long int) 8375797030163440643LL)) % (arr_8 [4LL]))) : (max((arr_6 [i_2]), (arr_0 [i_2] [i_2])))))))));
        var_19 = ((/* implicit */long long int) (~((-(arr_6 [i_2 + 1])))));
    }
    var_20 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((9050628232784437086LL), (-541165879287LL))))))), (((long long int) min((((/* implicit */unsigned long long int) -5983755621921737818LL)), (var_2)))));
}
