/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245867
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
    var_16 = max((((/* implicit */unsigned long long int) (unsigned char)0)), (5017125661466036152ULL));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)20] [i_1 + 2] [i_1 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (arr_3 [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_2))))) : (((int) arr_3 [i_0])))) > (((/* implicit */int) arr_4 [i_0]))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_1 [(unsigned char)6]) + (((/* implicit */int) (unsigned short)4016))))))) : (((arr_3 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))))));
            }
        } 
    } 
}
