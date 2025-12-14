/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43570
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0 + 1];
        var_20 = ((/* implicit */signed char) ((long long int) arr_0 [i_0 - 2] [i_0 + 2]));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4247305143U)) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) (short)15360))));
        arr_4 [8ULL] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2]);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned int) (short)15361))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)55)), ((unsigned char)31)))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) : (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (1677472107U) : (var_6))))))));
        arr_7 [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((int) (signed char)0)) : (((/* implicit */int) (signed char)(-127 - 1)))));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_18))));
}
