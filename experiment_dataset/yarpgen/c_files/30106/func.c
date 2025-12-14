/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30106
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
    var_18 = ((/* implicit */signed char) ((int) var_7));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) -1))))) : (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) (((~(var_3))) + (((/* implicit */long long int) ((unsigned int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((long long int) arr_2 [(signed char)6])), (arr_2 [i_0])))), (((((/* implicit */_Bool) (signed char)-126)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))));
    }
}
