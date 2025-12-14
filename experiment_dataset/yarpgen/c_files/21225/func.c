/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21225
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
    var_15 = ((/* implicit */unsigned short) 268435455U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4026531824U)))) ? (var_5) : (min((3035201955U), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)-80))))) : (((((/* implicit */_Bool) 3035201955U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1]))) : (arr_3 [i_1 - 1] [i_1 + 3] [i_0])))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_9))));
                                var_18 = (((((!(((/* implicit */_Bool) var_9)))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 747227451U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-96))))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) arr_4 [i_1 - 3] [i_1])) : (((/* implicit */int) (signed char)124))))));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */unsigned short) 3249942501277179635LL);
                var_20 *= ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_8);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((var_1), ((short)-2)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (14837668276214760276ULL))))))) : (((/* implicit */int) var_3))));
    var_23 = ((/* implicit */unsigned char) var_10);
}
