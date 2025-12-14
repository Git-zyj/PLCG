/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46413
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
        arr_3 [13LL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) var_10))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) : (arr_1 [i_0]))), (((unsigned int) 1214931979U))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_19 += ((/* implicit */signed char) (+(((var_14) / (2508683609335486298ULL)))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((arr_8 [i_0] [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_5 [i_5] [10LL] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_5 [i_0] [i_1] [i_5])))) : (((unsigned long long int) (unsigned short)28347))));
                            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1214931979U)) ? (((/* implicit */int) (short)31315)) : (((/* implicit */int) (unsigned char)119))))) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5])) : (((/* implicit */int) (!((_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_6)))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_15 [i_0] [i_0]))))));
                            arr_18 [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */int) (((+(2508683609335486298ULL))) != (((unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_4])))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_1])) & (((((/* implicit */int) var_10)) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (arr_4 [i_0]))))))));
                            var_24 = ((/* implicit */unsigned int) 8674141484319756626ULL);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned long long int) ((unsigned char) var_10))))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (1704927233U) : (1704927233U)));
                            var_27 = ((/* implicit */unsigned int) var_13);
                        }
                        for (int i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            var_28 &= ((/* implicit */unsigned long long int) max((arr_5 [i_2] [i_1] [i_2]), (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_7 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (181343388U)))))));
                            var_29 = ((/* implicit */unsigned char) 463624594491100124ULL);
                        }
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_15 [i_0] [i_0]))) || (((/* implicit */_Bool) (-((~(((/* implicit */int) var_13)))))))));
                        var_31 = ((/* implicit */signed char) (short)-14547);
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_26 [i_8] [i_4] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) (+((~(((/* implicit */int) (signed char)63)))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (signed char)69))) << (((((((/* implicit */_Bool) 15938060464374065318ULL)) ? (var_9) : (((/* implicit */long long int) arr_1 [7])))) + (8893338809403372654LL)))))) ? (((/* implicit */unsigned long long int) var_8)) : ((+(max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_17))))))))));
                            var_33 = ((/* implicit */unsigned char) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_34 &= ((/* implicit */signed char) (+((+(arr_4 [i_4])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) ((var_2) <= (((/* implicit */int) (_Bool)1))));
                            var_36 = ((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_28 [i_0] [i_0] [i_0] [i_4] [i_9] [i_2])));
                            var_37 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_9] [i_4] [i_2] [i_0])) >> (((1214931979U) - (1214931953U)))));
                        }
                    }
                    var_38 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), (var_13)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)25))))) : (((/* implicit */int) ((short) arr_24 [i_0] [i_2]))))));
                    arr_29 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    }
    var_39 = ((/* implicit */int) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_40 &= ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (6884184818223361073ULL))) != (2251791223750656ULL)));
        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    }
}
