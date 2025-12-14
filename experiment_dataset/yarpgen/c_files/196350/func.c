/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196350
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_0]))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-53))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_0] [i_0]))) : (min((arr_12 [i_3] [i_2] [i_2] [i_0]), (((/* implicit */long long int) (unsigned short)9686))))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))))) / (arr_12 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */long long int) ((arr_8 [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_13)))), (((((/* implicit */_Bool) -1412035687540283861LL)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (signed char)53)))))))));
                            var_21 = max(((~(arr_13 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [6U]))), (((/* implicit */long long int) (((+(((/* implicit */int) (signed char)-58)))) >= (((/* implicit */int) var_9))))));
                            var_22 |= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_13)), (arr_3 [(short)0] [i_4]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) (unsigned char)136))))));
                            arr_19 [i_2] [i_1] [i_1] [i_3] [i_3] [i_5] [i_2] = ((/* implicit */unsigned char) (signed char)37);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18928)) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (signed char)-38))));
                        }
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_21 [i_0] [i_1] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (unsigned char)111)) ? (arr_21 [i_0] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55822)))))));
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-109)), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) + (8946221107742932347ULL)))));
                        }
                    }
                    var_26 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 5541484326826734780LL)))) ? (2254505167U) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)120)) - (-1621956334))) / (((/* implicit */int) (unsigned char)230)))))));
                    /* LoopSeq 4 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_7])) || (((/* implicit */_Bool) (signed char)-35))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) (signed char)-28)) <= (((/* implicit */int) min(((signed char)23), (((/* implicit */signed char) (_Bool)0)))))));
                        var_29 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_16)))));
                    }
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_24 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)28485))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (8946221107742932351ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (var_14)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(unsigned char)10] [i_1] [(unsigned char)10] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_17)))))));
                        arr_27 [i_2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned short)43520), (((/* implicit */unsigned short) (short)19293)))))));
                        var_31 = ((/* implicit */unsigned int) arr_16 [i_8] [i_8] [(signed char)6] [i_2] [i_1] [(signed char)6] [i_0]);
                        var_32 = ((/* implicit */_Bool) ((((long long int) (signed char)17)) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_11 [i_8])))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2001514105U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))) : (((15639857318615764556ULL) * (((/* implicit */unsigned long long int) -1010480890)))))) >> ((((-(var_1))) - (12241048597890418945ULL))))))));
                        var_34 = ((/* implicit */short) (unsigned short)57497);
                        var_35 *= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_24 [i_9] [i_1] [i_1] [2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)6409)) >= (((/* implicit */int) (unsigned char)63))))))) > (((/* implicit */int) max((arr_5 [i_0] [i_1] [i_0] [i_9]), (((/* implicit */unsigned char) (_Bool)1)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_25 [i_10] [i_0] [i_1] [i_0] [i_0])))))))));
                        arr_33 [i_10] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (1020476833047042374LL)))), ((+(((/* implicit */int) var_12))))))), ((+(max((((/* implicit */unsigned long long int) var_4)), (var_7)))))));
                        var_37 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_13 [(unsigned short)4] [i_1] [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_16))))))))));
                    }
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) (+(var_1)));
                    arr_37 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4945488514301462223LL)) ? (((/* implicit */int) (unsigned short)22336)) : (((/* implicit */int) (_Bool)0))));
                }
                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46576)) >= (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    var_40 = ((/* implicit */signed char) min((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)232))))))), (((/* implicit */unsigned long long int) (unsigned char)93))));
    /* LoopNest 2 */
    for (unsigned short i_12 = 2; i_12 < 11; i_12 += 2) 
    {
        for (unsigned short i_13 = 3; i_13 < 14; i_13 += 3) 
        {
            {
                var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_41 [i_12] [i_12]))));
                arr_45 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_44 [(_Bool)1] [(_Bool)1])), (arr_42 [i_13] [i_13]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_40 [i_12] [i_12])))))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((unsigned short) arr_39 [i_12] [i_13]))))))));
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) min(((~((~(var_1))))), (((/* implicit */unsigned long long int) var_11))));
}
