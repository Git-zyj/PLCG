/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21893
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
    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) ((signed char) var_4)))))) : (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = (signed char)-32;
                arr_4 [i_0] = ((/* implicit */_Bool) (signed char)-124);
                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53206)) != (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))), (((((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))))) * (0U)))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((13858217210812589870ULL) >> (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)58))) : (-2564647028543386260LL)))))) ? (((/* implicit */int) ((_Bool) ((long long int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_1 + 3])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                var_24 |= ((/* implicit */int) arr_8 [i_2 + 2] [(signed char)9] [i_3]);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [7])) ? (((((/* implicit */_Bool) -7481236696707074516LL)) ? (max((arr_8 [i_2] [i_2] [(short)21]), (((/* implicit */long long int) 1491402350)))) : (-6345586399118843749LL))) : (((((/* implicit */_Bool) (short)21911)) ? (((/* implicit */long long int) ((((var_12) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_3])) + (123)))))) : (max((((/* implicit */long long int) (short)32765)), (arr_9 [i_2] [i_2])))))));
                var_26 &= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) / ((+(4165527218083666435LL)))))) ? (max((arr_9 [6U] [i_3]), (((/* implicit */long long int) min((3247656336U), (((/* implicit */unsigned int) (signed char)-40))))))) : (arr_7 [i_2 + 2] [i_3 + 2] [i_3 + 2]));
            }
        } 
    } 
}
