/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54345
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0])))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_14 -= ((/* implicit */unsigned int) (signed char)-127);
        var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)2]))) | (var_9)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))));
        arr_6 [i_1] = arr_4 [i_1];
        arr_7 [i_1] [i_1] = ((_Bool) ((((/* implicit */int) max((((/* implicit */short) (signed char)-18)), ((short)(-32767 - 1))))) > (((((/* implicit */int) arr_4 [i_1 - 1])) | (((/* implicit */int) (signed char)-2))))));
    }
    var_17 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    var_19 = var_10;
}
