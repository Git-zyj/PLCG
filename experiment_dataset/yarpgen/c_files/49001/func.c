/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49001
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_1 [i_0 + 2]))), (min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_4))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) (unsigned short)298)), (arr_1 [i_0 + 1]))))), (min((min((arr_1 [i_0]), (var_2))), (((/* implicit */unsigned long long int) 3005534285U))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((var_2), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])))))));
    }
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((int) (unsigned short)36742))));
    var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)4)) << (((14224272994676324307ULL) - (14224272994676324305ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_8)))))))));
    var_20 = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_6)), (min((2147483647), (((/* implicit */int) (_Bool)0))))))));
}
