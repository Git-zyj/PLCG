/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2971
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (var_1) : (((long long int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) 9223372036854775807LL);
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 - 3])) : (((/* implicit */int) arr_6 [i_1 - 1])))))));
    }
    for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) (short)-1);
        var_13 = min((((/* implicit */unsigned char) arr_2 [i_2])), (((unsigned char) 14924688896769619782ULL)));
    }
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (signed char)-122)), (2211154952U)));
    var_15 = ((/* implicit */short) var_5);
    var_16 -= ((/* implicit */unsigned long long int) (unsigned short)50760);
    var_17 -= ((/* implicit */signed char) 1558020136842751853ULL);
}
