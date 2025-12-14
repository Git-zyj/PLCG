/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231599
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 917926739726409691ULL))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-31)), (201595407)))) : (((arr_0 [i_0] [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)30067))) != (arr_0 [i_0] [1])))))))));
        var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1899956408U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))));
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) && (((((/* implicit */long long int) 354760013U)) != (var_3)))))));
    var_22 = ((/* implicit */int) var_5);
}
