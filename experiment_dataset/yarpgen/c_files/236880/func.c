/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236880
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (short)63))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-18867)) >= (((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        arr_6 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))));
    }
    var_21 = ((/* implicit */unsigned int) (signed char)-118);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1984)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((~(var_12)))));
}
