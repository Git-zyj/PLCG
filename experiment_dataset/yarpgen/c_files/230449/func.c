/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230449
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3765771266U)))))));
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22395))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 9223372036854775781LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))));
                        var_16 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)26)), (var_13)))) ? (((/* implicit */int) min(((unsigned short)11), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 22ULL)))))))));
                        var_17 = ((/* implicit */signed char) (~(-1338369123)));
                    }
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((long long int) 2251799813685247LL));
                    var_18 = ((/* implicit */_Bool) (short)23268);
                }
            } 
        } 
    } 
    var_19 = ((((/* implicit */_Bool) -9223372036854775758LL)) ? (2725643336U) : (4294967295U));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((var_12) + (9223372036854775807LL))) >> (((2147483620) - (2147483576))))) - (((/* implicit */long long int) 668415149U))))) ? (((((2147483641) << (((3360248967U) - (3360248967U))))) - (((/* implicit */int) (unsigned short)65514)))) : (((/* implicit */int) var_0))));
}
