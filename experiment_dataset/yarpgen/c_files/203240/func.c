/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203240
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1022U)) : (min((((/* implicit */long long int) 4294966255U)), (-2709516200925599697LL))))))))));
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (min((((((arr_1 [i_0 - 2] [i_0 + 1]) + (9223372036854775807LL))) >> (((arr_1 [i_0] [i_0 + 1]) + (1280360853596699936LL))))), (((((/* implicit */_Bool) var_6)) ? (arr_1 [14LL] [i_0 + 1]) : (arr_1 [4LL] [i_0 + 1])))))));
        var_13 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) var_3);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (long long int i_4 = 4; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (var_1)));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1])))));
                        var_16 = ((/* implicit */unsigned long long int) (unsigned char)255);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 13; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((unsigned int) var_4)))));
                        }
                        arr_17 [i_2] [4LL] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-16890)))))));
                    }
                } 
            } 
        } 
        var_19 &= ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
}
