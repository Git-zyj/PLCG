/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230428
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
    var_19 |= ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) arr_2 [i_0]);
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_2 [i_0]))));
    }
    var_22 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) ((short) (short)7936));
        var_24 = ((/* implicit */short) ((arr_3 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))));
        var_25 = ((/* implicit */short) (-(1719668709U)));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_26 = (+(((/* implicit */int) (_Bool)0)));
        arr_9 [(short)18] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -8681515479757643860LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15577))) : (4168488607603383200LL))))) ? (((unsigned long long int) (signed char)85)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_15)) <= (arr_8 [i_2])))))));
        var_27 = ((/* implicit */long long int) arr_8 [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) -2128074106)) <= (8681515479757643860LL)));
        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-85)) & (((/* implicit */int) (_Bool)0))));
    }
}
