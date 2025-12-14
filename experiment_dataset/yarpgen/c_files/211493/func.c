/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211493
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_3] = arr_4 [i_0] [i_1];
                        arr_11 [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1 - 2] [i_2])), ((~(((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31927))) : (arr_1 [i_0] [i_1])))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_3 [i_0] [i_0]) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))))) ? (min((arr_9 [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) var_1))));
        arr_12 [i_0] [i_0] = min((-5563240616344493241LL), (((/* implicit */long long int) (~(((var_6) | (561163323)))))));
        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 561163323)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) -113530601)) ? (4294967295U) : (4294967295U)))));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) 12045506867647062343ULL))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) -1)) : (arr_16 [i_4 - 1] [i_6 - 1]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_8))));
                    arr_30 [i_6] [i_5] [i_5] [i_4] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (signed char)113)) : (-1382621444)));
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 15; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_35 [i_4] [i_5] [i_6] [i_9 + 1] [i_5] = ((/* implicit */short) ((arr_21 [i_5] [i_5] [i_5] [i_4 - 1]) > (arr_21 [i_6] [i_5] [i_5] [i_4 - 1])));
                                arr_36 [i_5] = ((/* implicit */unsigned short) var_11);
                                arr_37 [i_4 - 1] [i_5] [i_5] [i_9 - 2] = ((/* implicit */unsigned char) arr_32 [i_5] [i_5] [i_9] [i_10]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(arr_34 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1]))))));
        arr_38 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_4 - 1] [(unsigned short)12] [i_4])) : (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
            {
                {
                    arr_47 [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) arr_22 [i_4 - 1] [i_4] [i_4 - 1] [i_4]));
                    arr_48 [i_4 - 1] [i_4 - 1] [i_4] &= ((/* implicit */_Bool) ((((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-7135))))) ? (((((/* implicit */_Bool) 9646209322987666229ULL)) ? (((/* implicit */unsigned long long int) 1884210525)) : (7806405422432421081ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -589096923)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
                    var_17 ^= (-(arr_25 [i_11]));
                    var_18 ^= ((/* implicit */unsigned long long int) (-((+(234881024)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        arr_51 [i_13] [i_13] = max((((((((/* implicit */_Bool) (short)2431)) ? (3ULL) : (7318210657919684489ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_13] [i_13] [i_13]) <= (((/* implicit */unsigned long long int) var_1)))))))), ((!(((/* implicit */_Bool) ((arr_1 [9ULL] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13])))))))));
        var_19 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) 561163313)), (((((/* implicit */_Bool) arr_7 [i_13] [i_13] [i_13] [i_13])) ? (637987972716299118ULL) : (((/* implicit */unsigned long long int) arr_5 [i_13] [i_13] [i_13]))))))));
        arr_52 [(_Bool)1] = ((/* implicit */unsigned char) arr_0 [i_13]);
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) max((2040U), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_7 [i_13] [i_13] [i_13] [i_13])), (arr_54 [i_13] [i_13] [i_15]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        for (unsigned short i_17 = 2; i_17 < 15; i_17 += 1) 
                        {
                            {
                                arr_62 [i_13] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_17 + 2] [i_14])) ? (arr_53 [i_14] [i_17]) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (1889240472U)))))))));
                                arr_63 [i_14] [13] [1LL] [i_14] = (-(max((((/* implicit */unsigned long long int) ((short) var_0))), (arr_57 [i_17 + 1] [i_17 + 2] [i_17] [i_17 + 1] [i_17]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 1; i_18 < 15; i_18 += 2) 
                    {
                        for (long long int i_19 = 1; i_19 < 13; i_19 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (_Bool)1);
                                var_22 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_18 + 1] [i_13] [i_18 + 2] [i_18])))))) ^ (1889240472U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (int i_20 = 0; i_20 < 13; i_20 += 2) 
    {
        for (signed char i_21 = 1; i_21 < 11; i_21 += 2) 
        {
            for (unsigned int i_22 = 0; i_22 < 13; i_22 += 2) 
            {
                {
                    arr_76 [(unsigned char)1] = ((/* implicit */unsigned short) arr_70 [i_21 + 2]);
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 2; i_23 < 11; i_23 += 4) 
                    {
                        for (unsigned char i_24 = 1; i_24 < 11; i_24 += 3) 
                        {
                            {
                                arr_82 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_24 + 2]), (((/* implicit */int) arr_7 [i_21 - 1] [i_21 + 2] [i_21 - 1] [i_21 - 1])))))));
                                arr_83 [i_24] [i_20] [i_22] [i_21] [i_20] [i_20] [i_20] = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) != (min((((/* implicit */unsigned long long int) arr_26 [i_20] [i_20] [i_20] [i_20])), (var_2)))))), (max((1862954357), (((/* implicit */int) arr_6 [i_21 - 1] [i_23 - 1] [i_24 + 2])))));
                                var_23 = ((((/* implicit */_Bool) arr_9 [i_21] [i_21] [i_24])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(561163305)))) ? (((/* implicit */unsigned int) -4)) : (min((((/* implicit */unsigned int) (_Bool)1)), (4023591490U)))))) : (((((/* implicit */_Bool) arr_34 [i_21] [i_21 + 1] [i_23 - 2] [i_24 - 1] [i_24 - 1])) ? (((/* implicit */unsigned long long int) arr_34 [i_21] [i_21 + 2] [i_23 - 2] [i_24 - 1] [i_24 + 1])) : (var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
