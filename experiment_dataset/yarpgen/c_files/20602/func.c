/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20602
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) < (var_16)))), (-5667230177110065617LL)))));
                    var_19 -= ((/* implicit */short) ((arr_7 [i_0]) ? (max((((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (9153773789490220518ULL) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    arr_9 [i_2] = ((/* implicit */unsigned char) (unsigned short)5724);
                }
            } 
        } 
    } 
    var_20 = var_12;
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_22 = var_11;
}
