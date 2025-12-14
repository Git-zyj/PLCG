/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232805
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) (~((~(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
                arr_4 [i_1] = ((/* implicit */long long int) min((min(((+(arr_2 [(unsigned char)12] [(unsigned char)12] [i_0]))), (((((/* implicit */int) (unsigned short)27299)) >> (((arr_2 [i_1] [i_1] [i_0]) + (438188856))))))), (((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_1])))) >> (((((/* implicit */int) var_7)) - (64)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned int) ((long long int) (+((+(-1344581221802617081LL))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) 96340353428435937LL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) % (18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) min((arr_2 [i_2] [i_2] [i_2]), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_7 [i_2])) + (((/* implicit */int) var_2)))))))));
                                var_13 ^= ((long long int) arr_5 [i_6 - 1]);
                            }
                        } 
                    } 
                    arr_17 [i_2] [(short)1] [i_2] = ((/* implicit */signed char) ((long long int) 4294967295U));
                    arr_18 [(unsigned short)10] [(unsigned short)10] [0] [i_2] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1])))), (((var_2) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
}
