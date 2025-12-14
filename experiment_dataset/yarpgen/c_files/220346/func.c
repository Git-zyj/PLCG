/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220346
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
    var_15 = (unsigned char)240;
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)34177)) : (((/* implicit */int) arr_1 [i_1]))))), (var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_0 [i_0]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = (unsigned char)4;
                                arr_12 [i_0] [i_1] [(short)11] [i_3] [(short)11] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((arr_5 [4LL] [i_1 + 1] [i_0]) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_6)))) >> (((max((((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned long long int) 2147483647))))), (var_9))) - (1986752837U)))))) : (((/* implicit */signed char) ((((((arr_5 [4LL] [i_1 + 1] [i_0]) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_6)))) + (2147483647))) >> (((max((((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned long long int) 2147483647))))), (var_9))) - (1986752837U))))));
                                arr_13 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) max(((unsigned char)200), (((/* implicit */unsigned char) (signed char)-117))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [(unsigned char)3] = ((/* implicit */int) (unsigned short)31359);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (signed char i_6 = 3; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)116))))), (min((((/* implicit */unsigned long long int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) var_7))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_0 + 1] [(unsigned char)2] [i_2] [i_0] [i_2])) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (short)-24756)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_12)))))))) == (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)-107))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((max((((/* implicit */short) var_13)), (var_10))), (max((((/* implicit */short) var_0)), (var_4))))))) | (max((((((/* implicit */_Bool) var_4)) ? (9205333864092866649LL) : (((/* implicit */long long int) 3U)))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)117))) / (-1902971033220389503LL)))))));
}
