/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3226
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) 2046646618369598328LL);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2046646618369598330LL)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) 2315810869U)), (-2046646618369598353LL)))) ? (((/* implicit */int) min(((signed char)-22), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_3]))))) : ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!((_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) >= (-2046646618369598330LL)));
                    var_20 = ((/* implicit */long long int) (-(((unsigned int) ((((/* implicit */_Bool) var_10)) ? (725982271) : (((/* implicit */int) var_10)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_14 [i_5] [i_1])))));
                    /* LoopSeq 3 */
                    for (short i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        arr_18 [i_6] [i_5] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                        arr_19 [i_0] [i_1] [i_1] [i_6] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (2046646618369598333LL)))) ? (arr_10 [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((int) arr_7 [i_6 + 1] [i_6 + 2] [i_6 + 3] [13U]));
                    }
                    for (signed char i_7 = 3; i_7 < 22; i_7 += 4) 
                    {
                        arr_23 [(unsigned short)21] [(unsigned short)21] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18ULL))));
                        arr_24 [i_0] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_1] [i_5]))));
                        var_23 -= ((/* implicit */unsigned int) ((short) 4294967295U));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */int) (_Bool)1);
                        var_25 = -2046646618369598329LL;
                    }
                    arr_29 [i_0] [i_0] [10ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((3132358037957090650ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_21 [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 - 1]))));
                                arr_34 [i_0] [i_1] [i_1] [(signed char)7] [1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1048575U)) ? (arr_33 [i_0] [i_9] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) (~(var_1)));
                }
                var_28 = ((/* implicit */unsigned int) max((min((var_9), (((((/* implicit */long long int) ((/* implicit */int) (short)-17208))) - (-2046646618369598329LL))))), (((/* implicit */long long int) min((((int) arr_7 [i_1] [i_1] [i_1] [i_0 - 1])), ((-(((/* implicit */int) (short)-16384)))))))));
                arr_35 [i_0 + 1] [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) (!(((var_9) == (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_1] [i_1] [i_0]))))))));
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_0 + 2])) ? (((unsigned int) ((unsigned int) var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16394))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((var_3), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (1972170020)))) : (max((((/* implicit */unsigned long long int) 3201221084U)), (var_15))))));
    var_31 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((var_10), (((/* implicit */short) (_Bool)1))))) ? (((unsigned long long int) 17514905505157209943ULL)) : (((/* implicit */unsigned long long int) ((long long int) 0ULL))))), (((/* implicit */unsigned long long int) var_10))));
}
