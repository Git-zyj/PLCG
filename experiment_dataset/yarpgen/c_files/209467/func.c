/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209467
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
    var_12 += var_5;
    var_13 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_9)))));
    var_14 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)27)) - ((-(((/* implicit */int) (unsigned char)229))))));
                arr_6 [i_0] = ((/* implicit */long long int) (!((!((_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_16 [i_2] [i_3] [4LL] = ((/* implicit */signed char) ((min((arr_1 [i_2] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_7 [(short)4]))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9853)))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min(((-(max((arr_13 [i_4] [i_4] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned short) (unsigned char)231))))))))));
                    var_17 = ((/* implicit */unsigned int) var_4);
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_27 [i_2] [i_3] [i_2] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)11)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (short)-12703)) : (((/* implicit */int) (unsigned char)4))))) || (((/* implicit */_Bool) min((max((arr_14 [(unsigned short)4] [(unsigned short)2] [i_5]), (((/* implicit */long long int) (unsigned char)254)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [(unsigned short)4] [i_2])) || (((/* implicit */_Bool) (short)-1)))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_7))));
                    var_20 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) : (arr_2 [i_2] [i_3] [i_8]))) - (arr_22 [(unsigned short)12] [i_8])));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((int) 31U)))));
                }
            }
        } 
    } 
}
