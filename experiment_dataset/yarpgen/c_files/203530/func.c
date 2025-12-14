/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203530
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
    var_11 ^= ((/* implicit */long long int) ((short) 2319967844U));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10688))) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2LL])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((long long int) arr_1 [i_0] [i_0])) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (arr_1 [i_0] [i_0]))))));
        var_13 = ((/* implicit */int) (((_Bool)1) ? (4293488872U) : (8192U)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [(short)10] = ((/* implicit */int) max((var_8), (((/* implicit */unsigned int) (short)-10691))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */long long int) arr_0 [i_2]);
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_4 [i_1] [i_1] [i_4]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) var_4))), (var_8)))) : (((long long int) arr_6 [i_0] [i_3 - 1] [i_3 + 1] [i_4 + 2]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) var_3)))) << (((((int) arr_8 [10] [i_2] [i_1] [i_1] [(short)8] [i_2])) + (9594)))))) ? (((long long int) var_10)) : (((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_1))))) ? (-8793834747997485209LL) : (arr_12 [i_0] [i_0] [i_1] [i_2] [i_0])))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1] [i_2])))));
                    var_16 = 8793834747997485208LL;
                }
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((short) ((((_Bool) 4293488856U)) ? (((/* implicit */int) (short)-10696)) : ((+(((/* implicit */int) arr_9 [i_5] [i_5 + 1] [(short)4] [0U])))))));
        arr_18 [i_5] = ((/* implicit */int) max(((((-(var_2))) * (arr_1 [i_5] [i_5]))), (((/* implicit */unsigned int) (~(((((/* implicit */int) (short)10683)) + (((/* implicit */int) (_Bool)1)))))))));
        arr_19 [i_5] = ((/* implicit */signed char) max((arr_1 [i_5] [i_5]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-10683)) : (((/* implicit */int) (short)10686)))))));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 10; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 7; i_7 += 3) 
        {
            for (int i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-10683)) ? (((/* implicit */unsigned int) ((-1270639104) - (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) 424346297)) + (0U)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_7 - 2] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1]))) : (var_2)));
                    }
                    arr_32 [i_8] [i_7 - 1] [i_8] [i_6] &= ((/* implicit */unsigned int) arr_3 [i_7 + 3] [i_7 - 1]);
                }
            } 
        } 
        arr_33 [i_6] [i_6 + 1] = ((/* implicit */_Bool) ((arr_24 [i_6 + 1] [i_6 + 1]) / (((/* implicit */long long int) ((int) arr_5 [i_6] [(signed char)7] [i_6] [i_6])))));
    }
    var_20 = ((unsigned int) var_9);
    var_21 *= ((/* implicit */_Bool) var_0);
}
