/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240274
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) min((((/* implicit */short) (_Bool)0)), ((short)(-32767 - 1))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (3898252990U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-8013))) ^ (807047004U)))));
        var_19 = ((/* implicit */short) max((var_19), (max((((/* implicit */short) (!(((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)8471))))))), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 &= ((/* implicit */unsigned char) ((arr_4 [i_1]) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (arr_3 [i_1] [i_1])));
        arr_5 [i_1] = ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_4 [(_Bool)1])))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9714)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)0))))) ^ (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9722))) : (18446744073709551615ULL)))));
        var_22 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 18446744073709551615ULL)) && ((_Bool)1))) ? (((/* implicit */int) (short)11736)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) 8388352U)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_3 [i_1] [i_2]))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) == (((/* implicit */int) var_7))));
            arr_8 [i_1] = (short)-9715;
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (short)9715)) >> (((-1972123984) + (1972123985))))))));
            arr_9 [i_1] [i_2] [i_2] = 251885846U;
        }
        for (short i_3 = 4; i_3 < 15; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                var_26 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17261834153208556665ULL)));
                var_27 = ((/* implicit */int) ((long long int) var_12));
                var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_1] [i_4])) >= (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_1))))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 63)) / (1751681254U)))) ? ((-(((/* implicit */int) (short)8471)))) : (((((/* implicit */_Bool) var_11)) ? (1025745541) : (((/* implicit */int) (_Bool)1))))));
            }
            arr_14 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_3 - 3]))));
            var_30 += ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_3 - 2])) : (1184909920500994926ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2883379422U)) ? (((/* implicit */int) (short)-21191)) : (((/* implicit */int) (short)26195)))))));
            var_31 = ((/* implicit */int) var_2);
        }
        for (short i_5 = 4; i_5 < 15; i_5 += 1) /* same iter space */
        {
            var_32 *= ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */unsigned long long int) 9223372036854775807LL)) ^ (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) var_9))));
            var_33 &= ((/* implicit */short) (+(((/* implicit */int) var_5))));
            var_34 = ((/* implicit */_Bool) 1184909920500994951ULL);
        }
    }
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_35 ^= ((/* implicit */unsigned char) (unsigned short)45015);
        var_36 &= ((/* implicit */short) ((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-24714)))))))) * (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 911801944U))))), (((((/* implicit */_Bool) arr_17 [4ULL])) ? (((/* implicit */long long int) 1935569015)) : (var_9)))))));
        var_37 = ((((((/* implicit */_Bool) 8030249263924253528ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (9223372036854775807LL))) & (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14896)) ? (((/* implicit */int) (unsigned short)20688)) : (((/* implicit */int) (_Bool)1))))))))));
    }
    var_38 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) min(((short)16383), ((short)8478)))), (min((8371783318848721160ULL), (10074960754860830428ULL)))))));
}
