/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248336
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (-1) : (0)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) 16141622415638996983ULL);
                    arr_9 [i_0] [i_0] [i_1 - 1] [7ULL] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((short) var_5))), (arr_3 [i_0 + 1]))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) min(((signed char)28), (var_2)))))))));
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((461980332195151759ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2]))))))) : (var_0))) + (((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_8))) | ((-9223372036854775807LL - 1LL)))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-28675)) + (28734))) - (44))))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
}
