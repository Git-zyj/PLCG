/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50586
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (var_10)))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) var_8)), (var_10)))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (var_6))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))) : (var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) var_10);
        var_15 += ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))) : (var_4));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) var_1))))) ? (var_0) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_8))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_16 &= ((/* implicit */_Bool) var_1);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_5))))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_0)))) : (var_10));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)));
        }
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_6)));
    }
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        arr_11 [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (var_10)))) ? (max((var_4), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_3)))))));
        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_9))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))), (var_0))))));
        arr_12 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))), (min((102820598182446868ULL), (((/* implicit */unsigned long long int) 2007952923))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((var_9) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) var_0))))))));
    }
}
