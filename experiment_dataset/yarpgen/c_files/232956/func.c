/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232956
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)11769)), ((unsigned short)20908)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (2525711415033147690ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)7457), ((short)-8005))))))))));
    var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (short)24679)) ^ (((/* implicit */int) var_9))))))), (var_12));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_20 -= arr_1 [i_0];
        arr_2 [(unsigned short)2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1611264837U)) ? (((/* implicit */int) (unsigned short)20914)) : (((/* implicit */int) (unsigned short)32510))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [9U])) ? (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64013))) : (3323075893496786477LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)44630)) != (((/* implicit */int) (unsigned short)32510))))) != (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) (_Bool)1))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) 18446744073709551615ULL);
        arr_7 [i_1] [(signed char)7] = min((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) 1497329310U)))), (((/* implicit */unsigned long long int) arr_3 [i_1])));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_22 *= ((/* implicit */short) arr_5 [i_2]);
        var_23 ^= ((/* implicit */unsigned int) 18446744073709551615ULL);
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2] [i_2])) % (((/* implicit */int) arr_10 [i_2] [i_2]))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            arr_14 [i_2] [i_2] |= ((/* implicit */short) arr_3 [i_3]);
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_9 [i_2] [i_2]))));
            arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3])) ? (-6468743863635627304LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))));
        }
    }
    var_25 = ((/* implicit */unsigned char) max((1497329320U), (((/* implicit */unsigned int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                var_26 = ((/* implicit */short) arr_4 [7ULL]);
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 + 3])) ? (((/* implicit */int) arr_4 [i_4 + 1])) : (((/* implicit */int) arr_4 [i_4 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 3]))) / (arr_16 [(unsigned short)18]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 4; i_6 < 16; i_6 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) arr_18 [i_6] [i_5]);
                    var_29 = ((/* implicit */short) (unsigned short)65535);
                    arr_23 [i_4] [i_4] [(unsigned short)3] [(short)6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [i_4 + 2] [i_5] [i_6 + 2])) && (((/* implicit */_Bool) (unsigned short)64001)))) ? (((/* implicit */int) (short)-17897)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) && (((/* implicit */_Bool) (unsigned short)20919)))))));
                    var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45261))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33025))) : (arr_17 [i_6])))));
                }
                var_31 -= max((0ULL), (((/* implicit */unsigned long long int) (signed char)51)));
            }
        } 
    } 
}
