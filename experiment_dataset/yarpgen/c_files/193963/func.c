/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193963
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
    var_11 += ((/* implicit */signed char) min(((~((~(7980879030008522644LL))))), (((/* implicit */long long int) max((var_8), (((((/* implicit */_Bool) 3803012832U)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-30)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [(signed char)5] [(signed char)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65280))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) : (((((/* implicit */int) (signed char)37)) ^ (((/* implicit */int) (short)32767)))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_3);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-25)))))));
        var_13 &= ((/* implicit */unsigned char) (-(arr_5 [i_1])));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (var_6)));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_5 [i_1]) >> (((/* implicit */int) (signed char)35))))) ? (((((/* implicit */_Bool) arr_5 [1U])) ? (437725318499102610ULL) : (arr_5 [i_1]))) : (arr_5 [i_1]))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_6 [i_1]))))) << (((((/* implicit */int) (signed char)43)) & (((/* implicit */int) (signed char)-43))))));
    }
    var_16 -= ((/* implicit */int) ((var_6) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
}
