/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239738
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (1610612736U) : (var_17))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)40)), (var_17)))) : ((+((-(var_8)))))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_3] [i_1 + 1] [i_3] [i_3] [i_1] = ((/* implicit */int) var_6);
                        arr_11 [i_1] [i_1] [i_2 - 2] [i_2 - 2] = ((/* implicit */short) var_8);
                        var_20 = var_4;
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_12))))));
                        arr_15 [(_Bool)1] [i_1] [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((int) max((var_8), (((/* implicit */long long int) var_18)))));
                        arr_16 [i_1] [i_1] [i_1 + 1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) var_9);
                    }
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_1] [0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) var_17)) : (max((var_1), (((/* implicit */long long int) (unsigned char)0))))))) ? (((((/* implicit */_Bool) 2684354559U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (12772579545073837730ULL)));
                    }
                    for (signed char i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [(short)16] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) var_15)));
                        var_22 = ((/* implicit */unsigned char) var_3);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))) : (var_1)));
                                var_24 -= ((/* implicit */short) max((((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) var_2))), (((((/* implicit */_Bool) var_6)) ? (4294967274U) : (((/* implicit */unsigned int) var_7)))))))));
                                var_25 &= ((/* implicit */short) max(((-(var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (5910760222746705720LL))))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) var_12)), (var_16))))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((short) var_5))))))));
                                arr_28 [i_1] [i_1] [i_2] [i_1] [i_8] [i_8] = ((/* implicit */_Bool) max((max((22U), (((/* implicit */unsigned int) (short)15065)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_0)), (var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_1))));
}
