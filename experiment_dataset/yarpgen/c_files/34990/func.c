/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34990
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
    var_18 = ((/* implicit */short) var_5);
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (max((588668892316607857ULL), (((/* implicit */unsigned long long int) (short)32767)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (16134824192366702650ULL) : (((/* implicit */unsigned long long int) 3214406540U))))) ? (0LL) : (((/* implicit */long long int) var_0)))))));
        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))) : (11849054407373975192ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17443248723779592606ULL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_0 [i_0] [(short)2])) : (arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_21 = ((((/* implicit */unsigned long long int) var_3)) ^ (arr_6 [i_1]));
        var_22 = ((/* implicit */short) arr_5 [i_1]);
        var_23 *= ((/* implicit */signed char) ((arr_6 [i_1]) / (arr_6 [i_1])));
    }
}
