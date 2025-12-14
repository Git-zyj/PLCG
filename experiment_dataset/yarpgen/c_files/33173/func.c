/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33173
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_12 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-54)), (((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)43)), ((unsigned char)237)))) >> (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = var_8;
        arr_6 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_3 [i_1])))));
    }
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)9913)) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) min((((/* implicit */short) var_5)), (var_1))))))));
}
