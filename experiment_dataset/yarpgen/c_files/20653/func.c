/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20653
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
    var_19 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-51))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((arr_2 [i_0]), (17311591299994166149ULL))));
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((var_0) / (((/* implicit */unsigned long long int) arr_0 [(signed char)0])))) < (arr_2 [i_0])))), (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (short)(-32767 - 1))))))) : (((((/* implicit */_Bool) 2927675747246241670LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
    }
    var_22 = ((/* implicit */unsigned int) var_14);
}
