/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29854
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
    var_18 ^= ((/* implicit */long long int) ((short) max((9223372036854775807LL), (((/* implicit */long long int) ((unsigned char) var_5))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (short)-24108))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24088)) ? (((/* implicit */int) (short)-24108)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) (short)-24108)) : (((/* implicit */int) (short)24111))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) (short)-17)) : (arr_0 [i_1 - 2])))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_17)))) == (((((((/* implicit */int) arr_3 [i_0] [(_Bool)1])) == (((/* implicit */int) (short)24107)))) ? (((/* implicit */int) (short)7468)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-24107)) : (((/* implicit */int) (short)-7466)))))))))));
                var_22 ^= ((/* implicit */signed char) ((unsigned short) max((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))));
                var_23 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0] [i_0]))))));
                var_24 ^= ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0] [i_0] [i_1 - 2])), ((+(((/* implicit */int) (short)24122))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (max(((~(arr_1 [i_0] [i_1 + 2]))), (((/* implicit */long long int) arr_4 [i_1 + 3] [i_1])))));
            }
        } 
    } 
    var_25 += ((/* implicit */long long int) ((((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_3)))) == ((-(((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)22734)) : (((((/* implicit */int) var_0)) % (((/* implicit */int) var_17)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 137438953471LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4)))))))));
    var_26 += ((/* implicit */unsigned char) ((((unsigned int) (~(((/* implicit */int) var_17))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
}
