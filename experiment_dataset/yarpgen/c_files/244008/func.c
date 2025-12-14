/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244008
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 4050793131U)) && (((/* implicit */_Bool) var_14))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (8923184222784029602ULL)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)25231), (((/* implicit */short) (unsigned char)116))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 4050793132U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((244174164U) > (4050793131U)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (arr_9 [i_1] [i_1] [i_5] [i_1])))), (arr_8 [i_5] [i_1] [i_0] [i_0]))), (((((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [6U] [i_0]))) : (var_11))) - (((4050793132U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))))));
                    arr_18 [i_0] [i_0] = ((/* implicit */int) ((short) ((short) 244174165U)));
                }
                for (unsigned short i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    arr_21 [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_0 [i_6] [i_0]))))))))));
                    arr_22 [(signed char)0] = ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (4050793114U)))) / (((long long int) (short)-6422)));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    arr_27 [14] [i_1] [i_0] [14] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                arr_34 [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30))))) ? (((/* implicit */unsigned long long int) ((long long int) ((signed char) 4050793142U)))) : (arr_10 [i_9] [i_1] [i_0] [i_8] [i_9])));
                                arr_35 [4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)0] [i_8] [i_9])) ? (((/* implicit */int) arr_20 [i_1] [(unsigned char)0] [i_8] [i_9])) : (((/* implicit */int) arr_20 [i_9] [(short)6] [(short)6] [i_1]))))) ? (((/* implicit */int) max(((unsigned short)10549), (((/* implicit */unsigned short) (signed char)-60))))) : (((/* implicit */int) max(((signed char)10), ((signed char)-30))))));
                                arr_36 [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((short) (signed char)30))))) | (((/* implicit */int) (unsigned short)21005))));
                                arr_37 [i_0] [i_7] [i_9] [i_8] [i_0] [i_0] [i_7] = ((/* implicit */int) max((max((244174159U), (244174150U))), (((/* implicit */unsigned int) ((((arr_10 [i_9] [i_8] [i_0] [i_1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned short)21023)) ? (-234429716) : (((/* implicit */int) (signed char)-127)))) : (max((arr_11 [i_0] [i_1] [i_7]), (((/* implicit */int) (unsigned short)44531)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
