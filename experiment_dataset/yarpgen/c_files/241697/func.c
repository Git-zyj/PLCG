/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241697
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
    var_19 = ((/* implicit */int) ((signed char) ((int) ((((/* implicit */int) (unsigned short)61186)) <= (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) var_3);
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)13)) : (-8)))), (arr_5 [i_0 - 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) 7)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (7493881126838484213LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)10016)) : (((/* implicit */int) (unsigned short)18386))))))) : (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-98)) | (((/* implicit */int) (signed char)-78)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_13)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)27458)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_2))))), (var_6)));
}
