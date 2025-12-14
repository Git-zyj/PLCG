/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34240
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
    var_17 = ((/* implicit */short) min((max((((/* implicit */long long int) min((((/* implicit */unsigned char) var_16)), (var_15)))), (max((var_6), (((/* implicit */long long int) (signed char)113)))))), (max((min((9007194959773696LL), (((/* implicit */long long int) (signed char)-84)))), (min((9007194959773696LL), (-9007194959773678LL)))))));
    var_18 = ((/* implicit */unsigned char) max((max((max((12ULL), (((/* implicit */unsigned long long int) (short)-23910)))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (unsigned char)128))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (var_0)))), (min((6ULL), (((/* implicit */unsigned long long int) var_15))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_19 += ((/* implicit */unsigned short) 991014544U);
        var_20 ^= ((/* implicit */short) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 1213879674320793050ULL))));
            var_22 ^= ((/* implicit */unsigned int) (unsigned char)236);
        }
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) (short)-26124);
            arr_7 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) 0LL);
            var_24 -= ((/* implicit */unsigned char) (signed char)-102);
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        arr_11 [(short)5] [i_3] = ((/* implicit */long long int) (unsigned char)8);
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */long long int) 1116732503U);
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_25 = 140737488351232ULL;
                            arr_24 [(unsigned char)4] [(unsigned char)4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) 0U);
                            var_26 += ((/* implicit */short) (_Bool)1);
                            arr_25 [i_3 - 1] [i_3 - 1] [(unsigned char)13] [i_5] [(signed char)5] [i_7] [i_4] = ((/* implicit */unsigned long long int) (signed char)101);
                            arr_26 [i_4] [i_6] [i_3 - 1] [i_3 - 1] [i_4] = ((/* implicit */short) -474273170178286708LL);
                        }
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            var_27 = (_Bool)1;
                            var_28 = (unsigned char)243;
                            var_29 = ((/* implicit */_Bool) (short)29777);
                            var_30 = ((/* implicit */signed char) (_Bool)1);
                            var_31 -= ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_33 [i_3 - 1] [(signed char)10] [i_4] [i_6] [i_6] = ((/* implicit */short) 16777088ULL);
                            arr_34 [i_4] [i_4] [(short)12] [(short)12] [i_6] [i_9] = ((/* implicit */short) (signed char)-100);
                            arr_35 [i_3] [i_3] [i_4] [i_5] [i_6] [(_Bool)1] [i_9] = ((/* implicit */signed char) (short)-24069);
                        }
                        var_32 += ((/* implicit */unsigned char) (signed char)42);
                        var_33 = ((/* implicit */short) (unsigned char)255);
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned char) 3178234821U);
    }
}
