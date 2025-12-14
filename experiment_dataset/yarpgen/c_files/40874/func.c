/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40874
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
    var_15 = ((((/* implicit */_Bool) 4054085285U)) ? (1999334707) : (((/* implicit */int) (unsigned short)51768)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19839)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13763))) : (8737244453207542603LL)));
        arr_5 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((short) (unsigned short)51772))), (max(((~(536870911LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) > (arr_0 [i_0]))))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) >> (((((/* implicit */int) arr_1 [i_0 - 1])) - (18785)))))) ? (max((((/* implicit */int) (unsigned short)13767)), (-181429613))) : ((~(arr_0 [i_0 + 2])))));
        var_16 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)51465))))));
    }
    var_17 = ((/* implicit */unsigned short) ((var_6) || (((/* implicit */_Bool) max((max(((unsigned short)51765), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) max((var_2), (var_2)))))))));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) (unsigned char)128)))))), (var_12)));
}
