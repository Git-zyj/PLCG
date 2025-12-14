/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32344
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)1))))), (min((arr_4 [(short)4]), (arr_4 [6LL])))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((7ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)59565)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (arr_6 [i_3 - 1]) : (arr_6 [i_3 + 1])))) ? ((-(arr_6 [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */long long int) var_16))))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        var_23 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [i_2] [i_2] [i_2] [i_2])) ^ (var_12)))), (9891066092303442153ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) arr_13 [i_2] [(unsigned char)11] [i_3 + 1] [i_2] [i_2] [i_5])))) : (((((/* implicit */int) arr_13 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3 - 1])) ^ (((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1])))));
                        arr_14 [i_2] = ((/* implicit */long long int) arr_10 [i_2] [i_3 + 1] [i_3 + 1] [i_5]);
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)49)))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-15), ((signed char)-15))))) + ((((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_3] [i_3 + 1] [i_3] [i_2] [i_2] [i_2]))))) : (min((((/* implicit */long long int) arr_10 [i_3] [i_3 + 1] [(signed char)14] [i_3])), (arr_8 [i_2] [i_2] [i_3 - 1])))))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) arr_13 [i_2] [(unsigned short)14] [i_6] [i_2] [i_6 + 1] [i_2]);
            /* LoopNest 2 */
            for (long long int i_7 = 3; i_7 < 23; i_7 += 2) 
            {
                for (int i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    {
                        arr_22 [i_2] [i_6] [i_7] [i_7 - 1] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (var_4))))));
                        arr_23 [i_8] = ((/* implicit */unsigned int) arr_19 [i_6 + 1]);
                    }
                } 
            } 
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)29))))) ? (((/* implicit */unsigned long long int) ((-2529026674475937330LL) | (((/* implicit */long long int) 1985330848U))))) : (((((/* implicit */_Bool) var_18)) ? (1866934911380280041ULL) : (((/* implicit */unsigned long long int) var_1)))))))));
        }
        for (unsigned char i_9 = 3; i_9 < 23; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 22; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        arr_33 [i_11] [i_11] [i_10] [i_9] [i_2] [7LL] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_27 [i_2] [i_9] [i_10 - 1] [1U])) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_9])) : (var_9))) >= (((/* implicit */unsigned long long int) ((long long int) arr_24 [i_9] [i_9]))))) ? (var_8) : (((/* implicit */int) (_Bool)0))));
                        arr_34 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(arr_6 [i_2])))))) ? (((((/* implicit */_Bool) min((240119590018986421LL), (((/* implicit */long long int) var_11))))) ? (((15775117397216896688ULL) % (((/* implicit */unsigned long long int) arr_16 [5U] [5U])))) : (((/* implicit */unsigned long long int) -2385125028388670098LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_9 - 3])))));
                        arr_35 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned int) -737409636)) : (1534372115U)))) * (((unsigned long long int) var_2))));
                        arr_36 [i_2] [i_9] [i_10 - 1] [(short)22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 288230376150663168ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)44604)) || (((/* implicit */_Bool) (short)-14513))))) : (((/* implicit */int) min((var_18), ((signed char)-23))))))) || (((((/* implicit */_Bool) 4696250329214160538ULL)) || (((/* implicit */_Bool) (signed char)-121))))));
                    }
                } 
            } 
            arr_37 [8LL] [i_2] [i_9 - 1] = ((/* implicit */_Bool) min((((/* implicit */short) (signed char)-23)), ((short)-14513)));
        }
        /* LoopNest 2 */
        for (long long int i_12 = 4; i_12 < 23; i_12 += 3) 
        {
            for (unsigned int i_13 = 1; i_13 < 23; i_13 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) var_7);
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) (-(7534603615797627734LL)));
                                arr_49 [i_12 - 4] [i_13] [i_15] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_25 [i_13 - 1] [i_13 - 1])))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_13 - 1] [i_12] [i_12 + 1] [i_14])), (arr_42 [i_13 + 1] [i_12 - 2] [i_12 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned short) var_2);
}
