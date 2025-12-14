/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3004
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
    var_16 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) max((max(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [(short)9] [(unsigned short)7])) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0])))) | (((/* implicit */int) max((arr_0 [(short)1] [(_Bool)1]), ((short)28894)))))))))));
        var_18 *= arr_0 [i_0] [i_0];
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) 3307754735U))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) arr_2 [(signed char)12])))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_11))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_6 [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */int) max((((/* implicit */short) arr_4 [(unsigned char)20] [i_2])), ((short)14333)))), ((-(((/* implicit */int) (short)-14334)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (4723718177837108618LL) : (-4723718177837108618LL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2]))))))))));
        arr_7 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), ((-(var_6)))))), (min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_5 [i_2])) ? (-106580930641707647LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [(signed char)12])))))))));
        arr_8 [i_2] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (short)19087)))));
        var_22 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [(signed char)23])) ? (((/* implicit */int) arr_5 [(unsigned short)10])) : (1037575108)))) ? ((+(((/* implicit */int) arr_4 [24] [(short)10])))) : (((/* implicit */int) ((signed char) 4723718177837108618LL))))));
    }
    var_23 = ((/* implicit */unsigned char) var_3);
}
