/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191583
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))))))), ((((_Bool)0) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_4 [4LL] [4LL])))))))))))));
                var_15 = ((/* implicit */short) (signed char)127);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 14U)))))));
                    var_17 = ((/* implicit */signed char) max((var_17), ((signed char)16)));
                    arr_15 [i_2] [i_2] = ((/* implicit */short) arr_4 [i_3] [i_2]);
                }
            } 
        } 
        var_18 = ((/* implicit */short) var_5);
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            arr_18 [i_2] = (-(((/* implicit */int) (signed char)-79)));
            arr_19 [i_2] &= ((/* implicit */short) arr_8 [i_2] [i_5]);
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_7] [i_7] [i_7] [i_2] = ((/* implicit */signed char) 2838436780U);
                        var_19 = ((/* implicit */unsigned char) (+(4294967277U)));
                        arr_26 [i_2] [i_5] [i_6] [i_7] [i_7] = 64U;
                    }
                } 
            } 
            arr_27 [i_2] [i_2] [i_5] = ((/* implicit */signed char) var_9);
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_20 ^= ((/* implicit */signed char) var_6);
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32540)))))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            arr_39 [10] [i_9] [(short)2] [8LL] [i_12] [10] [10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967255U))))));
                            arr_40 [i_8] [i_8] [(unsigned short)5] = ((/* implicit */signed char) max((4294967255U), (4294967241U)));
                            arr_41 [i_8] = ((/* implicit */short) (signed char)109);
                            arr_42 [i_8] [1] [i_9] [i_10 - 3] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) (((_Bool)1) ? (65535U) : (var_12)));
                        }
                    } 
                } 
            } 
            var_22 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-127)) ? ((+(((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) (short)-32759)))), (((/* implicit */int) var_13))));
            arr_43 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) + (((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) ((signed char) 65534U)))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 14; i_13 += 3) 
    {
        arr_46 [i_13] [i_13 + 2] = ((/* implicit */_Bool) var_3);
        arr_47 [i_13] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)227));
        arr_48 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)511)) : ((+(arr_45 [i_13 + 2])))));
    }
}
