/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2334
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
    var_17 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) 1U)) / (759629243035629309ULL))))), (4294967295U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_14)) : (((var_16) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [(unsigned char)16]))))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)25794)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [(signed char)22] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (short)-30)) > (2094578429)))) <= (((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_4] [i_4]))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((-(((/* implicit */int) ((unsigned short) arr_2 [9U] [i_1]))))) - ((-(((/* implicit */int) (unsigned short)23149)))))))));
                            var_21 = ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((2094578429) ^ (((/* implicit */int) var_2)))))));
                            var_22 = ((/* implicit */unsigned int) var_11);
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+((+(11U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            {
                arr_26 [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) 2094578429)) + (((1760893119U) - (262112U)))));
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    for (long long int i_11 = 2; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((((/* implicit */long long int) 2137017347U)) / (4654433043475319269LL))))))));
                                var_25 |= ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
