/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38251
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
    var_18 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2)) ? (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)51)))) : (1418638299)));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] = (~(((long long int) -1824062521)));
            var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_17))) - (min((var_14), (((/* implicit */unsigned int) (+(-1418638300))))))));
        }
        var_20 = ((/* implicit */unsigned int) ((1199739821) >> (((((/* implicit */int) (short)-9975)) + (10003)))));
    }
    for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_21 = ((/* implicit */long long int) (short)9);
        var_22 *= ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) arr_8 [i_2])) : (var_12))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) == (((/* implicit */int) arr_7 [i_2 + 1]))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_1))))) : (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)4] [i_2 + 1] [(unsigned short)4]))) : (((long long int) var_14))))));
    }
}
