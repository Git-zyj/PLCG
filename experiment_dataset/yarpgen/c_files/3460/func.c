/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3460
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
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) var_17))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((var_10) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                var_21 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2 + 4])) ? (arr_2 [i_0] [i_0] [i_2 + 1]) : (((/* implicit */int) (_Bool)1)));
                var_22 = ((/* implicit */_Bool) (+(arr_2 [i_0] [i_2 + 1] [i_2 + 1])));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_14) : (((/* implicit */unsigned int) arr_0 [i_0] [i_3 + 1]))));
                    var_25 = ((/* implicit */unsigned char) (!((_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_5 [i_0] [i_1]))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_12)))))))));
                        var_28 = ((/* implicit */signed char) (-(8171538281862577543LL)));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) (-(arr_12 [i_0] [i_1] [i_0] [i_3 + 1] [i_5] [i_3 + 1])));
                        arr_16 [i_0] [8LL] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_4)))));
                    }
                }
                var_30 = ((/* implicit */_Bool) (+(arr_7 [i_2] [i_0] [i_2 - 1] [i_1] [i_0])));
                var_31 = ((/* implicit */long long int) min((var_31), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 2])) ? ((~(-7445676579139442116LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))));
            }
            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
            arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3054799605U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)53))))) : ((~(0ULL)))));
            var_33 = ((/* implicit */long long int) var_5);
        }
        var_34 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-27162))));
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned short) ((_Bool) (+(2544192401U))));
        var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)91))));
        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) 5807790605173890665LL)) ? ((((!(((/* implicit */_Bool) var_5)))) ? (min((arr_13 [i_6]), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) (-(arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])))))) : (18446744073709551615ULL)));
        arr_20 [i_6] [8LL] &= ((/* implicit */long long int) var_9);
    }
}
