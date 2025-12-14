/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229196
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((arr_0 [i_1]) > (((/* implicit */unsigned int) ((((/* implicit */int) ((var_3) || (((/* implicit */_Bool) arr_6 [i_0 + 1] [3LL] [(short)0] [12U]))))) | (((/* implicit */int) arr_2 [i_0])))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_2] [(signed char)0]);
                    var_10 ^= ((/* implicit */unsigned char) 1802190530);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)62933))) ? (((/* implicit */long long int) ((((int) 1802190530)) & (((/* implicit */int) arr_11 [i_3 + 4] [i_0 - 2] [i_2]))))) : (max((-3703783119514838141LL), (((/* implicit */long long int) -1802190530))))));
                                var_12 = ((/* implicit */signed char) arr_9 [i_0] [i_3] [i_0]);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) arr_6 [4] [4] [i_2] [4]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_7);
    var_15 ^= ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_16 = ((/* implicit */int) var_6);
        arr_20 [i_5] = arr_19 [i_5];
        var_17 = ((/* implicit */unsigned short) var_3);
    }
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_1))));
}
