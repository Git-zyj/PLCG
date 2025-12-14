/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229189
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25167)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))));
    var_20 = ((845508270412230904ULL) == (((/* implicit */unsigned long long int) (-(((var_18) | (var_8)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] &= ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_0 [i_1] [i_0]))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))) == (((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)9338)) - (9311)))))) ? (((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (unsigned char)121);
    var_22 = ((/* implicit */signed char) (!(((min((((/* implicit */int) (_Bool)1)), (-1623697252))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (var_14))))))));
}
