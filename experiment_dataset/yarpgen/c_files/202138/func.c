/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202138
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) 3812862801219451173ULL))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4387481991969651365ULL)) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned char)8] [(unsigned char)8])) : (4387481991969651365ULL)))))) ? (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */int) (short)14014)), (var_9)))));
        var_17 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) 703509051)) ? (var_12) : (((/* implicit */unsigned long long int) var_11))))) > (min((((/* implicit */int) ((var_13) <= (var_1)))), (max((var_1), (((/* implicit */int) (short)-18669))))))));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((var_14) ? (max((((/* implicit */int) (unsigned char)44)), (var_6))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)18)) || (((/* implicit */_Bool) var_13))))))))));
}
