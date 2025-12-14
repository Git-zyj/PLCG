/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30304
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)28510))));
                    var_19 ^= ((/* implicit */long long int) var_7);
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_1] [17ULL] = ((/* implicit */unsigned long long int) ((arr_4 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) (_Bool)0);
                                arr_15 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_5]))) % (((unsigned long long int) arr_6 [i_1] [i_1] [(unsigned short)0])));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_4)));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] = ((/* implicit */unsigned int) 2083157253291809329LL);
                                arr_24 [i_0] [i_1] [(signed char)0] [i_6] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_1 [i_0] [i_1])));
                            }
                        } 
                    } 
                }
                arr_25 [4U] [i_1] [18ULL] &= ((((/* implicit */long long int) var_6)) != (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_16))))) : (min((-5868313333878653850LL), (((/* implicit */long long int) var_12)))))));
                var_20 -= ((/* implicit */_Bool) arr_11 [i_0] [1LL]);
                var_21 ^= ((/* implicit */short) var_2);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_2);
}
