/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209256
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) var_15)))))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_2)), (1201681853U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 134215680LL)) ? (((((/* implicit */_Bool) max((-134215664LL), (var_11)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) (+(var_18)))) ? (3586384118U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        var_22 *= ((/* implicit */unsigned int) min(((_Bool)1), (arr_1 [(short)8])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)157)) ? (134215680LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95)))));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_17)) > (((/* implicit */int) var_15))))) != ((~(((/* implicit */int) (signed char)-24))))));
        var_24 = ((/* implicit */long long int) var_8);
    }
}
