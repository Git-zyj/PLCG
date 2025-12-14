/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199798
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_18 -= ((/* implicit */unsigned short) (((((-(((/* implicit */int) (short)30926)))) + (2147483647))) >> (((unsigned int) min((((/* implicit */unsigned char) arr_0 [i_0])), ((unsigned char)19))))));
        var_19 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30926))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? ((-(2147483636))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_2 [i_1]))))));
        var_21 = ((/* implicit */unsigned char) (-(2147483639)));
        var_22 = ((/* implicit */unsigned long long int) (unsigned char)19);
    }
    var_23 = ((/* implicit */unsigned char) (~(max((var_16), (((/* implicit */long long int) max(((short)-30944), (((/* implicit */short) var_12)))))))));
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_16)))), ((!(((/* implicit */_Bool) var_3)))))))));
}
