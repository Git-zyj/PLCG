/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29298
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
    var_20 |= ((/* implicit */unsigned short) max((var_14), (((/* implicit */signed char) ((((var_4) ^ (var_9))) > (((/* implicit */int) var_17)))))));
    var_21 = ((/* implicit */unsigned short) var_17);
    var_22 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_19))) && (((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1)))))))) : (arr_2 [i_0]))))));
        var_24 = ((/* implicit */short) var_3);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_6 [(short)1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_1 [i_1]), (arr_1 [i_1])))), ((-(arr_5 [i_1])))));
        arr_7 [i_1] = ((/* implicit */short) (~(arr_4 [(signed char)15])));
        arr_8 [(_Bool)1] &= ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (arr_3 [i_1]))), (arr_3 [i_1])));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
    }
}
