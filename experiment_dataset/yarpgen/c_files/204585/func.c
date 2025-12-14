/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204585
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) 1754837516);
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1754837519)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1])))) * (((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
                }
            } 
        } 
        arr_11 [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_14 [i_3 - 1]))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_6 [(short)6] [(short)6]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_25 [i_3] [i_5] = ((/* implicit */signed char) arr_17 [i_3 + 2] [i_7]);
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) 4294967291U);
                            var_23 = ((/* implicit */short) arr_14 [i_3]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_3 + 3])) && (((/* implicit */_Bool) arr_2 [i_3 + 1]))));
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))) == (var_14)));
                            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_3] [i_3 - 1] [i_5] [i_4] [i_5 - 1] [i_6] [i_8]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            arr_32 [i_3] [i_4] [i_5] [i_6] [i_9] = ((/* implicit */unsigned int) arr_15 [(short)11] [1ULL] [6U]);
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(((/* implicit */int) var_19)))))));
                            var_28 -= ((/* implicit */unsigned long long int) var_13);
                            arr_33 [i_5] [i_6] [i_3 - 2] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_5 - 1])) ? (((/* implicit */long long int) arr_1 [i_3 - 1])) : (var_3)))) ? (((((/* implicit */int) var_2)) % (((/* implicit */int) (_Bool)1)))) : (1754837524)));
                            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 + 2] [i_3 - 2]))) : (arr_31 [i_3] [i_3] [i_3 + 3] [i_5 + 2] [i_9])));
                        }
                        var_30 -= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_5])) < (var_5))) ? (((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_4] [i_6])) ? (var_3) : (((/* implicit */long long int) arr_19 [i_3] [i_3] [i_3] [i_6])))) : (((/* implicit */long long int) arr_23 [i_3] [i_6] [i_3]))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((arr_14 [i_3 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned int) arr_12 [i_3 - 2])), (var_16))));
                        var_33 = ((/* implicit */int) arr_12 [i_5]);
                        arr_36 [i_3 + 2] [i_10] [i_5] [i_10] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (((/* implicit */unsigned long long int) arr_19 [i_10] [i_5 - 1] [i_4] [i_10])) : (arr_14 [i_3]))))), (((((/* implicit */_Bool) (short)-32745)) ? (((/* implicit */unsigned long long int) 1754837516)) : (2873409231676664657ULL)))));
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -99202997)) : (arr_34 [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_5] [i_10])))) && (((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 2])))))))) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_5 + 1] [i_5 - 1])) ? (arr_34 [3U] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 1]) : (-3618100763455282596LL))) : (((/* implicit */long long int) arr_16 [i_3] [i_3])))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                    {
                        arr_39 [i_11] [i_5] [i_5] [i_3] = arr_17 [i_4] [3U];
                        var_35 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(var_5)))) ? (((arr_7 [i_11]) << (((((/* implicit */int) var_15)) + (30909))))) : (((arr_23 [i_5] [i_11] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 2; i_12 < 19; i_12 += 1) 
                    {
                        arr_44 [3LL] [i_4] [i_5] [i_5] [i_12] = (~(((unsigned int) arr_17 [8U] [i_4])));
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)92))))) / (((/* implicit */int) arr_12 [i_3 + 3]))));
                    }
                    arr_45 [i_3] [(unsigned char)10] [i_5] [12LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_5 - 1] [i_5] [i_5 - 1] [i_5])) ? ((+(var_8))) : (4294967295U)));
                    var_37 = ((/* implicit */unsigned char) (-(arr_29 [i_4] [(signed char)6] [i_4])));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_13 = 1; i_13 < 19; i_13 += 1) 
        {
            for (short i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_55 [i_3] [i_13] [i_14 - 1] [i_15] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_3] [(unsigned char)9] [i_13] [i_14] [i_15] [i_15]) != (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_3] [i_3] [i_3]))))))) % (max((((/* implicit */unsigned int) arr_30 [i_3 + 2] [i_13 - 1] [i_14 - 1] [i_3 + 2] [i_15] [i_15] [i_3 + 2])), (var_16))))));
                        var_38 *= ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (-(-1754837517)))), (((long long int) 1754837516)))), (((/* implicit */long long int) max((arr_4 [i_3 - 1] [i_3 + 1] [i_3 - 1]), (((/* implicit */short) ((_Bool) arr_48 [(short)4] [(short)4]))))))));
                    }
                } 
            } 
        } 
    }
}
