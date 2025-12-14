/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215697
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
    var_16 = ((/* implicit */int) var_5);
    var_17 = ((/* implicit */short) (((((-(((/* implicit */int) (unsigned short)7318)))) * (((/* implicit */int) ((short) var_0))))) | (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = min((((((/* implicit */_Bool) arr_0 [(short)0])) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) (short)31285)))) : (((/* implicit */int) max((arr_1 [i_0]), (var_4)))))), (max((((/* implicit */int) max((arr_3 [(short)19] [i_0 - 1]), (arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7319)) ? (((/* implicit */int) (short)21367)) : (((/* implicit */int) (short)-22622)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (arr_0 [i_0 - 1])))) ? (max((1048575), (((/* implicit */int) (short)32760)))) : ((-(((/* implicit */int) var_3))))));
    }
}
