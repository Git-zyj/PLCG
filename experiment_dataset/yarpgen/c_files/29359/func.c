/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29359
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
    var_20 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0 - 1] [i_0] [(unsigned short)18]) : (((/* implicit */long long int) arr_2 [(unsigned short)19] [i_1]))))))));
                var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_5 [i_0 - 1] [i_1 + 3] [6U]) + (9223372036854775807LL))) >> (((17833098566856363691ULL) - (17833098566856363641ULL)))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : ((~(arr_0 [(unsigned short)14] [i_1 - 1])))));
                var_23 -= ((/* implicit */_Bool) (-((-(max((var_4), (var_0)))))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)18] [(signed char)18])) ? (arr_0 [24LL] [24LL]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned char)0] [(unsigned char)0])) || (((/* implicit */_Bool) var_8))))))))));
                var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) < (var_14)))), (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_19))) >> (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_19))) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned short)34746)))) + (34777)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((var_8) % (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_10)) : (var_14))) : ((~(((/* implicit */int) var_1))))))));
}
