/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26399
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
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (min((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105))))))) : (((((/* implicit */int) ((_Bool) var_9))) * (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (-74129589)))))));
    var_15 -= max((min((6910202057283628387ULL), (((var_3) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21279))))))), (((/* implicit */unsigned long long int) var_1)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? ((+(((/* implicit */int) (unsigned char)107)))) : (var_10));
        var_16 = ((/* implicit */long long int) ((((arr_1 [i_0]) ? (14413022992067878470ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) * (((/* implicit */unsigned long long int) (-(arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_17 -= ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_1] [i_1])), ((signed char)-99)))) & (((/* implicit */int) ((short) var_2))))) ^ (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1]))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (short)9745)))) << ((((((+(((/* implicit */int) arr_6 [i_0] [i_1])))) + (2802))) - (17)))));
            arr_8 [i_0] [i_0] [i_1] = ((_Bool) ((((((/* implicit */_Bool) (short)21831)) ? (((/* implicit */int) (unsigned short)63183)) : (((/* implicit */int) arr_6 [i_0] [i_1])))) / (((/* implicit */int) min((arr_6 [i_0] [i_1]), (var_0))))));
            var_18 |= ((/* implicit */unsigned short) max((var_2), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_0]))) != (var_9)))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] [(short)9] = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((short)29122), (((/* implicit */short) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_3 [i_0]))))))))));
            arr_12 [i_0] = ((((/* implicit */int) arr_1 [i_0])) <= (((((/* implicit */int) (short)21831)) >> (((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
            {
                arr_15 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) var_4));
                arr_16 [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0])));
            }
            for (int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), ((-(max((3527131001398075421ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2])))))))))));
                            arr_25 [i_0] = ((/* implicit */_Bool) (+((~((-(((/* implicit */int) (signed char)2))))))));
                            arr_26 [15ULL] [i_0] [i_4] [(unsigned char)8] [i_6 + 1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                            var_20 -= ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [4ULL] [i_6]))) & (4033721081641673145ULL))), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_2] [i_6 + 1] [i_5] [i_6] [i_4] [i_4])))) | ((~((~(11536542016425923256ULL)))))));
                            var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_13)))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_17 [i_0] [i_2]))))))) ? (((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))) : (2410287319U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_28 [i_2] [i_0] = ((/* implicit */short) (~(3100478162U)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)82)))))));
                            arr_38 [15] [i_0] [i_7] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (-1425765776)));
                            var_23 *= ((/* implicit */unsigned char) (short)-21831);
                            var_24 *= arr_31 [i_8] [i_8] [i_2] [6U];
                            var_25 = ((/* implicit */signed char) ((((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2352))))) < (((/* implicit */unsigned int) (+(((/* implicit */int) (short)30198)))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned char)195))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)52492)))))));
                var_27 = ((/* implicit */unsigned long long int) ((arr_5 [i_2] [(unsigned short)7]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_7]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_43 [i_0] [(unsigned short)6] [i_7] [i_10] = ((/* implicit */unsigned int) ((11536542016425923229ULL) < (((/* implicit */unsigned long long int) 1824773449U))));
                    var_28 = ((/* implicit */unsigned char) (+(var_5)));
                }
                for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    arr_48 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                    arr_49 [i_7] [i_7] [18] [i_0] = (((-(((/* implicit */int) arr_24 [i_0] [i_2] [i_7] [i_0] [i_11] [i_11])))) != (arr_46 [i_11] [i_0] [i_0] [i_0]));
                    var_29 -= ((/* implicit */_Bool) ((arr_33 [i_0] [i_2] [i_0] [i_2] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)-25782))))))));
                }
                arr_50 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_41 [i_0] [i_2] [i_7])))) && (((/* implicit */_Bool) (-(1824773462U))))));
            }
            var_30 = ((/* implicit */int) max((var_30), (((-1121646183) / (((/* implicit */int) (short)21831))))));
        }
        var_31 = ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        arr_54 [i_12] [i_12] = ((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-123)))))) : (((((/* implicit */_Bool) arr_17 [i_12] [(unsigned short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_12] [i_12]))) : (var_9)))));
        var_32 = ((/* implicit */long long int) arr_23 [i_12] [i_12] [i_12] [i_12]);
        arr_55 [i_12] = ((/* implicit */long long int) (+(((2470193846U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13043)))))));
        arr_56 [i_12] = ((/* implicit */unsigned short) (((_Bool)1) ? (1464599867) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (short i_13 = 1; i_13 < 13; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    {
                        arr_65 [i_14] [i_15] = ((/* implicit */unsigned int) (-(var_5)));
                        arr_66 [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_13 - 1] [i_13 + 1]))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}
