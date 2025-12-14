/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238222
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (min((var_5), (((/* implicit */unsigned long long int) var_8))))))) ? (max((((((/* implicit */unsigned long long int) var_15)) - (var_0))), (((/* implicit */unsigned long long int) (~(286330601)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_15))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_3 + 1])))))));
                            arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [4] [i_3 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0] [i_0] [i_0] [i_3 + 1] [i_3]))) : (((((/* implicit */_Bool) arr_5 [9ULL] [9ULL] [i_2] [i_0])) ? (arr_8 [i_0] [i_1] [i_2] [i_3 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */int) min((2305843009213693951ULL), (((/* implicit */unsigned long long int) 286330616))));
                    arr_16 [i_0] [i_1] [i_0] = ((-1897751736) ^ (((/* implicit */int) (unsigned char)0)));
                    var_21 = ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_4 - 1] [1] [i_4 - 1]);
                    arr_17 [i_0] [i_1] [i_0] = (~(var_14));
                }
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) (short)23625)) ? (3LL) : (-4518052519665103431LL)))));
                    var_23 = ((/* implicit */unsigned short) var_15);
                    var_24 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [2LL]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [7U] [i_0] [i_6] [i_5] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) (~(((((var_9) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))) >> (((((unsigned long long int) arr_2 [i_0] [i_0])) - (13599538933141629575ULL)))))))) : (((/* implicit */unsigned char) (~(((((var_9) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))) >> (((((((unsigned long long int) arr_2 [i_0] [i_0])) - (13599538933141629575ULL))) - (7833099948647240052ULL))))))));
                                var_25 = ((/* implicit */int) arr_9 [i_0] [i_0] [i_7] [i_6]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_9] [i_0] [i_9] = ((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_8] [i_0]);
                        arr_32 [i_0] = ((/* implicit */unsigned int) ((((var_9) ? (((/* implicit */unsigned long long int) arr_4 [4U] [i_0] [i_8] [i_0])) : (arr_2 [i_0] [i_0]))) % (((unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0]))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) -1062950773)))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        var_27 |= ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_8] [0ULL])))));
                        arr_36 [i_0] = ((/* implicit */int) ((unsigned long long int) arr_21 [i_0]));
                        arr_37 [i_0] [i_8] &= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_8] [i_8]);
                        var_28 = ((/* implicit */int) (+(arr_8 [i_0] [i_0] [6ULL] [i_0] [i_0])));
                    }
                    arr_38 [i_0] [i_8] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [9U] [i_8])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
                    arr_39 [i_0] [i_1] [i_8] |= ((((/* implicit */_Bool) arr_4 [i_0] [i_8] [i_1] [i_8])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_8] [i_8] [i_1])) : (arr_5 [i_8] [i_1] [i_0] [i_8]));
                }
                arr_40 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_0]))) : (arr_7 [i_0] [i_1] [i_0] [i_1])))))) ? (arr_3 [i_1]) : (var_2)));
            }
        } 
    } 
    var_29 ^= var_5;
}
