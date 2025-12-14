/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53772
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((((/* implicit */long long int) var_5)), ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [12U])) && (((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (arr_1 [i_0] [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((arr_1 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_1))))));
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) min(((~(((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_1]))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) arr_6 [i_1])) : (arr_1 [i_1] [i_1])))))))));
        var_13 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_6)) >> (((arr_1 [i_1] [i_1 + 1]) + (3587925940764597022LL))))));
    }
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = var_11;
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) -548928003))) && (((/* implicit */_Bool) var_1)))) ? (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65529))) ^ (var_7))), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_9))) << (((/* implicit */int) ((signed char) var_0))))))));
}
