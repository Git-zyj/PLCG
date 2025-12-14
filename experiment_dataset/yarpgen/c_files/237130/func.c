/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237130
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
    var_19 = var_17;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_20 = var_4;
        arr_3 [i_0] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned char)199)) && (((/* implicit */_Bool) ((short) var_13)))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) arr_4 [i_1]))))));
        arr_7 [i_1] [i_1] = ((unsigned char) min((((/* implicit */long long int) (short)32767)), (17179867136LL)));
        var_21 = ((/* implicit */unsigned char) ((short) (!((!(((/* implicit */_Bool) arr_5 [i_1])))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2097635811U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_11 [i_2] [i_2])))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_9))));
        var_22 = ((/* implicit */short) ((unsigned char) 3408153804677836349LL));
        arr_13 [i_2] = ((((/* implicit */_Bool) arr_8 [i_2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))));
    }
}
