/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36417
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((_Bool) min((-1903314708), (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_2 [i_0] [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_12 = ((/* implicit */int) max((((/* implicit */long long int) 1903314725)), (min((((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))))), (((/* implicit */long long int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) 1903314694)) + (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (arr_1 [i_0] [i_0]))))));
            var_14 = ((/* implicit */long long int) (-((+(max((var_7), (((/* implicit */int) arr_0 [i_0]))))))));
        }
    }
    var_15 = min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_4)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1903314695)) ? (((/* implicit */unsigned int) -6)) : (4294967295U)))))), (((/* implicit */long long int) (-(((/* implicit */int) var_9))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) + (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) var_7)) : (var_5)));
}
