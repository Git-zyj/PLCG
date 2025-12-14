/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217427
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483645)) ? (((/* implicit */int) (signed char)-10)) : (1731876157))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) -527638023))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)9)) : (2147483647))) : (((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1))))))));
                    var_10 = ((/* implicit */int) 1644351926U);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+((-((~(var_9)))))));
                                arr_15 [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1910924753) : (-2147483646)))) ? (-1LL) : (-3034099709328650534LL)))));
                                var_11 *= ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)116)), (-2233845955511554830LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)72)))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9164)) ? (((/* implicit */unsigned int) 2147483640)) : (2494771665U)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)29)) - (((/* implicit */int) (_Bool)0))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) 2147483647))));
}
