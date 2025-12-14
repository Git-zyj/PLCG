/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24558
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_9))))))))));
    var_12 = ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */short) (-((((~(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_10))))));
    var_14 += var_0;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((((/* implicit */int) arr_2 [i_0])) % (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [9U])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
}
