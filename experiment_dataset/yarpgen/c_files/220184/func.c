/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220184
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
    var_10 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_3)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) arr_1 [i_0]);
        var_12 = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) > (arr_0 [2ULL])))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) arr_7 [2] [i_1] [(unsigned short)0])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) / (((/* implicit */int) arr_1 [i_1]))))))), (((/* implicit */unsigned long long int) ((arr_3 [i_2]) % (((/* implicit */unsigned int) ((int) arr_7 [i_1] [i_1] [i_2]))))))));
            var_13 = ((((/* implicit */_Bool) ((((arr_0 [0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (min((arr_0 [3ULL]), (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_2])), (arr_1 [i_1])))))))) ? (((/* implicit */int) min((((_Bool) var_6)), ((!(((/* implicit */_Bool) arr_8 [i_1] [14LL]))))))) : ((+(((/* implicit */int) (unsigned char)250)))));
        }
        arr_10 [i_1] [(short)8] |= ((((/* implicit */_Bool) (+(-2740498717454533196LL)))) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 8535117528759975445ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1336528081U))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_14 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
            arr_13 [i_1] [2] = ((/* implicit */unsigned short) arr_11 [i_3 - 1]);
            arr_14 [0ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) == (((int) 0U))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) min(((-(arr_22 [i_6] [i_4]))), (((/* implicit */unsigned long long int) ((long long int) arr_22 [i_1] [i_4])))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) arr_2 [i_1]);
                            var_17 *= ((/* implicit */unsigned int) (~(((int) min((((/* implicit */long long int) arr_15 [i_1] [1ULL] [i_1])), (arr_12 [i_1] [i_1] [i_5]))))));
                        }
                    }
                } 
            } 
            arr_25 [i_1] [i_4] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1])))));
        }
        arr_26 [i_1] = ((/* implicit */int) ((unsigned int) ((4294967288U) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) -1418369136)))))))));
    }
    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)228)) - (((/* implicit */int) (short)27004))))) && (((/* implicit */_Bool) 9223372036854775807LL)))));
        var_19 = ((signed char) min((arr_20 [14ULL] [i_8]), (((/* implicit */unsigned long long int) ((_Bool) var_6)))));
        arr_31 [i_8] = (-((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) > (4294967295U)))))));
        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(var_9)))))) <= ((~(min((var_0), (((/* implicit */unsigned long long int) var_1)))))));
        arr_32 [i_8] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) arr_1 [i_8]))) | ((+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8]))) & (arr_21 [9U] [i_8] [i_8] [i_8])))))));
    }
    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((int) var_6))))) ? (min((1400439705687167636LL), (-7305416349035636266LL))) : (min((var_4), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_4))))))));
}
