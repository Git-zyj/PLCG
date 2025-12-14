/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236311
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
    var_10 *= ((/* implicit */short) (-(((((var_1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) >= (var_0)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (921335419U)))) ? (arr_4 [i_3 + 1]) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3] [i_3 - 1])))))));
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_2] [i_3]))) % (var_3)));
                        var_12 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_7))))))), (((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_6))))) & (((/* implicit */int) (signed char)2))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(arr_0 [i_0] [(unsigned short)3]))) ^ (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) 1810617642))))));
    }
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4] [i_4]))))) ? (((arr_9 [i_4] [i_4]) ? (arr_14 [i_4]) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (-1211732454))))));
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (arr_6 [i_4] [i_4] [i_4])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (signed char)2);
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 6650168593938430721LL)) ? (((/* implicit */unsigned int) 1211732453)) : (3373631876U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4] [17LL] [i_4] [i_5] [i_4])) + (((/* implicit */int) var_7)))))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            arr_29 [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(((arr_9 [i_6] [i_4]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))));
            var_14 = ((unsigned char) var_6);
            var_15 = ((/* implicit */unsigned int) (!(((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        }
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4]))) : ((~(arr_5 [i_4])))));
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (((~(-1211732454))) >= (((/* implicit */int) (!(arr_9 [8LL] [i_7]))))));
        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_23 [i_7] [i_7] [i_7]))));
        var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_6)) * ((+(((/* implicit */int) arr_15 [i_7] [(signed char)18]))))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_8), (((unsigned short) (short)(-32767 - 1)))));
}
