/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51417
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((long long int) ((long long int) ((unsigned long long int) (unsigned char)7)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_17 = ((/* implicit */short) arr_5 [i_1]);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(var_14)));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0])), (arr_5 [i_1])))))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(5234612421326037437ULL)))) ? ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_1 [i_0]))))));
            var_19 ^= ((/* implicit */short) (+((~(5234612421326037455ULL)))));
        }
        var_20 ^= ((/* implicit */_Bool) (-(((long long int) var_3))));
    }
}
