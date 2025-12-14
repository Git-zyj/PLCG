/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22859
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
    var_20 *= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : (var_4))), (((/* implicit */unsigned long long int) var_10)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (arr_0 [8ULL] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_1 [i_0])))))) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */int) (unsigned char)186))))))))));
        arr_3 [8ULL] = ((/* implicit */unsigned char) var_14);
        var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_23 = ((/* implicit */_Bool) max((var_23), (((max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))), (min((((/* implicit */long long int) (unsigned char)255)), (-1LL))))) == (((/* implicit */long long int) var_8))))));
    }
    var_24 *= ((/* implicit */short) (+(var_6)));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned short)8192)))))));
    var_26 = ((/* implicit */unsigned long long int) var_12);
}
