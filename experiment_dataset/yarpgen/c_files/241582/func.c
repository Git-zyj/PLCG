/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241582
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
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (var_5)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_8)))) : (var_3)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_16 = (+((((+(var_5))) | (((/* implicit */int) (_Bool)1)))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)2)))))))));
                        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) (_Bool)0)), (arr_2 [6LL])))))) * ((-(arr_13 [i_2 - 1] [i_2] [i_2 + 1] [i_1])))));
                        var_19 = ((/* implicit */short) (+((-(arr_13 [i_2 - 2] [i_2 - 2] [i_2] [i_2])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_5 = 2; i_5 < 8; i_5 += 3) 
        {
            arr_18 [i_1] [i_5 + 1] = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1]);
            var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_8 [i_1]) > (arr_8 [i_1])))), ((~(arr_8 [i_1])))));
        }
        var_21 = ((unsigned char) (+(arr_11 [i_1] [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_5))));
            var_23 = ((((/* implicit */_Bool) arr_22 [i_6])) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)4] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))) : (((var_1) >> (((((/* implicit */int) var_7)) - (237))))));
            var_24 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_6] [i_1])))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_24 [i_7] [i_7]))))) ? (((/* implicit */int) ((unsigned char) arr_24 [i_7] [i_7]))) : (((/* implicit */int) ((unsigned char) arr_24 [i_7] [i_7]))));
        var_26 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_24 [i_7] [i_7])))));
    }
}
