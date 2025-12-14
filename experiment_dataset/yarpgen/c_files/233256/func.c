/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233256
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_17)) | (((/* implicit */int) (signed char)-30)))));
        var_20 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (short)-31910))))) != (((/* implicit */int) max(((unsigned short)16027), (((/* implicit */unsigned short) (short)-31918))))))))) > (var_0));
        arr_4 [i_0 - 1] [i_0] |= ((/* implicit */signed char) ((short) min((arr_1 [i_0 + 1]), (((/* implicit */unsigned long long int) var_15)))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0 + 2])))) ? (3104686468U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))))));
    }
    for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        arr_9 [(short)12] = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) var_2)), (4194303U))))) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))));
        var_21 += ((/* implicit */unsigned short) ((((arr_1 [i_1]) >> (((((/* implicit */int) (short)31909)) - (31847))))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_1]))), ((~(((/* implicit */int) (short)25085)))))))));
        var_22 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1])))), (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)28451)) <= (((/* implicit */int) (short)-31890))))) : (((/* implicit */int) var_8))))));
    }
    var_23 = ((/* implicit */signed char) var_6);
}
