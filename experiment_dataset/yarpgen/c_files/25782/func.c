/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25782
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
    var_16 -= ((/* implicit */unsigned long long int) max((3489285020U), (((/* implicit */unsigned int) (unsigned short)1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10285))))) : (((/* implicit */int) max((arr_1 [i_0]), ((unsigned short)55250))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) (unsigned short)55250);
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60999))) : (((((/* implicit */_Bool) (unsigned short)55250)) ? (18446744073709551615ULL) : (11307271210925525288ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : ((~(var_9)))));
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55251)))))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)13])))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-15)), (var_2)))) ? (((((/* implicit */_Bool) 14939494914622868135ULL)) ? (((/* implicit */int) (unsigned short)50976)) : (((/* implicit */int) (signed char)-16)))) : (((/* implicit */int) (unsigned short)28433))))) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7396)))))));
}
