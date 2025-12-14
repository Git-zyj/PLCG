/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196684
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
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) var_4);
                var_15 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [8ULL]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) var_6))));
                var_16 = arr_2 [i_1];
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8322485449805364698ULL), (((/* implicit */unsigned long long int) 4294967286U))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_3)) ? (((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_1))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251))));
    var_19 = var_2;
}
