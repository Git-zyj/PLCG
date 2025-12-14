/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235432
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (+(var_5)))))) : (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((547385046) > (((/* implicit */int) var_4)))))) > ((~(-4326574981679048243LL))))))));
        var_15 = ((/* implicit */int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 4326574981679048243LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [9U]))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) - (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */int) arr_3 [i_1])) << (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) var_3))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-25987)) > (((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
}
