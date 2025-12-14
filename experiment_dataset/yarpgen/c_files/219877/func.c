/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219877
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (_Bool)1))));
                                arr_13 [(unsigned char)2] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned short)0] [16LL] [(unsigned char)2] = ((((/* implicit */_Bool) (unsigned char)140)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_10 [i_0] [i_4 + 1] [i_3] [i_3] [i_2]))) : (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_3] [i_3] [i_2] [i_4 + 1] [i_4 - 1]))));
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((var_2) ? (((var_0) - (var_0))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [18]))) <= (2564021968U))) ? (((int) -202967201008591251LL)) : ((~(((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_6] [i_6] [i_6]))))))) : (((3209380790U) * (((arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]) ? (arr_6 [i_6] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17322)) ? (((/* implicit */int) (short)-7924)) : (((/* implicit */int) (unsigned char)116))))) ? (5878972307914410438ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = var_7;
    /* LoopNest 3 */
    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        for (int i_8 = 2; i_8 < 13; i_8 += 4) 
        {
            for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                {
                    arr_27 [i_7] [(unsigned char)7] [i_7] = ((/* implicit */long long int) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) arr_15 [i_7] [i_8 + 1] [i_8] [i_11] [i_10] [i_8]);
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((var_8) ? (-679727307) : (((/* implicit */int) arr_31 [i_7] [i_9] [i_9] [i_9]))))) ^ (arr_6 [i_7] [(signed char)9] [(unsigned char)11] [(unsigned char)11])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_10))));
    var_21 = ((/* implicit */unsigned char) min((3209380791U), (((/* implicit */unsigned int) -429820400))));
}
