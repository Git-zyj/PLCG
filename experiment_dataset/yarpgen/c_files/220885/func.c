/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220885
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
    var_14 = ((/* implicit */long long int) var_5);
    var_15 = ((((/* implicit */unsigned long long int) var_0)) | (((unsigned long long int) var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) max((var_16), ((((!(((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [15LL])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [10ULL]))))) >> (((var_10) - (2050990979)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [24ULL]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) | (11239734670696224191ULL)))))))));
                var_17 -= ((/* implicit */short) 3331885471676980856LL);
                arr_5 [i_0] = ((/* implicit */short) ((var_4) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_4);
}
