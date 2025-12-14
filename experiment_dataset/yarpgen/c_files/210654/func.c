/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210654
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) >> (((var_3) - (874255102U))))) << (((((int) var_11)) - (155)))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) 1389942367)) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-22158))) + (1741462447U)))))));
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((var_1) ? (((int) var_13)) : (var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [0U] &= ((/* implicit */unsigned short) arr_0 [15U]);
        var_18 = ((/* implicit */int) min((var_18), (((int) arr_0 [i_0]))));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (6617970310099037278LL) : (((/* implicit */long long int) var_9))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((1368025236) >> (((4611685743549480960ULL) - (4611685743549480938ULL))))))))));
}
