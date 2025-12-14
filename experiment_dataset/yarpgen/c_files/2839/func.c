/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2839
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) min((((/* implicit */unsigned int) var_5)), (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_8) : (((/* implicit */unsigned int) -2049131939)))), (max((4294967295U), (((/* implicit */unsigned int) var_5))))))));
                var_12 *= ((/* implicit */short) arr_4 [i_1]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) (signed char)-16))))), (max((((/* implicit */long long int) var_6)), ((-9223372036854775807LL - 1LL))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_15 [17ULL] = ((/* implicit */_Bool) -2420272243468330025LL);
                    var_14 = ((/* implicit */unsigned char) ((3999957060U) | (((/* implicit */unsigned int) ((int) arr_8 [i_4 - 2] [i_2 - 2])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_15 = max((2420272243468330026LL), (((/* implicit */long long int) ((var_10) >> (((7353834099571882484LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_16 = ((/* implicit */unsigned short) var_8);
                        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [18] [18]))));
                        arr_19 [i_5] [i_3] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (31941))) - (6)))))) ^ (arr_12 [i_2 - 1] [i_2 - 2] [i_2 + 1])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_6] [i_4 - 2])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_21 [i_6] [i_4 + 1] [i_6] [i_4 + 1]))));
                        var_18 = ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])) > ((+(((/* implicit */int) arr_11 [i_4] [18U] [i_4] [i_4 - 1])))));
                        var_19 |= ((/* implicit */_Bool) var_5);
                    }
                    var_20 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_2] [i_3] [i_4 - 1] [12U] [i_3] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2420272243468330021LL)))));
}
