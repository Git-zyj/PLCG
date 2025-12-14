/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196117
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
    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) != (((((/* implicit */long long int) var_2)) + (6584057504353806118LL))))), (((min((var_6), (var_6))) > (((/* implicit */long long int) var_2))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_15 = max((((((/* implicit */int) arr_0 [2ULL] [i_0])) ^ (((/* implicit */int) ((unsigned char) 2147483647))))), ((-(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-3916)))))));
        arr_3 [(short)20] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (arr_0 [i_0 - 1] [i_0 - 1])));
        arr_4 [12ULL] [i_0] = ((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (short)3916))), ((unsigned char)242))))));
        var_16 = ((/* implicit */int) var_2);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [3U] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (short)-3917))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-4927))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (181590725U))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_5))));
        var_20 += ((/* implicit */short) var_3);
    }
    var_21 = ((/* implicit */unsigned int) min(((~(((((/* implicit */_Bool) 7624797136446370958LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32271))) : (-1842830159583021958LL))))), (((/* implicit */long long int) var_8))));
}
