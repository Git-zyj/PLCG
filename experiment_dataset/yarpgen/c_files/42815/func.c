/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42815
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
    var_11 = ((/* implicit */unsigned char) ((((min((7651297867644754865LL), (((/* implicit */long long int) var_6)))) / (var_10))) | (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((unsigned short) var_7))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((7651297867644754865LL) == (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) var_10)) ? (((long long int) var_8)) : ((~(7651297867644754865LL)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (4294574156U)))), (arr_5 [i_1] [i_1 + 1]))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((min((((/* implicit */long long int) (_Bool)1)), (-7651297867644754866LL))) >= (((long long int) var_3)))) ? (((((/* implicit */_Bool) ((((-7651297867644754866LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_1))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_3))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))))));
    }
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (+(var_4)))), (2ULL))) + (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_9)), (2697882797U)))))))))));
}
