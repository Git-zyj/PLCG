/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207707
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31672)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (max((var_4), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)134)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_15 |= ((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) -384382688))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_0)) >> (((/* implicit */int) arr_10 [i_2] [i_2] [i_3])))) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) arr_11 [(_Bool)1] [i_1] [i_1 + 2] [i_1] [i_1 - 1]));
                    var_19 |= (~(arr_14 [i_1 - 1] [(_Bool)1] [(unsigned short)12] [i_2] [13LL]));
                }
                var_20 = ((/* implicit */_Bool) min((var_20), (arr_5 [i_1] [i_2] [i_3])));
            }
            var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_2] [i_1]))));
        }
        var_22 = ((/* implicit */unsigned int) (unsigned char)150);
    }
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_23 = ((/* implicit */long long int) arr_0 [i_5]);
        arr_18 [i_5] [1] = ((/* implicit */long long int) 14408290613676025514ULL);
        var_24 = ((/* implicit */unsigned int) (signed char)80);
    }
    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) var_0);
        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_6])) ? ((+(((/* implicit */int) (unsigned char)113)))) : (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_6]))))));
        var_26 = ((/* implicit */signed char) (short)31655);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
            var_28 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_6] [i_7]))))));
            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_7 + 3] [i_7 + 3]))));
            var_30 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-70))));
        }
        var_31 = ((/* implicit */int) ((max((((arr_12 [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_6]))))) >> (((((/* implicit */int) ((unsigned short) ((arr_15 [i_6] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [i_6] [(signed char)3]))))) - (6096)))));
    }
    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))) ^ (max((((/* implicit */unsigned int) var_3)), (131071U))))))));
}
