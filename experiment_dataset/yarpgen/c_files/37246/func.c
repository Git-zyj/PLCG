/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37246
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (var_9)))), (var_16)))) : ((~(-414336073)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [12U] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) 414336071));
            var_20 = ((/* implicit */_Bool) var_14);
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) arr_5 [(unsigned short)15]);
            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [12U] [(signed char)14]))) : (((long long int) arr_7 [i_2] [0U] [i_2]))));
        }
        var_23 = ((/* implicit */long long int) (~(((((1288527932334224213ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) var_2))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_24 *= ((/* implicit */unsigned int) arr_5 [i_3]);
        var_25 = ((/* implicit */long long int) (unsigned short)0);
        var_26 = ((/* implicit */signed char) (-(var_4)));
    }
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((var_6) & (((/* implicit */long long int) max((((/* implicit */int) var_15)), (var_8)))))) % (((((/* implicit */_Bool) (signed char)107)) ? (((var_4) >> (((((/* implicit */int) var_16)) - (48240))))) : (var_6))))))));
}
