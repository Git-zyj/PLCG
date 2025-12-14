/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202811
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (signed char)126))))) << (((/* implicit */int) (!(((/* implicit */_Bool) -2147483619)))))))) : (var_8)));
    var_19 = ((/* implicit */signed char) var_15);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) var_1);
        var_21 = ((/* implicit */long long int) ((int) 17577666409763411430ULL));
        var_22 = ((/* implicit */int) (signed char)126);
        var_23 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_3))))))));
        var_24 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) ((unsigned char) var_17))) : (((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_3 [(unsigned short)7]))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) % (var_17))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))))));
    }
    var_25 |= ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned long long int) var_4))));
}
