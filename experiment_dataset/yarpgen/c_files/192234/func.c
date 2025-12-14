/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192234
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
    var_11 = ((/* implicit */unsigned long long int) var_6);
    var_12 = ((/* implicit */int) ((((/* implicit */int) ((var_7) || (((/* implicit */_Bool) var_5))))) == (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((_Bool) ((_Bool) arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) > (((/* implicit */int) ((unsigned char) (_Bool)1)))));
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_15 -= ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) max((arr_3 [i_0] [(_Bool)1]), (arr_3 [i_0] [(unsigned short)10]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((((long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) > (((/* implicit */long long int) (+(((arr_5 [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        var_17 &= ((/* implicit */signed char) max((((/* implicit */short) (_Bool)1)), (min(((short)-6170), (((/* implicit */short) var_7))))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_18 ^= ((/* implicit */signed char) (_Bool)1);
                        arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned char)63))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 4]))))) : (max((((/* implicit */long long int) (unsigned char)196)), (arr_2 [i_1 + 1] [i_4 + 1])))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((_Bool) arr_0 [i_0])) ? ((~(arr_12 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5))))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (short)31510))) << (((arr_6 [i_0] [i_0] [i_0]) - (1097364950995693715ULL)))));
        }
    }
    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
    {
        arr_17 [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_1 [i_6 - 2] [i_6 - 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_6] [i_6]))) : (arr_5 [i_6] [i_6])));
        var_21 = ((((((/* implicit */int) arr_15 [i_6 - 1])) * (((/* implicit */int) arr_15 [i_6 - 2])))) ^ (((((/* implicit */int) (signed char)-106)) - (((((/* implicit */_Bool) 2147288993491935737LL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_8)))))));
    }
}
