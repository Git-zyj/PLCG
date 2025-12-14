/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197163
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
    var_10 -= ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned char) var_8)), (var_0))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) 5722282520650362084LL);
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))), (5722282520650362084LL)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_12 += ((/* implicit */int) arr_17 [i_3] [i_4] [i_5]);
                                var_13 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_16 [i_7 + 1] [18LL] [i_6 + 2] [i_6 + 2])))), (min((((arr_15 [i_4] [i_5] [i_6 + 3]) ? (((/* implicit */int) (_Bool)1)) : (var_7))), (((/* implicit */int) arr_19 [i_6 + 2] [i_4] [i_6 + 2] [i_7 + 1] [i_7] [i_6]))))));
                                arr_20 [i_7] [i_4] [i_5] [i_6 + 2] = ((/* implicit */short) max((3227100128U), (((/* implicit */unsigned int) var_5))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_3]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            {
                arr_25 [i_8] = ((/* implicit */unsigned char) arr_10 [i_8]);
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                {
                    arr_29 [(unsigned char)10] |= ((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_10] [i_9] [i_9] [i_8] [i_8] [i_8]));
                    var_15 *= ((/* implicit */signed char) var_9);
                    var_16 = -4154679795150432423LL;
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    arr_34 [i_9] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) (+(4154679795150432423LL)));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            {
                                arr_39 [i_8] [i_8] [(unsigned char)1] = ((/* implicit */long long int) (unsigned char)0);
                                var_17 *= ((/* implicit */_Bool) ((long long int) (~(((((/* implicit */_Bool) -4154679795150432399LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)10722)))))));
                                var_18 &= ((/* implicit */unsigned char) (~(arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */unsigned short) (((-(arr_2 [i_8] [(unsigned char)18]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-30))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)16)))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 15; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            {
                                arr_53 [i_14] [i_14] [i_14] [i_14] [i_14] [i_18] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_14])) && (((/* implicit */_Bool) arr_40 [i_15])))))));
                                var_20 = var_9;
                            }
                        } 
                    } 
                    arr_54 [i_14] [i_14] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 359742038443768603LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
