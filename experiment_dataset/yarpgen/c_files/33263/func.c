/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33263
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
    var_19 = ((/* implicit */int) ((var_16) / (((((/* implicit */_Bool) (unsigned char)42)) ? ((-(var_0))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54906)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((max((((/* implicit */long long int) arr_4 [i_0])), (arr_0 [i_0] [i_1]))) ^ (min((((/* implicit */long long int) var_4)), (arr_0 [i_0] [i_0])))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (max((((/* implicit */unsigned int) (unsigned char)247)), (var_12)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_6] [i_2] [(unsigned short)10])) ? (((((/* implicit */_Bool) arr_7 [i_6])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16645))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((long long int) ((_Bool) var_13))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (8628722097365536542ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_7] [i_4]))))) << (((((/* implicit */int) var_14)) - (20195)))));
                                var_24 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_28 [i_2] [i_3] [i_4] [i_4] [i_8])))), (((/* implicit */int) ((_Bool) arr_21 [i_8] [i_4] [i_4] [i_4] [i_3] [i_2] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 17; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                arr_34 [i_2] &= ((/* implicit */_Bool) ((min((min((((/* implicit */int) (short)2615)), (603461204))), (((/* implicit */int) arr_21 [i_4] [i_4] [i_9 + 3] [i_9 + 1] [i_9] [i_9 + 1] [i_4])))) | (max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned char)61)))), (((/* implicit */int) var_4))))));
                                arr_35 [i_10] [i_10] [i_2] [17] [i_10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)28965))))) ? ((+(max((var_16), (((/* implicit */unsigned int) var_8)))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))))))));
                                arr_36 [i_2] [i_3] [i_2] [i_10] [i_3] = ((/* implicit */long long int) arr_23 [i_2]);
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) var_8)), (9818021976344015074ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_11 [i_3])), ((unsigned short)39998)))) ? (max((((/* implicit */unsigned long long int) (signed char)116)), (arr_17 [i_10] [i_3] [i_4] [i_3] [7LL]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) (unsigned short)25537)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */_Bool) min(((~(((var_18) | (var_6))))), (min((min((var_12), (((/* implicit */unsigned int) (short)-25066)))), (var_16)))));
}
