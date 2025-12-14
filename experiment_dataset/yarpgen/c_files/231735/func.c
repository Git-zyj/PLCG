/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231735
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
    var_18 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((-12LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11485)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_8)) | (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 5943768041482171816LL)) * (1827919614462118708ULL)));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])));
    }
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_10)))));
    var_22 = ((/* implicit */_Bool) 5943768041482171830LL);
}
