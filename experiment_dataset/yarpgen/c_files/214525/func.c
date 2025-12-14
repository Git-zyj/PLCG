/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214525
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
    var_14 = ((/* implicit */unsigned char) (~((-9223372036854775807LL - 1LL))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_15 |= ((/* implicit */signed char) (unsigned short)21663);
        var_16 = ((/* implicit */short) ((((/* implicit */int) (signed char)8)) >> (((15342208914046321662ULL) - (15342208914046321642ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0])))) == (((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) var_2))))) ? ((~(((/* implicit */int) arr_3 [i_2] [i_1])))) : (((/* implicit */int) max(((unsigned char)195), ((unsigned char)107)))))))))));
                    var_18 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_11))))), (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)19] [i_1])))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned int) min((((arr_5 [i_0] [i_0]) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_5 [i_0] [i_0]))))) && (((/* implicit */_Bool) var_6)))))));
        var_20 = arr_1 [i_0];
    }
    for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_6 [i_3 + 1] [i_3 - 2]))));
        arr_8 [i_3 - 2] = ((((/* implicit */_Bool) arr_6 [1LL] [i_3 - 2])) && (((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 1])) && ((!(((/* implicit */_Bool) 14491314879668950593ULL)))))));
    }
    var_22 = ((/* implicit */long long int) var_8);
}
