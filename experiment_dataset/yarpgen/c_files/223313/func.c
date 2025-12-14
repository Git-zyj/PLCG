/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223313
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (short)1984)) ? (((((/* implicit */_Bool) ((-1454346683) - (var_5)))) ? (((4146378808U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11485))))))));
    var_12 = ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_8))));
        var_14 = ((/* implicit */short) arr_1 [i_0]);
        var_15 = ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_1]) : (-7188175832261360953LL)))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25622))) | (arr_3 [i_1])))));
        arr_5 [i_1] = ((/* implicit */unsigned int) (unsigned short)480);
        arr_6 [i_1] [i_1] = ((/* implicit */short) arr_2 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11485))) : (-604305193268399060LL)));
    }
}
