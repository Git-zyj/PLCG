/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201145
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) min((var_4), (((/* implicit */short) (!(((/* implicit */_Bool) var_0)))))));
                arr_9 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((short) min((((((/* implicit */_Bool) 8945651926080377160ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_15 = var_1;
                                var_16 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_3 [i_0] [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 3) 
        {
            {
                arr_24 [i_5] [(short)2] [i_6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_5]))))) : (max((max((var_3), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) ((arr_6 [i_5] [i_5] [i_6]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                arr_25 [i_5] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
}
