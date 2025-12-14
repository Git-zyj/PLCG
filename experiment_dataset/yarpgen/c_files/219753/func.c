/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219753
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
    var_14 = ((/* implicit */unsigned char) var_1);
    var_15 += ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_1)) + (min((((/* implicit */long long int) var_9)), (var_7))))) + (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55862)) - (-1522477712)))), (((var_12) - (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0 - 1]), (1785526415327136670LL)))) || (((/* implicit */_Bool) max((var_4), (var_4))))))) >> (((((((/* implicit */int) (_Bool)1)) * (arr_0 [9ULL]))) - (max((((/* implicit */int) var_8)), (arr_0 [i_0]))))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) min((min((var_12), (((/* implicit */long long int) (_Bool)1)))), (((((-1785526415327136670LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)194)) - (188)))))));
    }
}
