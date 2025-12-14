/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211078
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
    var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (+(5133479041552022454ULL)))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_13))));
    var_16 -= var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_3 [i_0] [i_0] [i_1])))) > (-8194676285346709415LL)));
                var_18 = ((/* implicit */unsigned long long int) var_7);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_7)))) ? (((/* implicit */int) var_10)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((short) arr_4 [i_0] [i_0])))) : (((min((5133479041552022454ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (((((/* implicit */_Bool) 13313265032157529152ULL)) ? (1544710063985640073ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            }
        } 
    } 
}
