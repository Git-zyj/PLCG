/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210822
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(signed char)1] [i_0] = ((min((((((/* implicit */_Bool) (signed char)55)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_1 [i_0])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((455448362) < (((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-1889622768) : ((~(((/* implicit */int) (signed char)-96))))))) ? (max((var_3), (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_3) / (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) (short)-32751)) - (((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_16 = ((/* implicit */short) min((((var_3) & (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-55))) == (var_10))))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
    var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_5)) == (var_6))));
    var_19 = ((/* implicit */int) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (529483547U)))) ? (max((var_3), (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (var_2))))))));
}
