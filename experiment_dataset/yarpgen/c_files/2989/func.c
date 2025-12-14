/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2989
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
    var_18 -= ((/* implicit */unsigned short) (_Bool)0);
    var_19 = ((/* implicit */unsigned int) ((var_13) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 421747737)) ? (var_3) : (((/* implicit */int) var_11))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) 4403575764577516829ULL);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_21 -= ((/* implicit */unsigned short) arr_3 [(unsigned short)10]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) * (((/* implicit */int) var_8))));
        var_23 = ((/* implicit */unsigned short) arr_3 [i_1]);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_1]) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_5 [(unsigned short)22]))));
        arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = ((/* implicit */int) max((min(((unsigned short)41542), ((unsigned short)23991))), ((unsigned short)23993)));
    }
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((var_2) ^ (((((/* implicit */int) ((unsigned short) var_13))) >> (((((/* implicit */int) var_0)) - (19652))))))))));
}
