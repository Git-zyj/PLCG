/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51860
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
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-5698)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_20 &= ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)65535))))));
        arr_2 [i_0 - 2] &= ((/* implicit */unsigned short) arr_0 [i_0 - 3]);
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (short)5697)) >= (((/* implicit */int) (unsigned short)25062)))))));
        arr_3 [i_0 + 1] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)32320))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -2046521597)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
        arr_8 [i_1] [11ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_12)), (var_17))), (((/* implicit */long long int) (unsigned short)6827)))))));
    }
}
