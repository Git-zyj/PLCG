/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48629
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) var_15)) && ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)(-32767 - 1)))))) / (var_14))) < (((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)44580), (((/* implicit */unsigned short) (short)-4096))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) (_Bool)0);
        var_21 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)57313)) && (((/* implicit */_Bool) (unsigned short)34910)))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)-14447))))), (arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */int) var_9);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (-((-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_1)))))));
        var_23 = ((/* implicit */signed char) arr_4 [(short)8]);
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-32759))))))), (((((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) + (((((/* implicit */_Bool) var_13)) ? (arr_3 [i_1]) : (arr_4 [i_1]))))))))));
    }
}
