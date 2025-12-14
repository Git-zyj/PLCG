/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32498
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_7)));
        var_13 = ((/* implicit */short) var_0);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2] [i_2])))))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 1) 
            {
                var_16 = ((/* implicit */_Bool) var_3);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)));
                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
            }
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */_Bool) (~(var_8)));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_4] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_13 [i_1]))))));
            var_21 -= ((/* implicit */_Bool) var_3);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_8) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
            var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
        }
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))));
        var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
    }
    var_26 |= ((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (524287ULL)));
}
