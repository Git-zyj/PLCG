/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226168
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)24826))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 2743377242U)), (8725174504345462322ULL))), (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_1] [i_0])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)40710))))) : (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (unsigned short)24822))))) ? ((~(246033518U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24813)) >> (((arr_3 [i_0] [i_1]) - (1692374281486965694LL))))))))));
            arr_5 [i_1] = ((/* implicit */unsigned short) 523413577);
            var_19 *= ((/* implicit */unsigned long long int) max((max((min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_0]))), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)24813)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        var_20 += ((/* implicit */unsigned int) 1966080ULL);
    }
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_8))));
}
