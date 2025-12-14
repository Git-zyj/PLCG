/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203290
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
    var_16 = ((/* implicit */unsigned int) var_3);
    var_17 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) 255ULL);
                        var_18 = ((/* implicit */short) 0);
                        var_19 = ((/* implicit */unsigned short) 3107819011765746000ULL);
                    }
                    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        var_20 = 4824687324140615691ULL;
                        var_21 *= ((/* implicit */signed char) 4824687324140615688ULL);
                        var_22 = ((/* implicit */unsigned long long int) (signed char)-35);
                        arr_14 [i_0] [0ULL] [i_1] [i_0] [0ULL] |= ((/* implicit */unsigned long long int) 1);
                    }
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (signed char)54);
                        var_24 |= ((/* implicit */signed char) (short)-21704);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned char)40))));
                            var_26 |= ((/* implicit */unsigned int) (short)-32551);
                            var_27 += (signed char)0;
                        }
                    }
                    arr_20 [i_0] [i_1] [i_1] [i_1] |= (signed char)-97;
                }
            } 
        } 
    } 
    var_28 = var_8;
}
