/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226600
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [(short)14] = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (unsigned short)48)))) << (((((((/* implicit */int) (unsigned short)18882)) << (((((/* implicit */int) (signed char)125)) - (110))))) - (618725375))))) >= (((((/* implicit */int) max(((signed char)15), ((signed char)15)))) & (((/* implicit */int) min(((signed char)15), ((signed char)-29))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)15))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35491)))))) & (((max((1298526049U), (((/* implicit */unsigned int) (signed char)-25)))) & (max((((/* implicit */unsigned int) (short)27777)), (0U)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)4))))), (((5ULL) << (((((/* implicit */int) (short)32764)) - (32746)))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25582))) >= (18410715276690587648ULL))))))));
    var_21 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | ((~(11154794417553670754ULL))))), (((/* implicit */unsigned long long int) ((((3667783467338023547LL) ^ (((/* implicit */long long int) 4252695141U)))) ^ (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27777))) | (261553124U)))))))));
}
