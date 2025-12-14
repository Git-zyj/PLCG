/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210208
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
    var_12 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(260096LL)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) >= (((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)23665)))))))));
                var_14 = ((/* implicit */signed char) arr_0 [i_0]);
                var_15 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((min((((/* implicit */int) var_4)), (arr_1 [i_0]))) == (((/* implicit */int) arr_4 [6U]))))) : (((/* implicit */int) arr_2 [i_1]))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (((2412313727514986755ULL) - (((/* implicit */unsigned long long int) var_11)))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((short) (-(((/* implicit */int) (short)-11711)))))))))));
}
