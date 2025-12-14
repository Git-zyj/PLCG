/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239802
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
    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 = ((((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1)))))) | (arr_0 [i_0]));
        var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (arr_0 [i_0])))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) 3068460147970313423LL)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_23 = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (18446744073709551603ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
        var_24 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65530))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 3676169115U))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */long long int) arr_2 [i_1]))))))))) > (var_18)));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_10 [(short)10] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2] [i_2])) + (((/* implicit */int) arr_8 [i_2] [i_2]))))), (max((((/* implicit */unsigned int) arr_8 [i_2] [i_2])), (15U)))));
        var_27 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2]))))), (var_18)));
    }
}
