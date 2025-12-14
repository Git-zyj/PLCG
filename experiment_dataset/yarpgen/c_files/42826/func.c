/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42826
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 *= ((/* implicit */signed char) (unsigned char)64);
                                var_12 += ((/* implicit */unsigned short) (+((~(2819089633U)))));
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 + 2] [i_2 - 2] [(short)6] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_11 [i_2 - 1] [(short)2] [i_2 - 2] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) 348552747)) / (-10LL)));
    var_15 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)80)) ? (5ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                    var_17 *= ((/* implicit */short) ((int) min(((+(((/* implicit */int) (unsigned short)64321)))), (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
