/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205743
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)220)), (1492368397350419402LL)));
                                arr_15 [i_0] [i_0] [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) (((~(3523581450092627415ULL))) - (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_2]))));
                                arr_16 [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */long long int) (short)-18242);
                                arr_17 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((arr_1 [i_3]) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_0] [i_2]))))) != (((((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) & (((/* implicit */int) (_Bool)1)))))))) : (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) ^ (65535U))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((65535U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)5))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) 4025747902U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))))));
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((unsigned char) var_14));
}
