/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37935
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */int) ((short) max((((1392707601U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))), (((/* implicit */unsigned int) (~(-702143788)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2] [i_1])) ? (arr_9 [i_0] [i_4] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3])))))));
                            var_17 ^= ((((/* implicit */_Bool) var_3)) ? ((~(arr_4 [i_0] [i_1] [i_2] [i_0]))) : (((/* implicit */int) (_Bool)1)));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_9 [i_0] [i_3] [i_1] [i_0]) | (arr_9 [i_0] [(short)0] [i_2] [(short)0]))))));
                            arr_15 [i_0] [i_0] [3ULL] [10U] [i_5] = ((/* implicit */unsigned long long int) (~(max((arr_13 [i_0] [i_2] [(signed char)6] [i_5]), (((/* implicit */unsigned int) -639618665))))));
                        }
                        var_19 ^= ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_3]))))) ? (((/* implicit */int) var_13)) : (min((((int) arr_2 [i_3] [i_2])), (((/* implicit */int) arr_0 [i_2]))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) 977533206);
}
