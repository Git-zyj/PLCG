/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39305
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(short)4] = ((/* implicit */unsigned long long int) ((long long int) min((arr_3 [i_0] [i_1] [9ULL]), ((short)192))));
                arr_7 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-110)), (137203235U)));
            }
        } 
    } 
    var_12 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))) >> (((max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))))) - (49427U)))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_13 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) 1526223401U)), (5254544626163872063LL)));
                arr_13 [11LL] = ((/* implicit */unsigned long long int) (+(min((arr_8 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3964)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_2]))))))));
            }
        } 
    } 
}
