/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39277
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
    var_16 = max((var_3), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) + (var_4)))) || (((/* implicit */_Bool) ((unsigned char) var_6)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 3520631296U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_3]))))) : ((+(((/* implicit */int) (_Bool)1))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (short)10624)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14))))));
                        var_19 = ((/* implicit */unsigned char) var_8);
                        var_20 ^= ((/* implicit */unsigned int) ((long long int) var_11));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        var_22 = (-((~(var_15))));
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_0] [6U] [i_5] [i_6] = ((/* implicit */unsigned int) var_0);
                            arr_22 [i_0] [i_0] [i_0] [11U] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                        }
                        arr_23 [i_0] = ((/* implicit */short) arr_6 [i_1] [i_0] [i_5]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned long long int) ((arr_29 [i_8] [i_7] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_8]))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)89)), (min((var_12), (((/* implicit */unsigned int) (signed char)123))))))) <= ((~(17592118935552ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
