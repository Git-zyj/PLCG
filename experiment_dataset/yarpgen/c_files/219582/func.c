/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219582
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((int) (!(((/* implicit */_Bool) ((int) var_6)))));
                var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((arr_1 [i_1 + 2] [i_1 + 2]) ? (5473045284596350176LL) : (arr_0 [5LL] [9LL]))) : (((((/* implicit */_Bool) (signed char)-109)) ? (-7057627415785821110LL) : (((/* implicit */long long int) 733488061)))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_1])))));
            }
        } 
    } 
    var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_1), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) < (18LL))))) : ((+(((((/* implicit */_Bool) 405578889U)) ? (-7057627415785821110LL) : (9223372036854775807LL)))))));
}
