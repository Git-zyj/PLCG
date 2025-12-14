/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215918
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
    var_19 = ((/* implicit */_Bool) ((long long int) (unsigned short)8098));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) arr_2 [i_0]);
        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_7)), (9223372036854775807LL))) >> ((((~(var_15))) + (5233624014596259485LL)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32763)) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((var_0) && (((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-9341))))))))));
    }
}
