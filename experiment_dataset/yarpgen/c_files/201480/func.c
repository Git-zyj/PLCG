/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201480
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
    var_15 &= ((/* implicit */unsigned char) (+(4095U)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = min(((~(var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 10601025959013855600ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1030720693U))) : ((~(1030720699U)))))) : (((((/* implicit */unsigned long long int) 1225609283U)) | (5915969250352339273ULL)))));
                    var_18 ^= ((/* implicit */signed char) arr_0 [(short)6]);
                }
                for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    var_19 -= (((!(((/* implicit */_Bool) (+(var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((arr_10 [8LL] [i_3 - 3] [8LL]), (((/* implicit */unsigned long long int) (_Bool)0)))));
                    var_20 = ((/* implicit */unsigned short) ((arr_9 [i_0] [i_3 + 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) 3109403864U)) | (10702098181239532693ULL))) <= (((/* implicit */unsigned long long int) 3069357990U))))))));
                    var_21 ^= ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (-(((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0])))))));
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(arr_7 [i_5 - 2] [i_3 + 1] [(unsigned short)13] [(unsigned short)13])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_9) >= (((/* implicit */unsigned long long int) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 5915969250352339273ULL)) && (((/* implicit */_Bool) 3069358014U))))) : ((~(((/* implicit */int) (unsigned short)510))))))) ? (((/* implicit */unsigned long long int) var_12)) : (((((((/* implicit */unsigned int) var_7)) >= (var_12))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
}
