/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4170
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_11 |= arr_2 [i_0];
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (524287LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) || (((/* implicit */_Bool) 3201366310U)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 140600049401856ULL)) && (((/* implicit */_Bool) arr_2 [i_0]))))))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        var_13 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) (-(arr_6 [i_1 + 3] [i_1 - 1])));
        var_15 += ((/* implicit */unsigned long long int) ((arr_6 [i_1 - 2] [i_1 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_1] [i_1]) > (arr_6 [i_1] [i_1])))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (((+(((13843733542481697724ULL) ^ (15972848079028336641ULL))))) - (((((/* implicit */_Bool) ((4948672612033196773LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))) ? ((-(536862720ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 779910920U))))))))));
        var_17 += ((/* implicit */unsigned int) (((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 65535)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
    }
    var_18 = ((/* implicit */unsigned int) var_2);
}
