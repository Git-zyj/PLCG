/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191850
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
    var_11 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (max((11373564582204408483ULL), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -7593571359451008034LL)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7951708169618932089LL), (var_8)))) ? (max((((/* implicit */unsigned int) var_0)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), ((unsigned char)140))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) var_9);
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned char) var_5))))) ^ (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((short) max((var_6), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)255)))))))))));
    var_14 = ((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */unsigned long long int) 7593571359451008033LL)) : (18446744073709551615ULL));
}
