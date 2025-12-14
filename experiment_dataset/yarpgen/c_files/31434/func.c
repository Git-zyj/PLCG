/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31434
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
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        var_11 += ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (short)32763)) >> (((3431400227U) - (3431400204U))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) (signed char)110);
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)98))))) ^ (((((/* implicit */_Bool) (short)-3148)) ? (((/* implicit */int) (unsigned short)4699)) : (((/* implicit */int) arr_1 [i_0]))))));
        }
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 3])) != (((/* implicit */int) (short)32755))));
    }
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (((((/* implicit */int) min((var_1), (((/* implicit */short) (signed char)-97))))) | ((~(((/* implicit */int) (unsigned char)221))))))));
}
