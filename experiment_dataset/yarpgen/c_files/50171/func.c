/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50171
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) var_7);
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2]))));
                                var_20 = ((/* implicit */int) arr_9 [i_3] [i_1]);
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_1] [6] [i_0 + 1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [(signed char)12])) ? (((/* implicit */long long int) (-(var_12)))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned short)512)) : (((/* implicit */int) (short)-29377))))));
                }
                var_22 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 2) 
        {
            {
                arr_18 [i_5] = ((/* implicit */unsigned short) var_10);
                arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10311607184900529454ULL)) ? (((/* implicit */int) (unsigned short)7193)) : (((/* implicit */int) (short)29360))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_6]))) ^ (15ULL)))))) ? (((arr_17 [i_6 - 4] [i_6 - 2] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57256)))) : (((/* implicit */int) var_8))));
            }
        } 
    } 
}
