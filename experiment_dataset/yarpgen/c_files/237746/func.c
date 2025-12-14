/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237746
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
    var_10 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 += var_5;
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) (short)28765))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (short)2032)) / (((/* implicit */int) ((short) (short)2032))))) <= (((((/* implicit */int) (short)-2021)) * (((/* implicit */int) (short)-2021))))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) var_2);
                    var_13 = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 6; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */int) var_6);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            arr_22 [i_3] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((short) var_5));
                            arr_23 [i_3] [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_4)));
                            arr_24 [i_3] [i_3] = ((/* implicit */unsigned short) 4294967289U);
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_9))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((min((max((((/* implicit */unsigned int) (short)2008)), (6U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6U)) || (((/* implicit */_Bool) (short)22594))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)22594)))))));
                        }
                        arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_4);
                    }
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 7; i_9 += 4) 
                    {
                        var_17 ^= ((/* implicit */unsigned int) ((unsigned long long int) var_8));
                        arr_30 [i_3] [i_3] [i_5] [i_9] [i_4] [i_9] = ((/* implicit */unsigned char) var_2);
                    }
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) ((unsigned short) var_6))), (((((/* implicit */int) (short)2036)) * (((/* implicit */int) (short)-22597))))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_9))));
                }
            } 
        } 
        arr_31 [i_3] = ((unsigned long long int) (short)22602);
    }
    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (min((((/* implicit */unsigned int) var_2)), (max((4294967274U), (4294967295U)))))));
        var_21 = ((/* implicit */signed char) var_2);
        arr_34 [i_10] = var_8;
    }
}
