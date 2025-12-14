/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52796
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
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 786418998)) ? (9223372036854775783LL) : (((/* implicit */long long int) 678123842U)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) 678123841U)) ? (678123841U) : (3616843443U))))))));
    var_14 &= ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) 1096615776U)) ? (((/* implicit */unsigned long long int) ((int) var_2))) : ((+(arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((long long int) var_4)) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 678123841U)) && (((/* implicit */_Bool) 678123852U)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [6LL] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)238)) >> (((3906374963U) - (3906374940U)))));
                    arr_10 [i_2 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1617400177U)) && (((/* implicit */_Bool) ((long long int) -2583929871177682136LL)))));
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        arr_14 [i_3 + 3] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_13 [i_3 + 1] [i_3 + 3]), (arr_13 [i_3] [i_3 + 1])))), (453378871)));
        arr_15 [i_3] [i_3 + 1] = ((/* implicit */signed char) max((((unsigned long long int) arr_11 [i_3 + 2] [i_3 + 2])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
    }
}
