/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243163
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((11305437000835903280ULL), (((/* implicit */unsigned long long int) (unsigned char)62)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_12)))))) ? (((((/* implicit */_Bool) (unsigned char)195)) ? (((unsigned long long int) (unsigned char)62)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)199))))))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))))) : ((~(arr_4 [i_1 + 1] [10] [24ULL])))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((int) var_11)), (((/* implicit */int) (short)15))));
                arr_7 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_15 &= ((/* implicit */short) var_9);
    var_16 -= ((/* implicit */int) ((((/* implicit */_Bool) 13976221827584766741ULL)) || (((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >= ((+(((/* implicit */int) var_5))))))));
}
