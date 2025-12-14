/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232719
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), ((short)24700)))));
        var_12 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((var_10) * (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26002))))))));
    }
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */short) ((signed char) var_0))), (var_2)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-26002))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (short)-26003))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))))) + (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) ^ (var_3))), ((+(var_3)))))));
    var_15 |= ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned char) ((signed char) min((max(((short)12060), (var_7))), ((short)-32326))));
}
