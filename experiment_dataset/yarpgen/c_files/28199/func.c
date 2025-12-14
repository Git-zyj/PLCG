/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28199
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
    var_17 = ((/* implicit */short) ((((var_4) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))) & ((+(var_4)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_0])))) : (var_4)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (11685207594046851494ULL))) : (((/* implicit */unsigned long long int) ((9223372036854775786LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11)))))))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) -2030635938))) && (((/* implicit */_Bool) (~(((8066013784126495353ULL) << (((((/* implicit */int) (unsigned char)199)) - (178)))))))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-32257)) == (((/* implicit */int) (short)-1))))) < (((/* implicit */int) arr_3 [8U]))));
            }
        } 
    } 
}
