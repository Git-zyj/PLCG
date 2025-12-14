/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246325
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)29))));
                    arr_10 [i_0 - 3] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)160))))));
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (arr_7 [i_1] [i_1] [i_0]) : (var_1))) ^ (max((var_14), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) arr_3 [i_0]);
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_19 ^= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [18])))), (((((/* implicit */int) (unsigned short)49152)) >> (((2097151U) - (2097123U))))))), ((~((+(((/* implicit */int) (unsigned short)63845))))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [13ULL] [i_1])) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_3]))) : (((/* implicit */int) var_10)))))));
                        arr_13 [i_1] [i_1] [i_1] [i_3] |= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2]))))) && (((/* implicit */_Bool) 1795908301))))), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11209))) : (var_1))), (((/* implicit */unsigned int) (-(1023)))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_1] [i_4]))))) ? (4201751879649756891ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) - (14244992194059794724ULL))))))));
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)95)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_9)))) : (((/* implicit */int) (short)-4849))))));
                        arr_17 [i_0] [i_1] [i_0 + 3] &= ((/* implicit */int) 3703890444645448023ULL);
                        var_22 = ((/* implicit */short) min((((/* implicit */unsigned short) var_13)), (((unsigned short) var_7))));
                        arr_18 [i_2] [i_1] [i_0] [i_1] [i_2] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned int) var_13)), (max((3956221973U), (27U)))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) arr_1 [16U]))))))))));
                        var_24 = ((/* implicit */unsigned char) arr_15 [i_0 - 1]);
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (signed char i_7 = 4; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]);
                                var_25 = ((/* implicit */unsigned short) (unsigned char)23);
                                var_26 = ((/* implicit */short) var_15);
                                arr_26 [i_0] [i_0] [i_0] [3ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) (_Bool)1)))))) <= (3794253348U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_7);
    var_29 *= ((/* implicit */short) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
}
