/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227541
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (min((max((((/* implicit */unsigned long long int) (unsigned short)17821)), (18446744073709551598ULL))), (((/* implicit */unsigned long long int) var_0)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) arr_2 [7ULL] [7ULL]);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min(((short)-28941), (((/* implicit */short) var_13))))), ((-(var_14))))), (((((/* implicit */unsigned long long int) arr_1 [i_0])) / (max((18ULL), (((/* implicit */unsigned long long int) (unsigned short)47919)))))))))));
        var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_10)))) > (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) max(((unsigned short)17617), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_11))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_9 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_1] [i_1] [i_0])))) | ((+(max((var_0), (((/* implicit */int) var_13))))))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_3 [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((4348456735918330711ULL), (((/* implicit */unsigned long long int) min((4), (((/* implicit */int) (_Bool)1))))))))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) > (1368680879884221308ULL))))))) ? (((((/* implicit */int) arr_2 [i_2] [i_0])) * (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) ((signed char) arr_0 [i_0]))))))))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)65524);
            arr_13 [i_0] [8ULL] [8ULL] &= ((/* implicit */short) arr_10 [24] [i_2]);
        }
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */unsigned long long int) max(((short)-3481), ((short)-7984)));
        var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) ^ (max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1))))), (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */unsigned int) var_5)) : (4294967295U))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                arr_29 [i_8] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) & (((/* implicit */int) (short)23745))));
                                var_23 = (+(((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_26 [i_4] [(unsigned short)1] [(unsigned short)1] [(short)5]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17621)) + (((/* implicit */int) (short)15380))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_5] [i_5] [i_5]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) % (3ULL)))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_9] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6])))));
                        var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4] [i_5] [i_4])) ? (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4])) : (960ULL)));
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) (unsigned short)212);
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_4]))));
                        arr_34 [i_10] [(unsigned char)23] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) arr_14 [i_5] [i_6])) : (((/* implicit */int) var_1))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)1926))));
                        arr_39 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_4] [i_6]))));
                    }
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_31 [i_4] [i_4] [i_4] [i_5] [i_6] [i_6]) : (arr_31 [i_4] [i_4] [i_4] [i_5] [i_5] [i_5]))))));
                }
            } 
        } 
        arr_40 [i_4] = ((/* implicit */unsigned char) var_7);
    }
}
