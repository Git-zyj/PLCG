/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209449
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
    var_16 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((unsigned int) max((var_13), (((/* implicit */long long int) var_14))))) : (((unsigned int) var_6))));
    var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((long long int) var_8))))));
    var_18 ^= var_10;
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) var_11);
            var_21 &= ((/* implicit */unsigned char) var_12);
            arr_6 [i_0 + 1] = ((unsigned char) (+(((/* implicit */int) arr_5 [i_0] [i_0]))));
            var_22 = ((/* implicit */unsigned short) ((var_13) >> (((var_0) - (5428818363330539646LL)))));
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_23 = (-(((long long int) var_15)));
            arr_9 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2321191800384307455LL)) ? (var_15) : ((-9223372036854775807LL - 1LL)))))));
        }
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1])) >= (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1])) + (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]))))));
    }
}
