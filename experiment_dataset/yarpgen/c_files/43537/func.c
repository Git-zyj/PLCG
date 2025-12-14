/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43537
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_1 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))), (((long long int) arr_5 [i_1]))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2] [i_2])) - (((/* implicit */int) arr_5 [i_2]))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5] [i_5])) ? (arr_10 [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_5])))));
                        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2]))));
                    }
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_5 [i_2])))))));
                }
            } 
        } 
    }
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1857679539)))) || (((_Bool) var_8))));
}
