/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242908
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((max((((/* implicit */unsigned short) var_3)), (var_13))), (((/* implicit */unsigned short) max((var_12), (var_10))))))), (min(((~(var_2))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_15 = (~(((unsigned long long int) var_6)));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_10)))));
    }
    var_17 = ((/* implicit */short) (~(((/* implicit */int) max((max((var_5), (((/* implicit */unsigned short) var_9)))), (max((((/* implicit */unsigned short) var_3)), (var_13))))))));
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((signed char) ((short) var_12))));
        arr_6 [i_1] = ((/* implicit */long long int) (!(((_Bool) max((var_10), (var_11))))));
        var_18 = ((/* implicit */signed char) max(((~(((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_10))))))), (((/* implicit */int) ((short) max((var_11), (var_11)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((var_4), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_13)))))))) ? (max((((/* implicit */unsigned int) ((int) var_0))), (((unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_1)))))))));
    }
}
