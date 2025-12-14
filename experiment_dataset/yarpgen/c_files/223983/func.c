/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223983
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
    var_11 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned char)14] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) min(((-(arr_0 [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (((-(((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) / (arr_0 [i_0]))))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(var_8)))), (var_4))))));
        arr_5 [i_0] = min((arr_0 [i_0]), (18081543077337737918ULL));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_12 += ((/* implicit */unsigned char) min(((+(var_1))), (((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_1] [i_1])))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((arr_6 [i_1] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [1ULL]))))))), (((int) (!(((/* implicit */_Bool) var_9))))))))));
        arr_10 [(unsigned short)2] = ((/* implicit */int) ((((/* implicit */_Bool) min(((-(arr_6 [i_1] [i_1]))), (((((/* implicit */_Bool) var_7)) ? (-8101839854359733020LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))))))) ? ((+(min((var_1), (((/* implicit */unsigned long long int) (short)-29442)))))) : ((+(max((((/* implicit */unsigned long long int) arr_8 [i_1])), (18446744073709551603ULL)))))));
        arr_11 [9U] [i_1] = ((/* implicit */int) ((unsigned int) 18081543077337737921ULL));
        var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) 2147483646)) ? ((+(-6270030286328056759LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))))));
    }
    var_15 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)));
}
