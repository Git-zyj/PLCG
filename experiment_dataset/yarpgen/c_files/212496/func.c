/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212496
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 ^= max((2252842092816174902ULL), (10821150556191617883ULL));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_3 [i_0 + 1]);
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-14527)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (3522818450U)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_3] [i_4]))) - (11926377066541914448ULL))))))))));
                            }
                            for (unsigned int i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) -5410318879305893015LL));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(3524154394U)))) ? (((/* implicit */unsigned long long int) 1477830939598419547LL)) : (6520367007167637167ULL)));
                            }
                            for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned int) (!((_Bool)1)));
                                var_19 = ((/* implicit */_Bool) var_5);
                            }
                            /* LoopSeq 3 */
                            for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                            {
                                arr_22 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] = min((((unsigned int) max((var_9), (var_9)))), (((/* implicit */unsigned int) ((short) arr_19 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 11926377066541914439ULL))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) arr_21 [i_7] [i_3] [i_2] [i_1] [i_0 - 1])) | (9628982608196743323ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 6520367007167637161ULL)))))))));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((unsigned long long int) 6520367007167637154ULL)) - (((/* implicit */unsigned long long int) (-(5137250215864014782LL))))));
                                arr_24 [i_7] [i_3] [i_2] [i_1] [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) min((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned int) ((11926377066541914454ULL) <= (6520367007167637154ULL)));
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                            {
                                arr_27 [i_8] [i_3] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((11926377066541914452ULL) >= (6520367007167637154ULL)));
                                arr_28 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) + (arr_2 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 11926377066541914454ULL)) && (((/* implicit */_Bool) (unsigned short)36769)))))) : ((~(3447542871U)))));
                            }
                            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                            {
                                var_22 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((min((arr_13 [i_0 + 1] [i_1] [i_2] [i_3] [i_9]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) > (var_2))))))), ((~((~(arr_19 [i_0 + 1] [i_1] [i_2] [i_3] [i_9])))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))) : (((unsigned int) 49043604U)))))));
                                arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!((_Bool)0)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (11926377066541914461ULL))))) >= (((/* implicit */unsigned long long int) ((((_Bool) var_5)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_13)))))));
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28792)) || (((/* implicit */_Bool) 6520367007167637174ULL))));
}
