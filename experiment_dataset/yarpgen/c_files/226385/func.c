/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226385
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
    var_16 = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) <= (max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) 511U)) ? (509U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) max(((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (4294966776U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))))))), (((/* implicit */unsigned int) (unsigned char)98))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned char)97))))));
        var_17 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), ((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (!(arr_0 [i_1])));
        arr_8 [i_1] = ((/* implicit */int) (-(4294966779U)));
    }
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_2)))))))));
}
