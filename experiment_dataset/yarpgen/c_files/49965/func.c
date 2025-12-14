/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49965
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1]))) : (var_9)));
                        arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [8U] [i_2] [i_2] = ((/* implicit */unsigned int) (short)32767);
                        arr_17 [i_0] [i_1] [i_2] [i_4] |= ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [(unsigned char)19] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32750))) : (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -5545824168943068458LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_4] [i_4] [i_4] [i_1])))))));
                        var_15 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_1] [i_2]))));
                        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(-5545824168943068453LL))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (short)32767))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_22 [4] [i_6] [i_0] [i_5] [i_6 + 1] &= ((/* implicit */unsigned int) (_Bool)0);
                            arr_23 [i_1] [i_1] [i_2] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) var_14);
                            var_18 = ((/* implicit */long long int) var_3);
                            arr_24 [i_6] [14LL] [i_1] [i_1] [i_0] = 3346271416U;
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (var_9)));
                            arr_27 [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [i_5] [i_7]))))) : (((/* implicit */int) var_10))));
                            arr_28 [i_5] [i_5] [i_5] [i_0] [i_5] &= ((/* implicit */unsigned char) arr_26 [4U] [i_0] [i_2] [i_2]);
                            arr_29 [i_0] [i_1] [i_1] [i_5] [(signed char)17] [(unsigned char)4] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_5] [i_2]))) == (arr_3 [(short)11] [(signed char)20]));
                            arr_30 [i_0] [i_2] [i_1] = arr_25 [i_7] [i_1] [(_Bool)1];
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            arr_33 [(unsigned char)16] [i_1] [i_0] [i_1] [i_1] [(signed char)12] |= arr_21 [i_0] [i_1] [i_0] [i_5] [i_8];
                            var_20 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_5] [(_Bool)1])) : (((/* implicit */int) var_5))))));
                            arr_34 [i_1] [i_1] [i_2] [i_5] [i_8] [i_2] [i_2] = ((/* implicit */signed char) var_4);
                        }
                        arr_35 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        arr_36 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)111))));
                    }
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((short) arr_20 [i_0])))));
                }
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_18 [i_0] [i_1])));
                arr_37 [(signed char)4] [i_0] [i_0] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_8 [(unsigned short)7] [i_0] [(unsigned short)11] [i_1] [3LL] [i_1]), (((/* implicit */unsigned char) var_10))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1] [(unsigned char)4] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) var_12))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_0);
}
