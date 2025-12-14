/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50196
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 = var_8;
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (((~(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1950360064)) ? (((/* implicit */unsigned long long int) -1950360065)) : (arr_1 [i_0] [i_0])))) ? ((~(1950360064))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)(-127 - 1)))))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) 5673710900549171395ULL);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (max((((long long int) arr_4 [i_1])), (((/* implicit */long long int) arr_5 [i_1 + 1])))) : (((long long int) ((unsigned long long int) arr_0 [i_1]))));
        var_14 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551606ULL)))) ? (((var_4) ? (8260528179889505569LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)37)) ^ (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)113))))) : (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (var_11)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_15 = (+(arr_9 [i_2 + 1]));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)15490)))))));
        var_16 = ((/* implicit */unsigned long long int) var_2);
        arr_11 [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) / (((arr_9 [i_2 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_17 = ((/* implicit */unsigned long long int) ((int) arr_9 [i_2 - 1]));
    }
    var_18 |= ((/* implicit */unsigned long long int) ((signed char) var_1));
    var_19 = ((/* implicit */unsigned long long int) ((int) 2623143578U));
    var_20 = ((/* implicit */int) var_5);
}
