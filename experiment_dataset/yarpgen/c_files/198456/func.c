/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198456
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
    var_15 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (unsigned char)156))))) ? (min((((/* implicit */unsigned int) (short)27559)), (var_2))) : ((~(var_0))))), ((~(((var_4) & (var_0)))))));
    var_16 &= ((/* implicit */unsigned char) ((var_9) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
    var_17 = var_10;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_19 = ((max((((/* implicit */unsigned int) (short)27556)), (((((/* implicit */_Bool) (unsigned char)88)) ? (1595883339U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27559))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) ^ (((((/* implicit */_Bool) var_9)) ? (801796566U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)27579)), (4294967294U)));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned char) min((2130706432U), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_6 [i_0] [i_2])) * (((/* implicit */int) var_1)))))))));
            var_21 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_2] [i_0])))) * (((/* implicit */int) (short)4791)))) / (((/* implicit */int) (short)-27560))));
        }
    }
    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-449)))), (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
}
