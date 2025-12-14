/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226195
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24651))) : (var_3))) ^ (((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1094932307))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) var_10))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) -6982989320480719271LL)) ? (((/* implicit */long long int) 3651448428U)) : (-9223372036854775797LL)));
            arr_5 [(short)11] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(-201231767)))) % (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_1]))) : (arr_3 [i_0] [i_0] [i_1]))))))));
        }
        var_18 = ((/* implicit */int) min((var_18), ((~(-201231770)))));
        var_19 = ((((/* implicit */int) ((unsigned short) var_14))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
        arr_6 [i_0] [(unsigned char)7] = ((/* implicit */signed char) ((unsigned short) (~((-2147483647 - 1)))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [(unsigned char)15] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])))) ? ((~(((/* implicit */int) arr_4 [i_2] [5] [i_2])))) : (((/* implicit */int) ((((long long int) arr_9 [i_2])) < (((/* implicit */long long int) arr_9 [i_2])))))));
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 268435455)) == (3110482695U)));
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (-1891984293))))) ^ (((arr_16 [10] [i_6]) % (((/* implicit */int) (unsigned char)119))))));
                        arr_22 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))) / (arr_20 [i_4] [i_4] [i_5 - 1] [i_5] [i_3])))));
                    }
                } 
            } 
        } 
        arr_23 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) (signed char)113))) - (((unsigned int) ((14804480U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))))))));
        arr_24 [i_3] = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)145))))));
    }
}
