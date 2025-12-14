/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234083
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [13U] [i_0 + 1] [i_0] |= ((/* implicit */unsigned short) min((((min((3745092415285957909LL), (((/* implicit */long long int) (_Bool)1)))) >= (min((-3745092415285957895LL), (((/* implicit */long long int) arr_1 [i_0])))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) >= (var_5)))) >= ((~(((/* implicit */int) (unsigned short)1907))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0]) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) (unsigned char)44)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_12 [i_3] [i_3])) >= (((/* implicit */int) arr_12 [i_3] [i_4])))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -3745092415285957920LL)) >= (min((((var_19) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))))), (((/* implicit */unsigned long long int) (+(var_2))))))));
                                arr_26 [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63728))) >= ((-(arr_23 [i_3] [i_5] [(short)2] [i_7] [(_Bool)0])))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                            {
                                arr_29 [i_3] [i_3] [i_5] [8ULL] [i_8] = ((/* implicit */long long int) ((((3745092415285957903LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_5 + 1] [i_5 + 1] [i_5]))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)162)), ((unsigned short)63755)))) + (((/* implicit */int) arr_0 [i_5 + 1])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)21)) >= (((/* implicit */int) (signed char)-5))))) >= (((/* implicit */int) ((unsigned short) arr_22 [i_8] [i_6] [i_5 - 1] [i_4] [9LL]))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (unsigned char)62))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 24U))))) : (((/* implicit */int) min(((signed char)-102), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
                            {
                                arr_32 [i_3] [i_3] [i_3] [i_3] [(unsigned short)3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)29977))))) : (((((/* implicit */_Bool) (short)4173)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)111)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_9])))))) >= (((((/* implicit */_Bool) arr_7 [(signed char)16] [11LL] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_21 [i_3] [i_3] [i_3]))))))));
                                arr_33 [i_6] [i_3] [i_5] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) : (3499465160380107764LL)))) ? (((/* implicit */int) ((signed char) (unsigned char)241))) : (((/* implicit */int) ((_Bool) arr_2 [4LL])))));
                                var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_4] [i_5] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (arr_25 [10LL] [i_6] [i_6] [(unsigned short)7] [i_6] [i_6] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1320987875)) ? (((/* implicit */int) (unsigned short)24162)) : (((/* implicit */int) (unsigned short)63728))))) : (var_9)))));
                                arr_34 [i_3] [i_3] [i_3] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1865601749804184151LL)) >= (12671713473121422835ULL))))) >= (6951342211812499428ULL)));
                            }
                            arr_35 [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-4170)) : (1073741824))), (((/* implicit */int) arr_20 [i_4] [i_4] [i_3] [5ULL] [i_5 + 1]))))) >= ((~(((((/* implicit */_Bool) (unsigned short)33768)) ? (-3734697461683325201LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6])))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((unsigned long long int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47)))))) >= (((/* implicit */unsigned long long int) var_2))));
                var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)117)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3734697461683325200LL)) ? (arr_23 [i_3] [i_3] [i_3] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_4]))))) ? (min((arr_3 [i_4] [i_3]), (((/* implicit */unsigned long long int) arr_14 [i_3] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [(unsigned char)2] [i_4]))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) 3734697461683325200LL);
    var_27 = ((((/* implicit */unsigned long long int) 5963052072185832400LL)) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12526)) ^ (((/* implicit */int) (signed char)-119))))) : (min((((/* implicit */unsigned long long int) var_17)), (12671713473121422835ULL))))));
    var_28 = ((/* implicit */short) var_6);
}
