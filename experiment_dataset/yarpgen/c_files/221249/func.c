/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221249
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) arr_0 [8ULL] [i_0]);
        arr_3 [i_0] [i_0] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_6)))) ? (arr_0 [i_0] [i_0]) : (max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [(signed char)0] [i_0]))))))));
    }
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (signed char)-83))));
    var_14 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (650134039U)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_10), (((((/* implicit */_Bool) (signed char)-61)) || (((/* implicit */_Bool) var_0)))))))));
    var_15 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)));
    var_16 = ((signed char) (+(((/* implicit */int) var_8))));
}
