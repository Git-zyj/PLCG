/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230578
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)304)))))), (((/* implicit */int) arr_2 [i_0]))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) -1516875418);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_0] [(unsigned char)2] [i_1] [(unsigned char)2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) < ((((_Bool)1) ? (((/* implicit */int) (short)-24942)) : (((/* implicit */int) (unsigned char)79))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        var_18 += ((/* implicit */long long int) arr_5 [i_1] [i_3 + 3]);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_3))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((short) arr_9 [i_1] [i_1] [i_2]));
                        arr_13 [i_4] [i_4] [(unsigned char)15] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
                    }
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 4; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)55079)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14374))));
                                var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)26824)) : (8388607)))));
                                arr_20 [i_7 - 4] = ((/* implicit */unsigned short) (unsigned char)215);
                                var_23 ^= ((/* implicit */unsigned short) 13260742441253155959ULL);
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [(short)8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14372))) : (var_8))))));
                }
                for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) ((-8388607) % (((/* implicit */int) (unsigned short)11535))));
                    var_25 = ((/* implicit */long long int) min((((unsigned int) (unsigned char)238)), (((/* implicit */unsigned int) (unsigned char)194))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((var_0), (((/* implicit */int) (unsigned char)158))))) + ((-(arr_10 [i_8] [i_1] [i_8] [i_8])))))) ? ((+(min((((/* implicit */long long int) var_15)), (arr_10 [i_0] [i_0] [i_8] [i_8]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)105)))))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((-906557926), ((~(((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [6ULL] [5] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (18446744073709551615ULL)));
                                var_28 ^= ((/* implicit */_Bool) (unsigned short)54027);
                                var_29 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (~(1516875418)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1])) && (((((/* implicit */_Bool) 3878364774U)) || (((/* implicit */_Bool) (unsigned char)129)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (arr_3 [14LL] [14LL]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                            var_30 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)62)), (max((((/* implicit */unsigned long long int) min((arr_1 [i_1]), (((/* implicit */long long int) var_0))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551609ULL)))))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (((~(((/* implicit */int) (!(((/* implicit */_Bool) 1669118393018523985LL))))))) < ((-((~(((/* implicit */int) var_4)))))))))));
                            arr_37 [i_12] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_7 [i_1] [i_11] [8]);
                            var_32 = ((/* implicit */unsigned char) ((unsigned int) arr_33 [i_11] [i_11] [i_0] [i_0]));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 9; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (unsigned char i_15 = 1; i_15 < 11; i_15 += 2) 
            {
                {
                    arr_46 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_13] [i_13 - 2] [i_13] [i_13 - 2])) == (((/* implicit */int) arr_44 [i_13] [i_14] [(unsigned char)4]))));
                    var_33 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)62)) & ((~(((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) (unsigned char)207))));
                    var_34 ^= ((unsigned char) (+(((2120752133U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_35 ^= ((/* implicit */signed char) var_7);
    var_36 = ((/* implicit */unsigned char) (unsigned short)58156);
    var_37 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (9ULL)));
}
