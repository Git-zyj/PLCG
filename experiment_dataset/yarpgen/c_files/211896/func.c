/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211896
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned char) (+((+(((/* implicit */int) (_Bool)1))))))))));
    var_19 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0] [i_0]));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_4 [(_Bool)1] [i_1] = ((/* implicit */_Bool) 1U);
        var_22 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_2 [i_1]))))));
    }
    for (short i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        var_23 = ((unsigned short) (-(((/* implicit */int) arr_1 [i_2]))));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_2 + 1]))) ? (((/* implicit */int) ((_Bool) arr_3 [i_2 - 1]))) : (((((/* implicit */int) arr_3 [i_2 - 2])) | (((/* implicit */int) arr_3 [i_2 - 2]))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((arr_3 [i_2]) ? (((/* implicit */unsigned long long int) min((((unsigned int) var_10)), (((/* implicit */unsigned int) (_Bool)1))))) : (((max((((/* implicit */unsigned long long int) arr_5 [i_2])), (0ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1]))))))))));
        var_26 = ((/* implicit */_Bool) ((int) arr_7 [i_2]));
        var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_2 [(unsigned char)10])), (max((var_13), (((/* implicit */unsigned char) ((arr_7 [7U]) && (((/* implicit */_Bool) arr_0 [i_2] [4U])))))))));
    }
    var_28 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))));
    var_29 &= var_8;
}
