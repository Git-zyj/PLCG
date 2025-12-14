/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34397
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) ((long long int) (unsigned char)0))))));
                    arr_6 [(short)16] [(short)16] &= ((/* implicit */long long int) -17);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (short)24576))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (short)-24582)) != (((/* implicit */int) (short)24589))))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) ((((/* implicit */long long int) var_8)) / (arr_12 [i_0] [i_1] [i_3] [(short)0] [i_0]))))) * (4294967295U)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((unsigned short) (+(((/* implicit */int) (signed char)-7)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_6);
    var_26 = ((/* implicit */unsigned short) (unsigned char)163);
}
