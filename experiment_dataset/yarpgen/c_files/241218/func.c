/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241218
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
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (778731867) : (((/* implicit */int) var_4))))) ? (max((11U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)127)), (14669701633402482827ULL)))) && ((!(((/* implicit */_Bool) var_10))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned short) ((-1354415584363512983LL) > (((/* implicit */long long int) (~(580780398U))))));
                    arr_11 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 2]))));
                }
                arr_12 [i_0 + 4] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_8 [3LL] [i_0] [3LL] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [12U]))) : (arr_3 [(unsigned short)15]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (min((((((/* implicit */int) var_6)) >> (((arr_3 [i_0]) - (3474951780U))))), (min((-114881951), (1779362116))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) <= (((arr_10 [(signed char)11] [i_1] [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_12)), (-9128593706079096370LL))) ^ ((~(1354415584363512983LL))))))));
}
