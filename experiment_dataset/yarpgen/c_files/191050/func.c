/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191050
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_10))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) var_0))))) >> (((var_1) - (906767748U)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
            arr_6 [(unsigned char)2] [i_1 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) var_9);
            var_14 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_12 [i_0] = ((/* implicit */signed char) (+(var_5)));
            var_15 ^= ((/* implicit */unsigned int) arr_1 [0] [i_3]);
            arr_13 [i_0] [i_3] [i_3] = ((/* implicit */signed char) var_7);
        }
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((((arr_8 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) % (((arr_1 [i_0] [i_4]) ? (18446744073709551615ULL) : (var_10)))));
                    arr_20 [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_1))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (unsigned char i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                {
                    arr_29 [i_6] [i_7] [(_Bool)1] = ((/* implicit */_Bool) var_6);
                    arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((9223372036854775794LL), (((/* implicit */long long int) arr_28 [6ULL] [i_8 - 1] [i_8]))))) ? (((((/* implicit */_Bool) 11656645154636719218ULL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) ((_Bool) var_1)))));
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */int) ((arr_22 [i_6]) != (arr_22 [i_6])))), ((+(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)19324)))))))));
                    arr_31 [i_6] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_28 [8] [14LL] [i_8 - 1])) ? (((/* implicit */int) arr_26 [i_6] [i_7])) : (arr_28 [i_8] [i_7] [i_8 + 3]))) : (min((((/* implicit */int) (_Bool)1)), (-1309662506)))))) : (max((((/* implicit */unsigned int) (signed char)-37)), (min((((/* implicit */unsigned int) var_9)), (arr_22 [i_6])))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_6])) == (((/* implicit */int) arr_21 [3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_6])) >= (((/* implicit */int) arr_21 [i_6])))))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 16; i_9 += 3) 
    {
        var_20 += ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5813)))))) != (var_5)));
        arr_36 [4ULL] = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_9 - 1] [i_9 + 2]))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_9);
    var_22 = ((/* implicit */unsigned char) var_8);
}
