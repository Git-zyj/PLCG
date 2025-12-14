/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241999
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (signed char)-109))))) > (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((var_2), (((/* implicit */unsigned int) var_8))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))) / (1882078995553656910LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2])))));
        var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) (signed char)14)) ? (((((/* implicit */_Bool) (unsigned short)48127)) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) var_0)))) : ((+((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [6ULL] [6ULL])) : (1807514033)))))) & (arr_1 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_13 = ((/* implicit */signed char) arr_5 [i_1] [i_1]);
        arr_6 [i_1] = (+(((((/* implicit */_Bool) ((1615608514) & (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)4139))))) : (((((/* implicit */_Bool) -1807514022)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2])) : ((+(((/* implicit */int) var_3))))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
    }
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 3337155929155251571ULL))));
    var_15 -= ((/* implicit */short) var_0);
}
