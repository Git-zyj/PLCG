/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223330
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
    var_11 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9)))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_10))))))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = var_9;
                    var_15 = ((((/* implicit */int) var_8)) / (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-94)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((short) -8584227171997745186LL)))));
                        arr_10 [i_0] [i_0] [11] [i_0] [11] [(unsigned char)3] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) == (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_17 += ((/* implicit */_Bool) arr_9 [i_2 - 3] [i_2 - 4] [i_4 - 1] [i_4 - 1]);
                        arr_13 [i_4 - 1] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4 - 1] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_9 [4U] [i_2 + 1] [i_4 - 1] [i_2 + 1])));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) var_10);
    }
}
