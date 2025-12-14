/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2149
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_3 [(signed char)20] = ((/* implicit */short) max((min((((((/* implicit */int) var_0)) / (((/* implicit */int) var_7)))), (((16777212) * (((/* implicit */int) var_8)))))), (((/* implicit */int) (unsigned char)59))));
        var_12 = ((/* implicit */signed char) (unsigned char)171);
        var_13 = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64751))))) >> (((((/* implicit */int) var_9)) - (25808))))))))));
        arr_6 [(signed char)19] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [(short)2]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) * (1535318633U))))), (((/* implicit */unsigned int) arr_2 [(short)0]))));
        arr_7 [14] = ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_1] [(unsigned short)16]));
        var_15 = ((/* implicit */int) min((var_15), (min(((-((+(((/* implicit */int) var_10)))))), ((+((-(((/* implicit */int) var_6))))))))));
    }
    var_16 = ((/* implicit */signed char) var_9);
    var_17 = ((/* implicit */signed char) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18037))) + (2759648663U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1990381421U))))) & (((/* implicit */int) ((signed char) var_7))))))));
}
