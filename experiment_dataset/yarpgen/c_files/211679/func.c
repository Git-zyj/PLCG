/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211679
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) max(((-(4503599627370495ULL))), (max((((/* implicit */unsigned long long int) (-(var_6)))), (var_5)))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) arr_3 [2LL] [i_1] [i_1 - 3])) : (var_3)))) ? ((-(1896279625U))) : (arr_3 [i_0] [i_1] [i_1 - 3])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((((int) ((var_4) * (((/* implicit */unsigned long long int) arr_1 [i_2]))))), (((/* implicit */int) max((arr_11 [i_3 + 2] [i_2]), (arr_11 [i_3 + 1] [i_2]))))));
                    arr_12 [i_2] [i_3] [(_Bool)1] [i_4] = ((/* implicit */int) max(((+(4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2] [i_3 - 1])))))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)38564)), (((((/* implicit */_Bool) (short)-12454)) ? (arr_8 [i_2] [i_2] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-62))))))))));
                    arr_13 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) (~(220235569669119291LL))))) ^ (((((/* implicit */_Bool) 2398687670U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (0LL)))))));
                }
            } 
        } 
    } 
}
