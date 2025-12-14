/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224480
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) ((int) var_15));
        arr_5 [i_0] |= ((/* implicit */_Bool) ((int) arr_0 [i_0]));
    }
    /* LoopSeq 3 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_18 = arr_6 [i_1] [i_1];
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            var_19 &= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)63)), (max(((unsigned short)14072), (((/* implicit */unsigned short) (_Bool)1))))))) >> (((((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (_Bool)1)))) - (192)))));
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2 + 1]))))))));
            var_20 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2]))))) << (((((/* implicit */int) var_8)) + (51)))));
        }
        var_21 = ((/* implicit */int) (+(max((max((arr_6 [i_1] [i_1]), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-14752)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(3602316926U)));
            var_22 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) var_5)))) << (((/* implicit */int) ((arr_12 [i_3] [i_1]) || (((/* implicit */_Bool) var_4))))));
        }
        /* vectorizable */
        for (short i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            var_23 = ((/* implicit */int) ((((long long int) (unsigned short)14065)) == (((/* implicit */long long int) arr_18 [i_4]))));
            var_24 = ((/* implicit */long long int) ((arr_9 [i_4]) ? (11620057258803159897ULL) : (((/* implicit */unsigned long long int) ((arr_9 [i_4]) ? (arr_11 [i_4 - 1] [i_4 + 1] [i_1]) : (((/* implicit */unsigned int) arr_13 [i_1] [i_4])))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14077))) >= (14838406715661209885ULL))) ? (arr_22 [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)220))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                }
                arr_26 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_4] [i_4 - 1] [i_4 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 + 1]))) : (arr_20 [i_4] [i_4 + 2] [i_4 + 2])));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(arr_6 [i_4 + 2] [i_4 + 2]))))));
                var_28 *= (_Bool)1;
                var_29 ^= ((/* implicit */short) ((unsigned int) arr_12 [i_4] [i_4]));
            }
        }
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)14040)) ? (arr_11 [i_1] [i_7 - 2] [i_1]) : (arr_11 [i_1] [i_7 + 1] [i_1]))), (((arr_11 [15] [i_7 + 1] [i_7]) << (((arr_11 [i_1] [i_7 - 1] [i_1]) - (2862556610U))))))))));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) max((692650361U), (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51495))) : (arr_25 [i_1] [i_1] [i_1] [i_7]))))))));
            var_32 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7] [i_1])))));
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((min((arr_23 [i_1] [i_7] [i_7 - 2] [i_1] [i_7]), (((/* implicit */long long int) 481882420U)))) % (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_7 - 2] [i_7])), (3892423694U)))))))));
            arr_29 [i_1] [8U] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)74))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_22 [i_1])))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)71)), (arr_20 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_15)))))));
        }
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (signed char i_10 = 4; i_10 < 15; i_10 += 3) 
            {
                for (signed char i_11 = 3; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (402543616U)));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 2; i_12 < 16; i_12 += 4) 
                        {
                            var_35 &= ((/* implicit */short) var_4);
                            var_36 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-10)) && (((/* implicit */_Bool) (unsigned short)51500))))), (arr_33 [i_8] [i_8]));
                            var_37 *= ((/* implicit */_Bool) var_7);
                            var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3892423679U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL)));
                            arr_44 [i_8] [i_9] [i_10] [i_11 + 1] = ((/* implicit */unsigned int) arr_14 [i_12 - 2]);
                        }
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)83))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_38 [i_10] [i_10 - 2] [i_10])))))))) : (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) arr_34 [i_8] [i_8]))))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned char) var_12);
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        arr_47 [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (min((min((((/* implicit */unsigned int) var_8)), (var_4))), (((/* implicit */unsigned int) arr_37 [i_13 - 1] [i_13] [i_13 - 1]))))));
        var_41 = ((/* implicit */signed char) max((var_41), (var_2)));
        var_42 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_13 - 1])) ? (((arr_12 [i_13] [i_13 - 1]) ? (((/* implicit */long long int) var_4)) : (max((-6823759823577910131LL), (((/* implicit */long long int) arr_0 [i_13])))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((var_13), (((/* implicit */unsigned int) arr_45 [i_13])))))))));
    }
}
