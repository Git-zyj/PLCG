/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30309
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) var_2)), (var_6))))))) || (((/* implicit */_Bool) ((signed char) max(((signed char)(-127 - 1)), (((/* implicit */signed char) var_15))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 &= ((/* implicit */short) arr_0 [i_1]);
                    var_19 ^= ((/* implicit */signed char) (-(arr_4 [i_1] [i_0])));
                    var_20 |= ((/* implicit */_Bool) ((((arr_4 [i_1] [(short)14]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [i_1] [(_Bool)1])) - (((/* implicit */int) (unsigned char)253)))))));
                    var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_0] [i_1])));
                }
            } 
        } 
    }
}
