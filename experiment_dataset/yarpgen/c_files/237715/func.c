/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237715
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
    var_17 = max((var_1), (var_14));
    var_18 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_10)) ? (1383761169U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-21163)) : (((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) 1383761153U)) ? (2911206142U) : (2147046937U)))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned short) min((((/* implicit */short) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))), ((short)-11661)));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7)) && (((/* implicit */_Bool) (unsigned short)1498)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65528)), (1383761169U)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((+(((/* implicit */int) (short)-32753)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2])))))));
    }
    for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) (((((~(((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1]))))) + (2147483647))) << (((max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31410)) && (((/* implicit */_Bool) (unsigned short)12587))))), (((((/* implicit */int) var_14)) * (((/* implicit */int) arr_3 [i_1 + 2])))))) - (2109438240)))));
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57497)))))));
        arr_5 [i_1 + 1] = 2415727663U;
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 - 1]))))), ((~(2911206121U)))));
    }
}
