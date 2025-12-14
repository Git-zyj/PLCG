/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219848
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
    var_11 = ((/* implicit */short) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) == (var_2))) && (((/* implicit */_Bool) 3432554319511811473LL)))))));
    var_12 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (arr_1 [i_0]))))) : (0LL))), (((/* implicit */long long int) var_10))));
        var_13 = ((/* implicit */short) max((arr_1 [i_0]), (((long long int) arr_1 [i_0]))));
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_1 [i_0])))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_15 |= ((/* implicit */signed char) max((((((/* implicit */int) var_9)) * (((/* implicit */int) arr_0 [(signed char)0])))), ((+(((/* implicit */int) arr_0 [(short)8]))))));
    }
    for (int i_1 = 4; i_1 < 13; i_1 += 4) 
    {
        arr_5 [(unsigned char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */long long int) arr_4 [i_1 + 1]))))) ? (var_2) : (((/* implicit */unsigned long long int) var_1))));
        var_16 -= ((/* implicit */_Bool) ((long long int) min((max((var_8), (((/* implicit */short) var_5)))), (((/* implicit */short) (unsigned char)7)))));
        arr_6 [11LL] = ((/* implicit */int) (-((+(max((((/* implicit */long long int) arr_4 [i_1])), (5883486275034060489LL)))))));
    }
    var_17 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) var_9)))));
}
