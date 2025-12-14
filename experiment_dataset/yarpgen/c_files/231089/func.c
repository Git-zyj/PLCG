/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231089
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
    var_20 = ((((((/* implicit */int) var_4)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))) ? (((/* implicit */long long int) max((var_8), (var_16)))) : (-4888273306750977830LL));
    var_21 = var_17;
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_1 [(_Bool)1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (max((((/* implicit */long long int) (unsigned char)173)), (arr_3 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_19), (((/* implicit */short) arr_1 [i_0])))))) : (min((arr_3 [i_0]), (((/* implicit */long long int) (_Bool)1))))))));
    }
}
