/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222725
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned int) (short)7255)) ^ (var_4)))) ? (((((/* implicit */int) (short)-7267)) % (((/* implicit */int) (unsigned char)255)))) : ((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7285)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)255))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_11 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_2)))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                            {
                                arr_11 [i_3] [i_0] [i_3] [i_3] [i_4 - 2] [i_0 - 3] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0 - 2])))));
                                arr_12 [4ULL] [i_0] [i_1] [i_1] [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7267))))) ? (min((((/* implicit */long long int) ((signed char) var_8))), ((-(var_3))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-3438)) : (((/* implicit */int) var_7))))), (((var_9) | (4503599627370495LL)))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                var_12 = ((/* implicit */unsigned int) var_5);
                                arr_16 [i_5 + 1] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)7290))));
                                var_13 -= ((/* implicit */unsigned short) 33554431U);
                            }
                            var_14 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) * (((arr_1 [i_0 - 2]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))));
                            /* LoopSeq 1 */
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                            {
                                var_15 = ((/* implicit */_Bool) min((((arr_8 [i_0] [i_0 - 1] [i_2] [i_0]) << (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_0 - 1] [i_2] [i_3])) != (var_4))))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-7267))) * (var_4))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0 + 2] [i_0 + 2])))) ? (((long long int) var_1)) : ((-(arr_0 [i_0 - 2] [(_Bool)1])))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((short) ((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6])))))))));
                            }
                            arr_19 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) 4261412865U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) * (0ULL)));
}
