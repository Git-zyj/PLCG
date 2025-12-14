/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27102
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 137438953472LL)) ? ((((!(((/* implicit */_Bool) (unsigned short)18645)))) ? (((/* implicit */unsigned int) (+(869865916)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (1571940857U))))) : (min((((((/* implicit */_Bool) 16414760123611824798ULL)) ? (3484072358U) : (3484072380U))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-117)) & (((/* implicit */int) (short)9871)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13394))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-9871)))) : (((((/* implicit */_Bool) (unsigned short)53377)) ? (((/* implicit */int) (unsigned short)25244)) : (((/* implicit */int) (unsigned short)4397))))))), (((((/* implicit */_Bool) (signed char)-120)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4612)))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (_Bool)1))));
                                var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-114)) || (((/* implicit */_Bool) 4294967268U)))) ? (((/* implicit */int) (short)29675)) : (((/* implicit */int) max(((unsigned short)44013), (((/* implicit */unsigned short) (short)29687))))))))));
                                arr_14 [i_0] [i_1 + 2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18440519528797564762ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)117)))))))));
                                arr_15 [i_0] [i_2] = ((/* implicit */_Bool) (~(1979274546)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-20637))))));
    var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
}
