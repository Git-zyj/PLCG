/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200539
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
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))))) / (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) & (max((((/* implicit */unsigned int) var_9)), (var_1)))))));
                var_11 = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_9))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((int) var_0));
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (var_4))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_1))) : (((/* implicit */unsigned int) ((var_3) << (((var_4) - (1001833856U)))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */int) var_0)) | (var_3)));
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 4294967295U)) & (7156224054593028556ULL)));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                arr_18 [i_6] [i_6] [i_5 - 2] [i_0] [i_2] [i_1] [12] = ((/* implicit */short) ((((/* implicit */int) var_0)) >= (var_3)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_18 = var_8;
                                var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (short)-32751))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                                var_21 |= ((/* implicit */long long int) ((unsigned int) ((unsigned int) var_0)));
                                arr_25 [i_0] [(short)6] [i_0] = ((/* implicit */short) ((unsigned char) var_3));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_6))));
}
