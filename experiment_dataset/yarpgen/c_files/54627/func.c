/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54627
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (((((15691503757630486933ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10530))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_7))))) : (((var_11) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) : (var_9));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 *= (!(((/* implicit */_Bool) 170952616)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (2683646174U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)53))))), (((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_4 + 1] [(_Bool)1]))))) ? (((((/* implicit */_Bool) 249623275087235178ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) : (18197120798622316438ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))))));
                                var_16 -= ((/* implicit */unsigned int) arr_8 [i_1] [11U] [i_1] [i_1]);
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (arr_1 [i_2 + 3])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
