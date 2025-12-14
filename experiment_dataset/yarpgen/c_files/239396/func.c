/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239396
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-106)))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))));
                    arr_8 [i_0] [i_0] [i_0] [9U] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13443))) : (var_5))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0]) : (arr_5 [i_0])));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] &= ((/* implicit */unsigned char) 0ULL);
                                arr_15 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_0))))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (var_5)))))));
                                var_14 = ((/* implicit */_Bool) (-(((1405737928U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43233)))))));
                            }
                        } 
                    } 
                    var_15 |= ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) 1420496133)));
                }
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 23; i_5 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) ((unsigned long long int) var_1)))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) max(((short)-25883), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))))) << (((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_17 [i_5])) : (var_5))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-117))))))) - (1758617609U))))))));
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            {
                var_18 = (-(((unsigned long long int) (signed char)38)));
                arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1052283759))))) : ((-(((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_7] [i_6]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) arr_12 [i_6] [i_6] [i_7] [i_7] [i_8] [i_8] [i_6]);
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (arr_7 [i_7] [i_8] [(short)14])))))));
                            arr_29 [i_6] [i_6] [i_8] = ((/* implicit */_Bool) var_2);
                            arr_30 [i_6] [i_7] [i_8] [i_8] [(unsigned char)6] [i_8] &= ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned int) var_4);
}
