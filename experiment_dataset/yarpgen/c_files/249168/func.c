/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249168
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
    var_15 = ((/* implicit */short) 1023LL);
    var_16 = ((/* implicit */short) max((7591968652656065362LL), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) (short)0)) : ((-(((/* implicit */int) var_9)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */long long int) ((_Bool) arr_1 [i_0] [i_0]));
        var_17 -= ((/* implicit */short) (~((-(max((var_7), (-6838001310760688515LL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (-(max((((/* implicit */int) ((short) (_Bool)1))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) <= (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -17592186044416LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) max(((_Bool)1), ((_Bool)0)))), (arr_1 [i_2] [i_2]))) * (((/* implicit */long long int) (+(((/* implicit */int) max(((short)4273), ((short)-5725)))))))));
        var_21 = ((/* implicit */long long int) max(((~((((_Bool)1) ? (((/* implicit */int) (short)-10393)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (35958428274786304LL)))) && (((arr_9 [i_2]) != (arr_9 [i_2]))))))));
    }
}
