/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205648
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((unsigned short) 4294967295U)))));
        var_17 = ((/* implicit */signed char) (+(max((max((((/* implicit */unsigned long long int) 590180151U)), (16111576451610084267ULL))), (((/* implicit */unsigned long long int) var_3))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7642)) + (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)59))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        var_18 = max((min((((/* implicit */long long int) arr_2 [i_0])), (1152921504606846975LL))), (((/* implicit */long long int) arr_1 [i_0])));
        var_19 = (+((-(((/* implicit */int) arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_8 [(signed char)10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_1]))))))) + ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1469197674470004466ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))))))));
        var_20 = ((/* implicit */unsigned char) var_14);
        var_21 = ((/* implicit */long long int) (unsigned short)15360);
    }
    var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) + (18446744073709551600ULL))))) << (((var_3) - (2333911096U)))));
    var_23 &= ((/* implicit */short) var_11);
}
