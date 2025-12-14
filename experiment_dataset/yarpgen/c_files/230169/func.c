/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230169
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [12]) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) * (11842267417383527685ULL)))));
        var_13 *= ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 6489141435802814988ULL)))))))));
    }
    var_14 = ((/* implicit */unsigned long long int) var_4);
}
