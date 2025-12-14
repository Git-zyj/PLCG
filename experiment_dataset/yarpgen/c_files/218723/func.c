/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218723
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
    var_20 += ((/* implicit */unsigned char) (-(((((-1LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-12426))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)122))))) : (-3LL)))));
    var_21 = ((/* implicit */unsigned short) var_6);
    var_22 &= ((((((/* implicit */_Bool) (signed char)-123)) ? (var_11) : (var_9))) << (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_8))))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((134217727U), (((/* implicit */unsigned int) (short)7995))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))) - (max((((/* implicit */unsigned long long int) (unsigned char)255)), (5960167323108438473ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_24 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(var_3)))), (max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
                arr_6 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : ((+(arr_5 [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
}
