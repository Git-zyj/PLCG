/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43344
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
    var_11 = ((/* implicit */int) max((var_7), (((/* implicit */long long int) max((1906228255U), (((/* implicit */unsigned int) ((unsigned char) (_Bool)0))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) (-(((unsigned long long int) (short)25))));
        arr_2 [(_Bool)1] = ((((/* implicit */unsigned long long int) (+(524287U)))) == ((-(((((/* implicit */_Bool) (short)-9176)) ? (((/* implicit */unsigned long long int) var_10)) : (var_8))))));
        var_13 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (min((((/* implicit */unsigned long long int) -1405787972)), (1044076981348693594ULL)))));
        arr_3 [(short)3] = max((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_5)))), ((-(max((((/* implicit */unsigned long long int) var_3)), (18446744073709551615ULL))))));
        var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) var_8)))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (((var_7) - (((/* implicit */long long int) 4294967295U))))))) ? (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_8 [(unsigned char)12] &= ((/* implicit */unsigned int) var_7);
        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((15599122975596001533ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
        arr_9 [i_1] = (!(((/* implicit */_Bool) max((arr_5 [i_1] [7U]), (((/* implicit */long long int) arr_6 [i_1] [i_1]))))));
        var_17 = ((/* implicit */unsigned long long int) ((short) (short)-19387));
    }
}
