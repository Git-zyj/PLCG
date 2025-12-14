/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19952
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) var_2)));
                                arr_19 [i_2] [i_2] [i_4] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (7352419451556301626ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)77)) % (((/* implicit */int) (unsigned short)60750)))))))));
                                var_12 = ((/* implicit */unsigned int) var_10);
                                var_13 *= ((/* implicit */unsigned char) -342721321660450413LL);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)4785));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((int) 1823690330U))));
                                var_16 = ((/* implicit */_Bool) (unsigned short)4809);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) 2471276957U);
                    arr_26 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [i_2 + 2] [i_1 - 1] [i_2 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 450179740U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4]))) : (var_0)))) : (((((/* implicit */_Bool) (unsigned short)60768)) ? (-6190821714458323044LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60750))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned int i_9 = 4; i_9 < 19; i_9 += 2) 
            {
                {
                    arr_35 [i_9] [i_9] |= arr_29 [i_8] [i_7];
                    arr_36 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */int) ((unsigned int) (unsigned short)60750));
                }
            } 
        } 
    } 
}
