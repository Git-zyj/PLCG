/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26195
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
    var_17 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) min((1502703613U), (3639173910U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6907719091801520092LL)) ? (((/* implicit */unsigned long long int) 6907719091801520092LL)) : (var_11))))))));
                    arr_7 [i_2] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) 3639173930U)) ? (min((((/* implicit */unsigned long long int) 655793386U)), (18017790766218969207ULL))) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((+(arr_2 [i_2]))) : (((/* implicit */long long int) arr_6 [i_0] [i_2])))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)1] [i_1] [i_0 - 3]))))) - (((((((/* implicit */int) arr_5 [(short)9] [(short)9] [i_0 - 3])) + (2147483647))) >> (((((/* implicit */int) (signed char)107)) - (78)))))));
                }
            } 
        } 
    } 
}
