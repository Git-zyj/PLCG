/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2119
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
    var_15 = ((/* implicit */signed char) min((((var_12) | (((/* implicit */long long int) min((((/* implicit */int) var_11)), (var_5)))))), (((/* implicit */long long int) var_14))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (arr_0 [i_0])));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) arr_4 [i_1]);
        var_18 -= (+(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)255)))))));
        arr_6 [i_1] = ((/* implicit */short) arr_5 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_3 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (+((+(((arr_5 [i_1]) - (((/* implicit */int) var_4))))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((-3765222129568715655LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)21)))));
        var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)65522)))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)28856);
        arr_13 [(_Bool)1] = ((/* implicit */signed char) max((((max((var_8), (((/* implicit */unsigned long long int) arr_9 [i_2])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))))), (((arr_1 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_2]))))))));
        arr_14 [i_2] = ((/* implicit */_Bool) arr_4 [i_2]);
    }
}
