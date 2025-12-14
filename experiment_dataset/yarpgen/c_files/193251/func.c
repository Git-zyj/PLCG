/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193251
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_4), (var_0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (1ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_1)))))), (((/* implicit */unsigned long long int) var_0))));
        arr_2 [i_0] &= max((((3323356866U) ^ (971610421U))), (min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 971610437U)) >= (12045017536361186250ULL)))), (var_0))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_11 = ((var_3) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0 + 3]))))));
                                var_12 = ((/* implicit */int) min((var_12), (arr_9 [i_0 - 1] [i_1] [i_0 - 1])));
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min((arr_7 [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_0 + 3] [i_2] [i_4])) > (arr_11 [(unsigned char)8] [i_1] [i_2] [(unsigned char)8] [i_3] [i_4])))) : (((/* implicit */int) arr_13 [i_0 + 3]))))))))));
                                arr_14 [i_1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */int) var_6)) != ((-(((/* implicit */int) ((((/* implicit */_Bool) 16777216)) || (((/* implicit */_Bool) 10842459304839109377ULL)))))))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (min((var_9), (((/* implicit */unsigned long long int) arr_12 [i_4] [i_3] [i_2] [i_0])))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_5) : (var_5)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((arr_1 [i_1] [i_0]) ? (-363665971) : (((/* implicit */int) arr_1 [i_1] [i_0]))))) - (var_9))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (signed char)-11)) ? (var_9) : (((/* implicit */unsigned long long int) var_4))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    arr_21 [8ULL] [i_5] [i_0] = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 4) 
                    {
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((min((-914350392628217220LL), (((/* implicit */long long int) arr_11 [i_8] [i_7 - 3] [0U] [i_6] [i_5] [i_0 + 3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1332250162)) ? (971610426U) : (((/* implicit */unsigned int) 876104689)))))))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (1683232393743885488ULL)))));
                                var_16 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-6)) ? (var_5) : (((/* implicit */unsigned long long int) 5397480894018544372LL))))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((max((((/* implicit */int) var_7)), (arr_27 [i_0] [i_5] [i_0] [i_0] [i_7] [i_5]))) << (((max((3525275714837242658LL), (((/* implicit */long long int) var_8)))) - (3525275714837242658LL)))))) ^ ((-(2016U)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) (+((+(((/* implicit */int) arr_8 [i_0] [(unsigned short)3] [(unsigned short)3] [i_0]))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2940155790U)))))) : (var_0)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_28 [i_9])) ? (-5397480894018544376LL) : (((/* implicit */long long int) var_1)))) <= (((/* implicit */long long int) (+(2672539467U)))))))))))));
        var_20 = ((/* implicit */unsigned long long int) -5397480894018544392LL);
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_9])))))));
    }
    var_22 |= ((/* implicit */short) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_23 = ((/* implicit */_Bool) min((((13549084026332562079ULL) | (18446744073709551594ULL))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (18446744073709551608ULL))))) : (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (13549084026332562084ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 3) 
    {
        for (long long int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_28 [i_10 + 1]);
                    arr_38 [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10 + 1]))) <= (((((/* implicit */_Bool) 15495703669813976203ULL)) ? (((/* implicit */unsigned long long int) 876104684)) : (270669911448824569ULL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((var_0) % (var_4))) & (var_4)))) : (min((var_9), (var_9))))))));
                                arr_45 [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) var_8);
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_40 [i_11] [i_11] [i_13]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
