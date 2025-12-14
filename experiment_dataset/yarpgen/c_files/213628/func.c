/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213628
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) >> (((/* implicit */int) (_Bool)1)))))))))))));
    var_18 += ((/* implicit */signed char) var_14);
    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) (signed char)116)) || ((_Bool)1));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_8)))))) ? (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_9)) : (var_5))), (((/* implicit */long long int) (-(var_9)))))) : (((/* implicit */long long int) max(((+(var_10))), (((/* implicit */unsigned int) (~(var_0))))))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_8 [i_0] [i_0] [i_2] [4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)11))));
                        var_22 = ((/* implicit */int) min((var_5), (((/* implicit */long long int) (-((-(var_11))))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_3))), (((/* implicit */long long int) (-(var_9))))))) ? ((~((+(-13LL))))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((-(((/* implicit */int) var_2)))))))));
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((4294967295U) + (((/* implicit */unsigned int) 529886218)))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (0U) : (0U)));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            var_25 += ((/* implicit */unsigned int) var_5);
                            var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
                            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + ((+(var_9)))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-((+(((/* implicit */int) var_6)))))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_12)))))))))));
                            arr_24 [i_0 - 1] [i_1] [i_0] [15] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7))));
                        }
                        var_30 &= ((/* implicit */unsigned short) var_11);
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) var_12);
                        var_32 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_14)))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_16))))))))))));
                    }
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (((~((~(((/* implicit */int) var_13)))))) - ((+(((((/* implicit */int) var_7)) - (((/* implicit */int) var_1)))))))))));
                }
            } 
        } 
    } 
    var_35 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-1))));
}
