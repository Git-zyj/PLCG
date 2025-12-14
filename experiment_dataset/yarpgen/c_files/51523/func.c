/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51523
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
    var_10 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) var_4))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))), (var_3)))) || ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))))));
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_2))));
    var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)65535))))) : (var_5)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 15640852046467008699ULL);
        var_14 = ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) (unsigned short)44003)))) : (((((/* implicit */_Bool) -1423393344)) ? (((/* implicit */int) (short)-13973)) : (arr_1 [i_0] [i_0])))));
    }
}
