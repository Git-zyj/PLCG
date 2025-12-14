/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236019
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_3))));
                    var_18 += ((/* implicit */int) var_7);
                    var_19 = ((/* implicit */long long int) var_13);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) var_2);
    }
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 8; i_7 += 2) 
                        {
                            {
                                arr_21 [i_3] = var_14;
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_1))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    arr_24 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) var_2);
                    arr_25 [i_3] = ((/* implicit */short) var_14);
                    var_24 = ((/* implicit */int) var_9);
                }
                for (unsigned short i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    var_25 += ((/* implicit */short) var_6);
                    arr_28 [i_3] [i_4] [i_4] = ((/* implicit */signed char) var_7);
                }
                var_26 += var_8;
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 7; i_12 += 2) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned short) var_6);
                                arr_35 [i_3] [i_4] [i_10] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */short) var_5);
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_12))));
                            }
                        } 
                    } 
                } 
                arr_36 [i_3 + 1] [i_3] = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    var_29 = var_6;
}
