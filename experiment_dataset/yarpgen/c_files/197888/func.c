/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197888
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 |= ((unsigned int) max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_16 += (unsigned char)119;
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) 15632609476084508866ULL)) ? (arr_5 [i_1]) : (arr_4 [i_1]))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (arr_5 [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1] [i_1])))))))) ? (15632609476084508864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2]))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1708467330)) / (878619736U)))) ? (((unsigned int) arr_9 [i_1] [i_2 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_1] [i_4 - 1]), (arr_9 [i_1] [i_2 + 1])))))));
                        var_20 ^= var_4;
                        arr_15 [i_1] [i_2] = ((/* implicit */unsigned int) ((var_10) != (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) arr_7 [i_1] [i_2] [i_3]))))));
                        arr_16 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1])), ((+(min((arr_2 [i_1]), (((/* implicit */long long int) arr_8 [i_4]))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) arr_17 [i_5] [i_5]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_5]))) - (var_10))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_21 *= ((/* implicit */_Bool) arr_18 [i_5]);
        arr_21 [i_5] &= ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_19 [i_5] [i_5])), (var_6))) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_5] [i_5]))))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)113)) - (((/* implicit */int) arr_19 [i_5] [i_5]))))) : (arr_18 [i_5])))));
        var_22 = ((/* implicit */unsigned int) ((long long int) max(((-(878619736U))), (var_7))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) > ((+(var_9)))));
    var_24 = ((/* implicit */unsigned long long int) var_0);
    var_25 = ((/* implicit */signed char) var_5);
}
