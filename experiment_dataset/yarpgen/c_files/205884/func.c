/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205884
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
    var_16 = (+(((unsigned int) ((var_11) ? (893066777U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_17 = var_12;
    var_18 = ((/* implicit */short) (-((+(((unsigned int) 16786794919375704235ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) 893066762U);
                                var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(893066762U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 893066794U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8877777822075306908ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)59376)), (var_14)))) : (max((var_1), (((/* implicit */unsigned long long int) var_6))))))));
                                arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_6)))), ((~((~(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
                {
                    arr_13 [(signed char)7] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (max((27ULL), (((/* implicit */unsigned long long int) 2241570959U))))));
                    var_21 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (2341407907U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48230)))))))));
                }
            }
        } 
    } 
}
