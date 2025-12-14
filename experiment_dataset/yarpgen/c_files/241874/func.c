/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241874
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0)))) ? (min((var_10), (((/* implicit */unsigned int) (unsigned char)24)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))))) - (18U)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) var_15);
        var_19 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (unsigned short)35158))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) -5387563491763847134LL)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1 - 1] = ((/* implicit */long long int) ((int) arr_0 [i_1 - 3] [i_1 - 2]));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_2 [i_1 + 3]))))));
        var_20 |= ((/* implicit */int) (-((+(var_9)))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [(signed char)2])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) ^ (((/* implicit */int) arr_2 [i_1 - 2])))))));
    }
    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((var_11) && ((_Bool)1))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_0))))))));
}
