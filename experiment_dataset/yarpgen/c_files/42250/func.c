/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42250
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)127))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((long long int) arr_1 [i_0 - 3])))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_1])))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (arr_3 [i_0] [i_0])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] = (~(((((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_0])) - (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0])))));
            var_21 = ((/* implicit */short) (-(((int) arr_3 [i_0 - 2] [i_0 + 3]))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) (+((-(((/* implicit */int) ((unsigned short) arr_2 [i_3])))))));
                arr_10 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 - 2] [i_2] [i_3])))))))), ((~(((/* implicit */int) (unsigned char)174))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_13 [i_5] [i_4] [i_3] [i_3] [i_2] [i_0] [i_0])), (((((/* implicit */_Bool) 1022932242)) ? (((/* implicit */int) (unsigned char)174)) : (2147483642))))) * ((-((+(((/* implicit */int) arr_0 [i_0] [i_2]))))))));
                            arr_17 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_14 [i_4 - 2] [i_2] [i_3] [i_0 - 1] [i_5])) << (((/* implicit */int) arr_14 [i_4 - 2] [i_2] [i_0] [i_0 + 3] [i_5]))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_5 [i_4 + 1] [i_0 + 3])))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (_Bool)1)))))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_2])) ? (arr_3 [i_0 - 1] [i_2]) : (arr_3 [i_0 - 2] [i_2])))));
                var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (~(arr_3 [i_3] [i_3])))) ? ((~(arr_2 [i_0]))) : (((/* implicit */int) arr_12 [i_0] [i_2] [i_3] [i_3] [i_3] [i_3]))))));
            }
            for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
            {
                arr_24 [i_6] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                var_24 = ((/* implicit */signed char) arr_1 [i_2]);
                var_25 += ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (+(-379288268)))))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */long long int) ((_Bool) arr_21 [i_7] [i_7] [i_7] [i_7]));
        arr_28 [i_7] [i_7] = (((+(((/* implicit */int) arr_26 [i_7] [i_7])))) % (((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_5 [i_7] [i_7])) : (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7])))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) ((unsigned char) (unsigned short)12140))) : ((+(((/* implicit */int) arr_0 [i_7] [i_7]))))));
    }
    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
    {
        arr_32 [i_8] = ((/* implicit */short) ((_Bool) ((arr_14 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 1]) ? (((/* implicit */int) arr_14 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 + 2])) : (((/* implicit */int) arr_14 [i_8 + 1] [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 - 2])))));
        arr_33 [i_8] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) + (((/* implicit */int) ((((/* implicit */int) arr_29 [i_8])) != (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8])))))))));
        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]))))) * (((unsigned long long int) arr_3 [i_8] [i_8])))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_9] [i_9] [i_9])))))));
        arr_37 [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_5 [i_9] [i_9]))))));
    }
    var_29 = ((/* implicit */int) (((((-(var_10))) | ((-(var_4))))) >= ((~(max((((/* implicit */int) var_6)), (var_5)))))));
}
