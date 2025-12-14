/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46109
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 799732451832737907LL)) * (((12550709739263404909ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))))) : (max((5896034334446146712ULL), (((/* implicit */unsigned long long int) max((-298750151946031683LL), ((-9223372036854775807LL - 1LL)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4129)) || (((/* implicit */_Bool) 0ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) / (max((((/* implicit */unsigned long long int) var_13)), (18109477109585373672ULL))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((unsigned int) var_13)))));
                                var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1])) <= (((/* implicit */int) (_Bool)1)))))) * (max((((/* implicit */unsigned int) -441622446)), (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) min((var_3), (var_7))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((5ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((arr_13 [11U] [i_6] [i_6] [i_6 + 1] [i_6]) - (1081780455U)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_27 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4241876800U)) ? (arr_15 [i_9] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) min((-1464667229), (((/* implicit */int) (signed char)-1))))) : (-4740736128525474951LL)));
                                var_21 = ((/* implicit */signed char) (_Bool)1);
                                arr_28 [i_8] &= ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (unsigned char)149);
}
