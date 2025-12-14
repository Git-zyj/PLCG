/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51053
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_12)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((9485108224281295666ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [9ULL] [i_0 + 2]))) < (var_10)))), (var_5)))))));
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (8961635849428255943ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) % ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_19 = ((/* implicit */unsigned int) var_5);
}
