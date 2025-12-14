/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223113
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_0 [i_1 - 1]), (((/* implicit */unsigned char) arr_2 [i_1] [i_1 + 1])))))));
                var_12 = ((/* implicit */short) var_3);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_6 [i_2] [i_2] = ((/* implicit */_Bool) (signed char)-13);
        var_13 *= ((/* implicit */_Bool) ((unsigned int) ((var_9) | (((/* implicit */long long int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_2])) << (((((/* implicit */int) arr_4 [(short)14] [(short)14])) - (219)))))))));
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 13162409994233025086ULL)) || (((/* implicit */_Bool) 4994141596305738357ULL))))), (arr_4 [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_14 = (~(((1522840185U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3])) ? (((/* implicit */int) var_2)) : (arr_15 [i_3] [i_4] [i_4] [i_5])));
                    arr_19 [i_5] [16LL] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)49152))))));
                    arr_20 [(unsigned char)3] [i_4] [i_3] = ((/* implicit */signed char) (+(arr_14 [i_3] [i_4] [i_5])));
                    arr_21 [(_Bool)1] [i_4] = ((/* implicit */long long int) ((arr_13 [i_5]) != (((/* implicit */unsigned long long int) var_1))));
                    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3] [(_Bool)1]))) + ((+(var_1)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) arr_13 [i_3]);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) || (((/* implicit */_Bool) (unsigned char)9))));
        arr_26 [i_6] = ((/* implicit */unsigned char) (-((-(1775096421)))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (unsigned char)111))));
    }
    var_18 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 2772127121U))) % ((-(((/* implicit */int) (unsigned short)19280))))))), (min((((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */long long int) -374881627))))), (4994141596305738357ULL)))));
}
