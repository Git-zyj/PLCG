/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237367
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
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(3947842050U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) : (arr_0 [i_0])));
        var_19 = ((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_20 += ((/* implicit */unsigned short) arr_4 [i_1]);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((long long int) ((unsigned int) min((var_12), (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_5 [i_1])), (var_15)))))) ? ((-(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (max((((/* implicit */unsigned int) arr_4 [i_1])), (1276344025U))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_13))));
    var_24 = ((/* implicit */int) var_15);
}
