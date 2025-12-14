/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38209
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
    var_17 = ((/* implicit */unsigned char) ((var_13) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : ((-2147483647 - 1))))) ? (((/* implicit */int) max((var_6), (var_2)))) : ((~(((/* implicit */int) (unsigned short)37284)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (~(((arr_1 [(_Bool)1] [i_0]) + (((/* implicit */int) (unsigned char)62))))));
        var_18 = ((/* implicit */unsigned char) (+(arr_0 [i_0 + 1])));
        var_19 = ((/* implicit */short) ((arr_1 [i_0 + 1] [i_0 - 2]) % (((/* implicit */int) (unsigned short)28250))));
        var_20 = ((/* implicit */unsigned int) (+(arr_1 [i_0 + 3] [i_0 - 2])));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_4))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_4)) ? (6519485) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 337941423U))))))) : (((/* implicit */int) max((((/* implicit */short) var_5)), (var_1))))));
}
