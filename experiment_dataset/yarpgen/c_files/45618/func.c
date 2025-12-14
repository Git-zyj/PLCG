/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45618
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
    var_12 *= ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 *= ((/* implicit */long long int) arr_2 [i_0]);
        var_14 = ((/* implicit */unsigned long long int) min(((unsigned short)58290), ((unsigned short)34521)));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        var_15 = ((signed char) var_11);
        var_16 += ((((/* implicit */int) (unsigned short)34528)) == (((/* implicit */int) arr_0 [i_1 - 2])));
        arr_6 [i_1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 18101985682459696880ULL)) ? (((/* implicit */int) (unsigned short)34534)) : (((/* implicit */int) arr_3 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned int) var_5);
    }
}
