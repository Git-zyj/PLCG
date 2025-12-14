/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190565
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / ((-(((((/* implicit */int) (unsigned short)35813)) * (((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29731)) + (((/* implicit */int) (unsigned short)29697))))) ? (-1118963189) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_1)))));
        var_13 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_6 [i_1] [i_1])))))));
    }
    var_14 = ((/* implicit */_Bool) var_4);
}
