/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238815
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
    var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (4976231560277800468ULL))) ? (((-997676025) & (((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (max((11245349705023414127ULL), (((/* implicit */unsigned long long int) -3622121960060223414LL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] = ((((/* implicit */int) var_15)) << (((max((((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) var_14))))), (var_7))) - (10123610622481631116ULL))));
                            var_21 &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_8)) ? (var_19) : (var_1))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) min((min((997676008), (arr_7 [i_0 + 2]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (arr_11 [i_1 - 2] [i_0 + 1] [i_1 - 1] [i_0 + 1])))));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_8 [i_0] [i_1] [i_0])))) ? (max((arr_1 [i_0]), (((/* implicit */int) arr_5 [i_1] [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_17)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((997676019), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) -1472072033043952882LL)) >= (2859809912798085380ULL))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_24 += ((/* implicit */signed char) min((-997676036), (-45747354)));
                    var_25 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-6550348831036059949LL)))) || (((/* implicit */_Bool) (unsigned short)39922))));
                    var_26 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned int) arr_16 [i_4])) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (arr_16 [i_4]) : (((/* implicit */int) var_16)))))));
                    var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((int) arr_16 [i_4]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((short) (short)32138)))))));
                }
            } 
        } 
    } 
}
