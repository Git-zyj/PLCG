/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43430
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
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) & ((~(max((0ULL), (15ULL)))))));
    var_19 = ((/* implicit */unsigned int) ((0) >> (((((/* implicit */int) ((unsigned short) var_11))) - (28110)))));
    var_20 = (!(((/* implicit */_Bool) (signed char)75)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 -= ((/* implicit */unsigned int) var_16);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_22 = ((((long long int) (unsigned char)98)) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_3 + 1] [i_3 + 1] [i_3] [i_4]) > (((/* implicit */int) var_11)))))));
                                var_23 = (!((!(((((/* implicit */unsigned long long int) 5)) > (28ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
