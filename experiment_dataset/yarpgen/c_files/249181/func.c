/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249181
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0]))) ? (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_2)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)10])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (min((arr_0 [i_0]), (((/* implicit */unsigned int) (unsigned short)65535)))))));
        var_13 = ((/* implicit */unsigned char) var_3);
    }
    var_14 = ((/* implicit */signed char) var_1);
    var_15 = ((/* implicit */unsigned short) var_6);
}
