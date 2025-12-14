/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212967
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (_Bool)0))))))) ? (min((((((var_9) + (9223372036854775807LL))) >> (((/* implicit */int) var_16)))), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) var_18)) < (((/* implicit */int) (unsigned short)32770)))), (var_16)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1917624415U) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32768))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned int) -157582975))))));
                var_21 = ((/* implicit */unsigned int) ((unsigned short) arr_1 [i_0]));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (arr_2 [i_0])))) / (((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) * (288230376151711740ULL))))))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (7713627917205723408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10974))))), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((unsigned char) var_18))) : (-157582955))))));
                                arr_11 [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_2]))))), (min((-8661569239523639095LL), (((/* implicit */long long int) var_7)))))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned char)149)) : (-157582972)))), (min((var_6), (var_12))))))));
                                var_23 = ((((/* implicit */_Bool) 157582971)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)107)), (var_7)))))))) : (((((((/* implicit */_Bool) 6571419413620625095ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) : (34359738367LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
