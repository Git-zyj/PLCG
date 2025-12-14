/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23651
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
    var_13 = ((/* implicit */int) ((_Bool) var_10));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] = (+(((/* implicit */int) var_1)));
                                arr_16 [i_1] [i_1] = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            {
                                arr_31 [i_9] [i_8] [i_7] [i_7] [i_7] [i_6] [i_5] = ((/* implicit */_Bool) arr_11 [i_7] [i_6] [i_7] [i_6] [i_9] [i_7]);
                                arr_32 [i_5] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                } 
                arr_33 [i_5] = ((/* implicit */unsigned short) -2068604569);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (unsigned long long int i_11 = 3; i_11 < 15; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_49 [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((201326592U), (((/* implicit */unsigned int) (short)-9058))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_10] [i_10] [i_10] [i_11]))) - (var_0)))));
                            arr_50 [8U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))) + (var_0)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 2; i_14 < 15; i_14 += 1) 
                {
                    for (signed char i_15 = 2; i_15 < 15; i_15 += 2) 
                    {
                        {
                            arr_56 [i_10] [i_10] [i_14] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4895118264142129869LL)) ? (8626148227800195229LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)843))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_29 [i_11 - 1] [i_14 - 2] [i_10])) : (((/* implicit */int) (signed char)-16)))))));
                            arr_57 [i_15] [i_10] [i_14] = ((((/* implicit */int) ((signed char) (signed char)-17))) * (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_26 [i_10] [i_11] [i_14])) : (((/* implicit */int) (signed char)114)))), (((/* implicit */int) ((short) 4294967295U))))));
                            arr_58 [i_10] [i_11] [i_15] [i_14] [i_15] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2068604550)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) : (268434944U)))) ? (max((var_4), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_12);
}
