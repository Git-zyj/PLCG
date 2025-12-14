/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223668
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
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) var_10)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24891)) ? (((/* implicit */unsigned int) 0)) : (1541144137U)))) ? (((((/* implicit */int) arr_1 [i_1 + 1])) & (arr_0 [2]))) : ((+(max((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0] [(_Bool)1]))))))));
                var_21 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [17U] [i_1])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [16]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [18ULL]))) : (var_5))))) & (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))))));
            }
        } 
    } 
}
