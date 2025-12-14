/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5442
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((long long int) var_0))));
        arr_4 [i_1] = ((/* implicit */unsigned char) 2592578967779136359ULL);
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_1])), (((unsigned long long int) var_0))));
        arr_5 [(unsigned char)0] [i_1] = ((/* implicit */long long int) ((_Bool) max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned short) ((signed char) arr_2 [i_1] [i_1]))))));
    }
    var_24 += ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) : (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (unsigned char)97))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((unsigned long long int) (unsigned char)97))))));
}
