/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39007
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] |= ((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)31347)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((2147483647) == (((/* implicit */int) (signed char)12)))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) max((var_4), (1537369891)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
        arr_9 [i_1] [i_1] = ((/* implicit */short) ((((unsigned int) ((long long int) arr_6 [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_13)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_0) : (((/* implicit */int) var_1)))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((short) ((unsigned char) var_10)));
}
