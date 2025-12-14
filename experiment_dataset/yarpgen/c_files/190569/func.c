/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190569
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
    var_18 |= ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (((var_0) / (var_14))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2971354494U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_7)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24236))) >= (2971354494U)))) : (((/* implicit */int) ((short) var_11)))))));
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_9))))) ? (max((((/* implicit */unsigned int) var_1)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((+((-(var_7))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)16814)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((17475898832678034106ULL) - (((/* implicit */unsigned long long int) 734848713U))));
        var_20 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) arr_0 [i_0])))))) & (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (40950450U) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) * (((/* implicit */int) min(((signed char)-61), ((signed char)-51)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-89)), (arr_7 [i_1])))) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_11 [i_1 - 4] [i_3 - 2] [i_3] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_22 = ((/* implicit */unsigned short) (short)15911);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            arr_15 [i_1] [10LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((int) arr_7 [i_1])), (44694730)))) ? (((/* implicit */int) (unsigned short)10713)) : (((/* implicit */int) arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1]))));
            arr_16 [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_8 [(short)2] [i_4 - 1] [i_1])), (var_0))), (((/* implicit */long long int) (unsigned short)58758))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1] [i_1] [i_1 + 1]))))) && (((((/* implicit */int) (unsigned char)42)) >= (arr_10 [i_1 - 1] [(unsigned char)3] [i_1] [i_1])))))) : (((/* implicit */int) (short)-15922))));
        }
        for (signed char i_5 = 4; i_5 < 9; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)22425)) ? (min((var_0), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1 + 1] [i_5]) == (((/* implicit */int) (short)-18949)))))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10705)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)154)))))));
            arr_19 [i_1] [i_5] [0LL] = ((/* implicit */signed char) ((((((var_12) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1]))))) - (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (var_15))))) != (((/* implicit */long long int) (+(max((1087143394), (((/* implicit */int) (short)15911)))))))));
            /* LoopSeq 3 */
            for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                arr_22 [i_1 - 1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -3780860581534956358LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (9223372036854775798LL)))));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2935961135461009194LL)) ? (17475898832678034109ULL) : (((/* implicit */unsigned long long int) 3101470050284837885LL))))))))));
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)62)) ? (10905316102154895177ULL) : (((/* implicit */unsigned long long int) -5576708779987394317LL)))) ^ ((~(10905316102154895169ULL)))));
            }
            for (unsigned short i_7 = 4; i_7 < 10; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 7; i_9 += 4) 
                    {
                        {
                            arr_31 [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)-12453))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_18 [i_5 - 1])));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (-(min((3344210077653467171LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22574)) ? (4263785057U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21036)))))))))))));
                            arr_32 [i_1 - 2] [0] [2LL] [i_1 - 2] [0] &= ((/* implicit */unsigned int) min(((~(var_0))), (((((/* implicit */_Bool) arr_0 [(signed char)8])) ? (var_15) : (var_7)))));
                            arr_33 [i_1] [i_1] [i_1] [(unsigned short)2] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_1 - 4] [i_5 + 2])), ((-(((/* implicit */int) arr_4 [i_9 + 2] [i_1 - 4]))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) ((1715252252) >> (((5802305770578877139ULL) - (5802305770578877134ULL)))));
                var_28 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1 - 1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), ((~(5802305770578877163ULL)))))));
                arr_34 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-21735)) : (((/* implicit */int) (unsigned char)38)))))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 4; i_10 < 10; i_10 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */short) min((var_29), ((short)19838)));
                var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [(signed char)3] [i_1 + 1] [i_10 - 2]))));
                arr_38 [i_1 - 3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_3 [i_10 - 4]))));
            }
        }
    }
}
