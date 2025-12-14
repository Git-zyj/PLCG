/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218438
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_7), (max(((short)17210), ((short)-17218))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)22526)) ? (((/* implicit */int) ((short) (short)(-32767 - 1)))) : (((/* implicit */int) (short)-29040))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-16022)) : (((/* implicit */int) (short)17306))))))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)17229)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_10)))))));
        arr_8 [i_1] [i_1] = min(((short)-17208), ((short)17226));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32762)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (short)-9195)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (short)17207)) : (((/* implicit */int) ((short) (short)(-32767 - 1)))))) : ((-(((/* implicit */int) (short)20872))))));
        arr_9 [(short)5] [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)14137)) ? (((/* implicit */int) (short)669)) : (((/* implicit */int) (short)-23470))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) (short)17199)) / ((+(((((/* implicit */int) (short)17207)) * (((/* implicit */int) (short)24698))))))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_12 [(short)12] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((short) (short)-17229)))) ? (((((/* implicit */int) (short)-8)) - (((/* implicit */int) (short)-32764)))) : (min((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (short)14152)) : (((/* implicit */int) arr_10 [(short)12])))), (((/* implicit */int) max(((short)4596), ((short)32759))))))));
        arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */int) (short)14889)) >= (((/* implicit */int) (short)10742))));
    }
    var_18 -= ((/* implicit */short) max(((-(((((/* implicit */int) var_6)) / (((/* implicit */int) (short)-17200)))))), (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-17930)) : (((/* implicit */int) (short)17226)))), (((/* implicit */int) ((short) (short)5612)))))));
    var_19 = ((short) ((((/* implicit */_Bool) max((var_0), (var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)21598)))) : (((/* implicit */int) max((var_3), ((short)16911))))));
}
