/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50432
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
    var_15 *= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) (short)32767)))))));
    var_16 = min((((/* implicit */long long int) (+(((/* implicit */int) var_6))))), (max((((/* implicit */long long int) var_10)), (max((3618940113662665325LL), (var_3))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (arr_0 [i_0]))))));
        var_17 = ((/* implicit */short) (~((-(((/* implicit */int) (signed char)-94))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) < ((((-(var_5))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) -5806600223030448307LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_12)))))));
    }
    var_19 = ((/* implicit */unsigned short) var_5);
}
