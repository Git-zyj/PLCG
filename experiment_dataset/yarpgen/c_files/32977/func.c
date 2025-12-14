/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32977
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
    var_12 = ((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(1492713193))))))))));
    var_13 = ((/* implicit */unsigned short) -1492713188);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)36046)) ? (((((/* implicit */_Bool) -1492713193)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11883111200048265928ULL))) : (((var_0) << (((4858437250657774382LL) - (4858437250657774326LL))))))))));
                            var_15 = ((/* implicit */unsigned short) 1492713193);
                            var_16 = ((/* implicit */_Bool) var_11);
                            arr_10 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4] [i_5])) ? (((((/* implicit */_Bool) (signed char)102)) ? (var_3) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14411)))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30332)) & (((/* implicit */int) (unsigned short)25033))))) > (((var_7) ? (arr_12 [i_0 + 4] [i_0] [1ULL] [i_0 + 3]) : (arr_12 [i_0 + 4] [i_0] [i_0] [i_0 + 2]))))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((6584222446996613086ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(short)4] [i_0] [i_0 - 1] [(_Bool)1] [i_0 - 1]))))) == (((/* implicit */unsigned long long int) var_5)))))));
                            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((1492713193) <= (((/* implicit */int) var_4))))) + (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_0] [(short)15] [i_0] [i_1] [i_1]);
                arr_17 [16U] [16U] |= ((/* implicit */unsigned char) arr_0 [i_0] [i_0 + 4]);
            }
        } 
    } 
}
