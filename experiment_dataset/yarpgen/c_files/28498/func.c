/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28498
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((-73429511919701129LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))));
                var_20 |= ((/* implicit */_Bool) (+(((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_0 [i_1 + 2])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (((/* implicit */int) arr_5 [i_2] [i_1] [i_1 + 2] [i_2]))));
                    var_22 = ((/* implicit */short) var_13);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((var_17) >> (((((/* implicit */int) var_8)) - (21)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((unsigned char)215), ((unsigned char)102))))))));
    var_24 = max((max((var_4), (var_13))), (((/* implicit */unsigned char) var_2)));
}
