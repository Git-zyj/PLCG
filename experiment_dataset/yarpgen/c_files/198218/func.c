/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198218
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
    var_20 = ((/* implicit */signed char) var_19);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((arr_2 [i_0]) << (((16381308394127330663ULL) - (16381308394127330621ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 2] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) <= (2065435679582220963ULL)))))));
                                var_22 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) & (2065435679582220963ULL)))));
                                var_23 = ((/* implicit */unsigned short) ((signed char) arr_12 [i_1 + 4] [9LL] [i_1 + 4] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 2]));
                                arr_14 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)48)) << (((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0])) >> (((((/* implicit */int) arr_10 [i_2] [i_2] [i_1 + 4] [i_1 + 4] [i_1] [5ULL] [i_0])) - (64))))) > ((+(((/* implicit */int) (unsigned char)37))))));
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_16 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
    }
}
