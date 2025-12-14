/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3508
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
    var_16 = ((/* implicit */signed char) (unsigned short)0);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)51347)) : (((/* implicit */int) (unsigned short)20957))));
    var_18 = ((/* implicit */unsigned short) min((max((var_2), (((/* implicit */short) var_15)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (((((/* implicit */_Bool) (unsigned short)0)) ? (9159012824328855840LL) : (((/* implicit */long long int) 1013155380U)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned short)11)))), (((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)1))))) + (-61573011)))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) <= (-3415135273686805238LL)))), ((signed char)-12)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        arr_8 [i_2] &= ((/* implicit */_Bool) (unsigned short)2571);
        arr_9 [i_2 - 1] = ((((/* implicit */_Bool) (unsigned short)19)) && (((/* implicit */_Bool) (unsigned short)65529)));
        arr_10 [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)65514)) >= (((/* implicit */int) (signed char)18))));
        var_20 ^= ((/* implicit */_Bool) -1822824247);
        arr_11 [i_2 - 1] [(short)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (unsigned short)29))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)8), ((signed char)0)))) && (((1890886048U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))) != ((-((((_Bool)1) ? (-1061314215382036474LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512)))))))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)65517)) % (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (unsigned short)65528)) : (1782764705))))), (((/* implicit */int) (unsigned short)65514))));
    }
}
