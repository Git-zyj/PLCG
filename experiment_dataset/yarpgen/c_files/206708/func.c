/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206708
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
    var_17 -= ((/* implicit */unsigned char) (+((+(((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_14), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0))) > (max((var_3), (((/* implicit */unsigned long long int) var_10))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (((unsigned int) var_13))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_7))))), (((((/* implicit */int) var_7)) % (((/* implicit */int) var_13))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) max(((-(var_16))), (((/* implicit */unsigned int) ((_Bool) var_3)))));
                                var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_13)))) ? (max((((/* implicit */unsigned long long int) var_14)), (var_15))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_4))))))));
                                var_20 ^= ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_2)))))) * (var_3))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((var_4) | (var_4))))));
                            var_23 = ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) % (var_16));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            arr_23 [i_1] [i_1] [i_7] [i_5] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_14)))))) * (var_0)));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            arr_27 [i_0] [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_11)) - (144))))) != (((/* implicit */int) var_13))));
                            var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                            arr_28 [i_0] [3LL] [i_2] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) ((var_7) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_27 ^= ((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            arr_33 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
                        }
                        arr_34 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_0) : ((+(var_15)))));
                        arr_35 [i_1] [i_5] = ((/* implicit */unsigned short) ((var_7) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_0))) : (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
                    }
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) > ((+(var_1))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) (!(max((((_Bool) var_10)), ((!(((/* implicit */_Bool) var_10))))))));
    }
}
