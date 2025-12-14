/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241131
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
    var_11 = ((/* implicit */_Bool) var_5);
    var_12 += ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (_Bool)1))))))), ((_Bool)1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_10))) <= (((/* implicit */long long int) ((unsigned int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_2 [i_0]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))) + (arr_2 [(short)5])));
    }
    var_16 = ((/* implicit */unsigned int) (!(((var_7) >= (((/* implicit */unsigned long long int) ((int) var_10)))))));
}
