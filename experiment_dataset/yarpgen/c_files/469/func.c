/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/469
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) var_3);
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) -1892726983)), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1892726981))))), (var_2)))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((1892727011) ^ (((/* implicit */int) (signed char)-57)))) | (((((((/* implicit */_Bool) -1892727012)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [(short)13])))) ^ ((~(((/* implicit */int) var_9))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((short) var_14)), (((/* implicit */short) arr_1 [i_0]))))) + (((/* implicit */int) var_0))));
        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) (signed char)22)) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_6)), (var_11))))) + (((-4720084390859539310LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (var_5)))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_18 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) & (4720084390859539309LL))), (((/* implicit */long long int) 1892727011))));
            var_19 |= (!(((/* implicit */_Bool) var_1)));
            var_20 -= ((/* implicit */long long int) arr_2 [i_1]);
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) arr_1 [i_2])))) + (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (606425157) : (((/* implicit */int) var_3)))) > (((var_0) ? (((/* implicit */int) (short)9496)) : (((/* implicit */int) var_6)))))))));
        }
        arr_13 [i_1] = ((/* implicit */signed char) var_6);
    }
    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (13860755855634839775ULL)))) ? (var_12) : (min((((/* implicit */int) (unsigned short)22675)), (-1892726983)))))));
    var_22 = ((/* implicit */unsigned int) var_5);
}
