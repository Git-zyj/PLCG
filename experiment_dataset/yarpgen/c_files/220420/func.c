/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220420
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) * (max((462340718758898197ULL), (((/* implicit */unsigned long long int) 1386580298229542339LL)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) & (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_11 -= ((/* implicit */int) ((max((max((((/* implicit */unsigned long long int) (signed char)-1)), (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) (unsigned short)36099)))) << (((((/* implicit */int) (unsigned char)250)) - (196)))));
                                var_12 = ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_7 [i_0] [(signed char)16] [i_2])), ((short)32767))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)12779)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) arr_7 [i_3] [i_2] [i_2])))), (((/* implicit */int) (short)0))))) : (((((/* implicit */_Bool) arr_11 [i_4] [(unsigned short)9] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)98), (((/* implicit */unsigned char) arr_9 [i_0] [i_1] [(unsigned short)14] [i_3] [i_4])))))) : (((unsigned int) 6472335752395544502ULL)))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (+((+(((unsigned int) (signed char)-18)))))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned short)0)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (arr_13 [i_0] [i_0] [0LL] [i_0])));
                    arr_14 [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned char) (signed char)-55))))) ? (arr_11 [i_5] [i_5] [(unsigned short)3] [(unsigned short)3] [i_5 - 1]) : (arr_5 [i_1]))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_0] [i_5] [i_5] [i_5 - 1])), ((unsigned short)41576)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5 + 1] [i_5 + 1]))) : (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_5 + 1])), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                    var_16 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_8 [i_0] [i_0] [(unsigned char)10] [i_1] [(unsigned char)3]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))), (((/* implicit */long long int) (+(1381824075U))))))) ? (((((/* implicit */_Bool) min((arr_11 [i_1] [2U] [i_1] [2U] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)45936))))) ? (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) (unsigned char)250))))) : (arr_5 [i_5 - 1]))) : (max((arr_5 [i_1]), (((/* implicit */unsigned long long int) ((arr_11 [i_1] [i_1] [i_1] [i_1] [16]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))))))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((var_5) & (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), ((-(1609583832U))))))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) var_7)) < (((/* implicit */int) (unsigned char)0))))), (var_6))))));
    var_20 = var_2;
    var_21 = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) (unsigned short)22702)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) : (4294967295U)))))));
}
