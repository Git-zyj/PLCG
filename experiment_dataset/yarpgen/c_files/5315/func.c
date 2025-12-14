/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5315
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
    var_16 ^= ((((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned char)7)))) | (((/* implicit */int) ((unsigned char) var_0)))))) ? (((/* implicit */int) var_5)) : (max(((~(((/* implicit */int) (unsigned char)18)))), (min((var_9), (((/* implicit */int) var_15)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) / (var_12)))))) ? (((((((/* implicit */int) (unsigned char)181)) | (((/* implicit */int) var_2)))) | ((~(((/* implicit */int) var_6)))))) : (((/* implicit */int) (unsigned char)18))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((long long int) var_14))) && (((/* implicit */_Bool) arr_2 [i_0] [i_1] [0ULL])))) ? (((unsigned long long int) arr_2 [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (32767ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_2))))) : (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)))))) && (((/* implicit */_Bool) max(((unsigned char)193), ((unsigned char)38))))));
}
