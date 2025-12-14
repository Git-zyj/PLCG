/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49944
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
    var_17 |= ((/* implicit */long long int) min((((/* implicit */int) var_16)), (((((/* implicit */_Bool) 1579466260570598566ULL)) ? (0) : (1377351390)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((((((/* implicit */int) var_16)) - (((/* implicit */int) var_1)))) == (min((((/* implicit */int) var_4)), (var_8))))))))));
    var_19 = ((/* implicit */int) var_15);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((long long int) 14313294599790461108ULL))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (arr_3 [10ULL]))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)133)) - (((/* implicit */int) (short)(-32767 - 1))))))))) : (var_3)));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((((/* implicit */long long int) (-((-(((/* implicit */int) var_14))))))), (arr_1 [i_0] [i_0]))))));
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [9ULL]) >> (((max((arr_2 [i_0] [i_0]), (var_0))) - (13143155610430801917ULL)))))) ? ((~(max((var_0), (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_14)))))))));
    }
}
