/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47059
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
    var_20 &= ((/* implicit */signed char) -1);
    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned int) var_15))) ? (830106606U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) max(((signed char)-6), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) == (3464860689U)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_22 = ((/* implicit */_Bool) var_8);
        var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((var_16), (-843271616))), (min((((/* implicit */int) arr_1 [i_0])), (var_16))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] = ((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) max(((signed char)40), (var_7))))))) << (((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_18)) : (var_11))) - (93))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-106)) == (((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1] [i_1])) > (max((((/* implicit */long long int) var_0)), (var_14))))))));
    }
}
