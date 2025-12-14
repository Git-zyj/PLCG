/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24867
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
    var_20 = max((((/* implicit */unsigned short) var_13)), (max((var_6), (((/* implicit */unsigned short) var_16)))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_2))))));
    var_22 = var_17;
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((var_12) / (var_9)))))) && (((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [(signed char)10] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_24 = ((/* implicit */int) arr_0 [(unsigned short)3] [i_0]);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) 394676891)) : (arr_0 [(short)2] [i_0 - 2])));
        var_26 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned char)203)) | (((/* implicit */int) arr_1 [(unsigned short)9])))));
    }
}
