/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244586
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
    var_14 ^= min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (short)8120)) != (((/* implicit */int) (signed char)12))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (var_1));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned short) (_Bool)1)))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((var_8), (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_1 - 1])), (4095))))));
                    var_16 = var_11;
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_6))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)236)))))));
                        }
                        arr_19 [i_3] [i_3] [i_1] [i_1] [(signed char)15] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) (short)255)), (9936449023346771223ULL))) : (((/* implicit */unsigned long long int) ((arr_7 [i_1 - 1] [i_1] [10LL]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_1))))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1763266993783770130LL)) || (((((/* implicit */int) var_0)) != (((/* implicit */int) var_2)))))))));
                        var_20 = ((/* implicit */int) ((_Bool) var_8));
                        arr_23 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) min((min((min((((/* implicit */unsigned int) (_Bool)0)), (var_1))), (((/* implicit */unsigned int) (_Bool)1)))), (min((((/* implicit */unsigned int) (_Bool)1)), (min((343487286U), (var_1)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (_Bool)1);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)25083)) : (((/* implicit */int) arr_0 [i_1 - 1]))));
                            var_23 = ((/* implicit */signed char) arr_24 [1LL]);
                            var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_33 [i_8] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
                            arr_34 [i_0] [15ULL] [i_2] [i_7] [i_8] [i_1] [(unsigned short)17] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)508))) & (4294967295U));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((var_8) == (min((arr_9 [i_9 - 1] [9LL] [i_1 - 1] [i_1 - 1]), (arr_9 [i_9 + 1] [i_2] [i_2] [i_1 - 1])))));
                            var_26 = ((/* implicit */signed char) min((((int) arr_1 [i_9 + 2])), (arr_1 [i_9 + 2])));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (signed char)127))));
                        }
                        for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */short) arr_9 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1]);
                            var_29 = ((/* implicit */long long int) (short)(-32767 - 1));
                            var_30 += ((/* implicit */int) (unsigned short)42475);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_31 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_3 [i_1 - 1])) : (((0ULL) >> (((var_9) - (900841679U)))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((long long int) ((_Bool) 2130137530196579870LL)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 16; i_12 += 4) 
                        {
                            arr_44 [i_1] [i_1] [11U] [2LL] [i_1] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) var_11)))));
                            var_33 = ((/* implicit */signed char) var_10);
                        }
                        arr_45 [i_1] [(unsigned char)8] [i_2] [i_2] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned short)65535))));
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((arr_5 [i_1] [(_Bool)1]) << (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_5))))))) == (((((/* implicit */unsigned int) ((/* implicit */int) ((-16) != (((/* implicit */int) (unsigned char)236)))))) % (arr_28 [i_7] [i_1 - 1] [i_1 - 1]))))))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((((/* implicit */unsigned short) var_6)), (var_0))))));
                    }
                }
            } 
        } 
    } 
    var_36 &= ((/* implicit */unsigned int) (+(min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) var_11))))));
}
