/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211384
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
    var_14 = ((max((((4704224085053317580LL) + ((-9223372036854775807LL - 1LL)))), (((long long int) var_9)))) | (((/* implicit */long long int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) max((4061851766U), (((/* implicit */unsigned int) (unsigned char)73))))) : (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61440)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned short) var_4))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (arr_4 [i_1]))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [14U] [i_0] [i_1]))))), (arr_2 [(short)12] [i_1] [i_1]))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < ((((_Bool)1) ? (2968029751U) : (((((/* implicit */_Bool) (unsigned short)61433)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27838))) : (4061851766U)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_11);
}
