/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40898
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) var_2)), (((unsigned int) min((var_11), (((/* implicit */unsigned long long int) var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) 1533895796);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */short) ((arr_1 [i_0 + 1]) >> (((((((/* implicit */_Bool) (short)-11373)) ? (14465321902591349185ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))) - (14465321902591349169ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (4294967266U)))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned long long int) var_3)))));
                            var_18 = ((signed char) 22931096U);
                        }
                        arr_14 [i_0] [i_2] = ((/* implicit */int) (unsigned char)236);
                        arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_1 + 1] [i_0])) ^ (((/* implicit */int) (unsigned short)41989)))))));
                    }
                }
            } 
        } 
    }
}
