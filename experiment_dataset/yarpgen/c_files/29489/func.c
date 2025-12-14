/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29489
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 ^= ((/* implicit */signed char) ((int) (~(max((3325924818U), (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))))));
                var_12 *= ((/* implicit */unsigned char) (signed char)-1);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))));
                arr_5 [(signed char)13] [i_1] [(signed char)13] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_5))))) * (((unsigned int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_13 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? ((+(-1847645723))) : (((/* implicit */int) (unsigned short)49892)))))));
                    var_14 ^= ((/* implicit */unsigned int) var_9);
                }
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) max((1406773972), (((/* implicit */int) (_Bool)1))));
                                arr_22 [i_2] [i_2] [i_5] [i_2] [i_3] = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) max((var_16), (((signed char) var_0))));
                arr_23 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_2 - 1])) || (((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [15])))) ? (((unsigned long long int) (+(((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((-229644547) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))))))))));
            }
        } 
    } 
}
