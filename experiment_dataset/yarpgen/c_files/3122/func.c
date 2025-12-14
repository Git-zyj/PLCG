/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3122
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_0 [(signed char)1]))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [(_Bool)1] [i_0]) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))) : (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0] = (((-(arr_0 [i_3]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_2]))));
                        arr_13 [i_0] [i_0] [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) (+(((arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3])))))));
                        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) 241484114)) : (9926413066913927517ULL)));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0]))) : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))))));
    }
    var_22 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-64)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (1712302667))) : (((/* implicit */int) (signed char)-64))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((arr_21 [i_6] [i_6 - 1] [i_6 + 1]) ? (((/* implicit */int) arr_21 [i_5 - 3] [i_5 - 1] [i_5 - 1])) : ((+(((/* implicit */int) arr_21 [i_4] [i_5 - 2] [i_6])))))))));
                    var_24 = (!(((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5 - 4] [i_5 - 4])));
                    var_25 = ((/* implicit */int) (+(arr_16 [i_4])));
                }
            } 
        } 
        var_26 -= ((((/* implicit */_Bool) arr_19 [i_4])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_4] [i_4] [i_4]))))) : ((-(arr_17 [i_4] [(short)12] [i_4]))));
    }
}
