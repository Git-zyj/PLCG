/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51944
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */signed char) 7402939913941397718ULL);
        arr_2 [i_0 - 2] [4LL] = ((/* implicit */unsigned int) arr_1 [i_0 + 1]);
        var_19 += ((unsigned char) arr_0 [i_0 - 2]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))) ? (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_5 [i_1]))) : (((unsigned long long int) arr_5 [7LL])))));
        var_21 = ((/* implicit */unsigned char) (signed char)127);
        arr_6 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (((~(((/* implicit */int) arr_3 [i_1] [i_1])))) <= (((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned char) arr_1 [i_1]))))))))));
        var_22 = arr_1 [i_1];
    }
    var_23 += ((/* implicit */signed char) var_0);
}
