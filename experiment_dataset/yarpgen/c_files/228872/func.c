/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228872
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 *= ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37985)))))) - (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0] [i_0])), (var_10)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */long long int) -73056142)) > (9223372036854775807LL))))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned char)233)))))) && (((/* implicit */_Bool) ((1091504063U) ^ (((/* implicit */unsigned int) var_13)))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)4))))), ((signed char)63)))) ? (arr_1 [i_0] [i_0]) : (2966391136U)));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (-(min((var_11), (((/* implicit */long long int) ((((/* implicit */int) (short)19)) * (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    var_21 = ((/* implicit */short) min((((/* implicit */int) var_0)), (var_3)));
    var_22 = ((unsigned short) (-(min((-9223372036854775807LL), (((/* implicit */long long int) (signed char)-64))))));
}
