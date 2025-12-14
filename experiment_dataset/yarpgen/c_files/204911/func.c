/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204911
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
    var_19 ^= (~(((/* implicit */int) var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) ((unsigned char) 2022475608))) : ((+(arr_2 [i_0] [2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */signed char) ((unsigned char) var_15));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [0U] [i_2 - 1] [i_3 - 1] [i_3] [i_4 - 1] [i_4 + 1])) || (((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 2]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (short)24128))));
                    arr_15 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */int) var_16);
                }
            } 
        } 
        var_23 = ((((/* implicit */int) (unsigned char)175)) / (arr_3 [i_0]));
    }
    var_24 = ((/* implicit */long long int) var_16);
}
