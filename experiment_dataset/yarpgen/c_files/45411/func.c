/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45411
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
    var_12 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_10)));
    var_13 = ((/* implicit */unsigned short) min((var_13), (var_0)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((arr_0 [i_0]) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_0 [i_0]))) - (17268503124835629025ULL))))) : (((arr_0 [i_0]) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_0 [i_0]))) - (17268503124835629025ULL))) - (18446744073709543408ULL)))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((arr_1 [4]), (arr_1 [(signed char)2])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [0ULL]) : (arr_0 [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)10]))) & (min((arr_0 [5]), (arr_0 [i_0]))))))))));
    }
}
