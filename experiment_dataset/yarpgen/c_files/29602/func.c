/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29602
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0 + 1]);
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 + 1])))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_0 + 2]));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (signed char)103))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((int) ((((/* implicit */_Bool) 3171113606U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) min(((unsigned char)6), (((/* implicit */unsigned char) arr_6 [i_1] [i_1])))))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((signed char) arr_6 [i_1 + 2] [i_1 + 4])), (((/* implicit */signed char) min((arr_6 [i_1 + 2] [i_1 + 4]), (arr_6 [i_1 + 2] [i_1 + 4])))))))));
    }
    for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */int) (unsigned char)128);
        arr_11 [(unsigned char)4] = ((/* implicit */unsigned char) arr_9 [(unsigned short)4] [i_2 + 1]);
    }
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26911)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)5)), (max(((unsigned short)56563), (((/* implicit */unsigned short) (unsigned char)250))))))) : (((/* implicit */int) (_Bool)1))));
}
