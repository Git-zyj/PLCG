/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34326
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((9223301668110598144ULL), (9223301668110598148ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9223442405598953462ULL) < (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))))))) : (min((((((/* implicit */_Bool) 17299232399131555412ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9))), (max((((/* implicit */unsigned int) 524288)), (arr_1 [i_0])))))));
    }
    var_11 += ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (13287628389926874392ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
