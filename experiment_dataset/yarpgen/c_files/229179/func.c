/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229179
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
    var_18 = ((/* implicit */short) min((var_18), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) (unsigned char)48);
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13879689093967793093ULL)) ? (8712510513027536144LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) ^ (arr_2 [18LL]))) : (arr_2 [i_1]))), (((unsigned long long int) arr_2 [i_0]))));
                var_20 -= ((/* implicit */int) ((signed char) (unsigned char)78));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (short)-32625);
    var_22 += ((/* implicit */unsigned char) min((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)187))))) / (var_10))), (((/* implicit */long long int) var_6))));
}
