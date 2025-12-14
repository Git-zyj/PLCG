/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236291
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 ^= var_3;
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 1922475249144817212ULL))));
        var_20 |= ((/* implicit */short) ((unsigned int) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((arr_1 [(short)5]) < (16524268824564734403ULL)))))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) var_10);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max(((+(arr_1 [(signed char)11]))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) arr_4 [i_1])))))))) || (((/* implicit */_Bool) 16524268824564734403ULL)))))));
        var_22 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) 1922475249144817185ULL)))));
        var_23 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))))) + (max((min((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) - (var_6)))))));
    }
    var_24 = ((/* implicit */signed char) var_6);
    var_25 &= ((unsigned long long int) ((((16524268824564734372ULL) + (16524268824564734391ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_17))))))));
    var_26 = ((short) 16524268824564734403ULL);
}
