/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224436
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((var_10), (3957537450U)));
                var_11 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_7 [i_1] [(short)5] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (arr_7 [i_0] [i_0] [i_0]))))))) ? ((~((~(1743853384U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)3)))) : (((((/* implicit */int) (signed char)4)) << (((arr_6 [i_0]) - (4347856686934187257LL))))))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */long long int) (-((+(((2145479089103929593ULL) << (((-1738320283) + (1738320327)))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_1))))) : (-5847432719965129174LL)));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (signed char)9))));
}
