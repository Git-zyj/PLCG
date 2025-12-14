/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228043
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
    var_10 *= ((/* implicit */unsigned char) var_4);
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) (((~(var_0))) < (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)121))))))) * (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) > (((/* implicit */int) arr_0 [i_0 + 1])))))));
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(573948761U)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (14585653460845428015ULL) : (16097738105565755177ULL)))));
        arr_3 [i_0 - 4] [5U] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)19257))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (unsigned short)21195);
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((min((var_9), (((/* implicit */unsigned long long int) arr_4 [i_1])))), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
        var_15 = max((min((((/* implicit */long long int) (short)-21224)), (6494367403212788889LL))), (((/* implicit */long long int) ((_Bool) arr_6 [i_1]))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1]) : (arr_5 [i_1]))))))));
    }
    var_17 = ((/* implicit */_Bool) var_7);
}
