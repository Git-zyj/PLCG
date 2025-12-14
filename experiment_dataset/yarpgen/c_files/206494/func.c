/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206494
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
    var_13 = ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-6568)) + (((/* implicit */int) (short)6563))))) : (var_0)))) >= (((((var_2) < (((/* implicit */long long int) ((/* implicit */int) (short)6561))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-6557), ((short)-6582))))) : (var_12))))))));
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_0) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6577))) : (var_0))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((arr_2 [i_0]) + (2147483647))) >> (((arr_2 [i_0]) + (1706343372))))) % (((/* implicit */int) ((short) (short)-6563))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) <= (arr_1 [i_0]))))) : (((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned char) (short)-6577));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (short)6567))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1])))))));
    }
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6558)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-6557))))), (max((var_4), (((/* implicit */unsigned int) (short)6533)))))))));
}
