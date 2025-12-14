/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222032
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_8);
        var_10 = (+(var_7));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (short)-10606);
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-2147483639) : (((/* implicit */int) var_2))))) ? (var_6) : (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) (short)10588)))))));
        var_11 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) var_9)), ((((_Bool)1) ? (var_4) : (((/* implicit */int) (signed char)1))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((1805027282290214240LL) / (((/* implicit */long long int) 2147483648U))));
    }
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) var_0)) : (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2071379168897563055LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_1) <= (var_0))))))) : (var_6)));
    var_13 = ((/* implicit */short) var_0);
}
