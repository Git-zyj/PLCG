/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201476
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
    var_20 = ((/* implicit */short) max((var_2), (((min((var_10), (var_4))) + (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) | (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))) || (max((((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)0)))), (arr_3 [i_0 - 1] [i_0 - 1])))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(var_19)))) / (((unsigned long long int) min((var_12), (((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_0 - 2])))))));
        var_23 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_0])), (var_14))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_17))))), (max(((unsigned char)188), (((/* implicit */unsigned char) (_Bool)0)))))))));
    }
    var_24 = ((/* implicit */_Bool) var_4);
}
