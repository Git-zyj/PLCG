/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238531
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) ((var_1) | (var_1)))), ((-(15762598695796736ULL))))));
                var_17 += ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            for (int i_4 = 3; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_13 [i_3] [i_3] [i_3] = ((/* implicit */int) (signed char)126);
                    var_18 ^= ((unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                    arr_14 [i_3] [i_3] [i_3] [i_3 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_13))));
                    arr_15 [i_3] = (~(((/* implicit */int) ((signed char) (signed char)0))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_15))) & (var_14)));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-14211)) < (((/* implicit */int) var_2)))))));
                    var_21 += ((/* implicit */unsigned long long int) (+((+(((unsigned int) 939524096))))));
                    var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_10)))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(var_0))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_7] [i_6] [i_6] &= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116))));
                            var_24 *= ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned short)2814))))));
                            arr_32 [i_9] [i_9] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) var_10);
                        }
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned int) -3399418602182996319LL);
                        /* LoopSeq 3 */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_41 [i_10] = ((/* implicit */_Bool) var_4);
                            var_25 = ((/* implicit */unsigned short) var_13);
                            arr_42 [i_10] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)-5))))));
                        }
                        for (short i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) ((3U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                            arr_46 [i_10] [i_6] [i_10] [i_7] [i_10] [i_10] [i_12] = ((/* implicit */unsigned int) ((long long int) (unsigned short)2814));
                            arr_47 [i_5] [i_10] [i_7] [i_10] [i_12] [i_5] = ((/* implicit */unsigned int) ((long long int) ((short) var_14)));
                        }
                        for (int i_13 = 3; i_13 < 16; i_13 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) var_8);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(2159274169U))))));
                        }
                        arr_52 [i_5] [i_6] [i_7] [i_10] = ((/* implicit */unsigned int) 3399418602182996338LL);
                    }
                }
            } 
        } 
        arr_53 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))) < (max((((/* implicit */int) (signed char)-42)), (((((/* implicit */int) var_2)) | (((/* implicit */int) (short)12870))))))));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) max((((unsigned char) (!(((/* implicit */_Bool) (short)-9055))))), (((/* implicit */unsigned char) var_7)))))));
        var_30 = ((/* implicit */unsigned char) 4031579494U);
    }
    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
    {
        arr_56 [i_14] = ((/* implicit */unsigned short) (~(var_14)));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) max((((((var_15) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))) - (((/* implicit */int) (signed char)-127))))))))));
    }
    var_32 &= ((/* implicit */signed char) max((var_3), (((/* implicit */long long int) max((((2007494207) ^ (var_1))), (((/* implicit */int) (signed char)47)))))));
    /* LoopNest 3 */
    for (unsigned char i_15 = 2; i_15 < 19; i_15 += 2) 
    {
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 22; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 1; i_18 < 19; i_18 += 3) 
                    {
                        for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) ((_Bool) var_10));
                                var_34 *= ((/* implicit */unsigned char) (((+(var_10))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)2048))))), (((signed char) (signed char)24))))))));
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */short) var_0);
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62711)) || ((!(((/* implicit */_Bool) var_8)))))))));
                    arr_74 [i_16] [i_16] [i_16 - 1] [i_16] = (+((-(var_13))));
                }
            } 
        } 
    } 
}
