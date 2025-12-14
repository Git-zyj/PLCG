/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233059
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (2488016937U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47199))))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_19 = ((unsigned short) (unsigned char)221);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)0)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
    {
        var_21 = ((/* implicit */long long int) ((arr_8 [19]) <= (((/* implicit */long long int) ((arr_9 [i_2]) & (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_2])), (var_7)))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) min(((short)-32766), (var_17)))) - (((/* implicit */int) ((unsigned short) (unsigned short)0))))))));
        var_23 = ((/* implicit */long long int) (~((+((+(((/* implicit */int) (unsigned short)65535))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 17; i_3 += 1) 
    {
        arr_13 [(unsigned short)15] = ((/* implicit */unsigned char) (-(arr_6 [i_3 - 1])));
        arr_14 [(unsigned short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_3 + 2])) : (((/* implicit */int) arr_10 [i_3 + 1]))));
        var_24 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_3 + 2]))));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_25 = ((((/* implicit */_Bool) arr_22 [i_3 + 1] [i_5 + 3])) ? (arr_9 [i_4]) : (arr_9 [i_4]));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64436)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [(unsigned char)18] [(unsigned char)17] [(short)2])))) : (((((/* implicit */_Bool) (short)16190)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [(unsigned short)16])))));
                    }
                } 
            } 
            arr_24 [5U] [(short)10] = ((/* implicit */signed char) ((arr_16 [i_3 + 2]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_27 ^= ((/* implicit */unsigned int) (unsigned short)25477);
            arr_28 [18LL] = ((/* implicit */unsigned int) ((signed char) (unsigned short)54535));
            var_28 -= ((/* implicit */unsigned int) arr_11 [2]);
        }
        for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2539738066238185227LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59334))) : (7679037579172804874LL)))) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(unsigned short)16] [0U])))))));
            arr_33 [(signed char)18] [(signed char)12] = ((/* implicit */long long int) ((unsigned short) var_9));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(((((/* implicit */int) arr_23 [14] [(unsigned char)1] [(short)7] [8] [(unsigned short)8] [(unsigned short)18])) & (((/* implicit */int) var_9)))))))));
        }
        var_31 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_16 [(unsigned short)8])))) ? (arr_16 [i_3 - 1]) : (((/* implicit */long long int) ((int) arr_29 [(signed char)13] [(unsigned char)8])))));
    }
}
