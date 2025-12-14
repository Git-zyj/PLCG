/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19795
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
    var_14 = min((max((((/* implicit */unsigned long long int) ((signed char) var_13))), (((unsigned long long int) -2068213140)))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), ((unsigned short)55797)));
        arr_3 [(unsigned short)7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (min((((/* implicit */long long int) (unsigned short)55800)), (arr_2 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned char) max((max((((/* implicit */long long int) (unsigned char)79)), (arr_2 [i_0 - 1] [i_0]))), (max((arr_2 [17U] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (!(var_13))))) ? ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)51)))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-54)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
}
