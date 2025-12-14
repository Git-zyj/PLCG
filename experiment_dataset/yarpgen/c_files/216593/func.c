/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216593
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
    var_18 &= ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) var_11)) : (min((((/* implicit */long long int) max((var_13), (var_4)))), (min((var_10), (((/* implicit */long long int) var_12))))))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max(((~(var_14))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_11)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_21 = arr_0 [i_0 + 1] [i_0 + 2];
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) (short)-28124);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) arr_8 [(signed char)17] [i_1] [i_0 - 1] [i_1]))), (((((/* implicit */_Bool) ((var_12) * (((/* implicit */int) arr_2 [i_2] [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_1 [i_2 + 1] [i_2 - 2]))))))));
                        var_23 += 3993209585U;
                        var_24 *= ((max((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 3573026159054813578LL)))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3]))))));
                    }
                }
            } 
        } 
    } 
    var_25 ^= ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (var_12)))) ? (max((var_14), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) << (((((/* implicit */int) var_6)) - (36167))));
}
