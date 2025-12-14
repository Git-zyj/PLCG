/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236153
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_2);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */int) (~(arr_4 [15U] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2] [(unsigned char)10] [i_0] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_12 [17] [i_4 + 1] [17]))))));
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_0)))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_2 [(short)8])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)96))) : (14680064U)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (short)107)))))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [13ULL] [i_2] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_19 [i_0] [18LL] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_2] [i_2])) : (((/* implicit */int) arr_17 [i_2] [i_5]))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 14680064U)) ? (1668257483516851757LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
                        arr_20 [i_0] [i_5] [2] [(unsigned char)16] |= ((/* implicit */unsigned long long int) arr_10 [i_5] [(signed char)19] [(_Bool)1] [i_5]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_4 [i_1] [i_1] [(signed char)12]))));
                            var_24 = ((((/* implicit */_Bool) arr_18 [i_6 + 3] [i_6 + 2])) ? (var_5) : (((/* implicit */int) arr_13 [i_6 + 4] [i_6 - 1] [i_6] [(short)6] [i_2])));
                        }
                    }
                    for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_10 [10LL] [i_2] [i_1] [i_0]), (arr_10 [i_0] [i_1] [i_2] [i_7])))) > (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_7 + 1]))))));
                    }
                    for (signed char i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) (short)1013)))))));
                        var_28 -= ((/* implicit */unsigned char) arr_11 [(signed char)10] [(short)2] [(short)2] [i_8] [(short)6] [(signed char)16]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_1 [i_1])))));
                                arr_36 [(short)3] [i_1] [(signed char)16] [(signed char)16] [i_2] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [14LL] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned char) arr_8 [i_0] [(unsigned char)8]);
        arr_37 [(_Bool)1] = ((/* implicit */int) (!((((!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)1] [i_0])))) || (arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (long long int i_12 = 1; i_12 < 21; i_12 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_31 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_12 + 1] [i_12 + 1] [i_12]))))) / (((/* implicit */int) min(((short)90), ((short)-81)))));
                    arr_44 [4] [i_11] [i_12] [18ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_6 [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_11] [i_12 - 1] [i_12 - 1])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_12 - 1] [i_12] [i_13] [i_13])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11])) ? (((/* implicit */int) arr_26 [i_12 - 1] [i_11] [i_11] [i_12 + 1])) : (((/* implicit */int) arr_39 [i_11]))))) ? ((-(((/* implicit */int) arr_39 [i_11])))) : (((/* implicit */int) var_18))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [5ULL])) ? ((~(((long long int) arr_28 [i_11] [21LL] [16ULL] [21LL])))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        arr_48 [11] [i_11] = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_7 [i_11] [(signed char)7] [(signed char)17] [i_11])))));
                        var_34 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_6 [i_11] [(_Bool)1])))));
                        arr_49 [i_11] [i_14] [i_13] [5U] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_11] [i_11] [i_12]))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */int) (((((-(((((/* implicit */_Bool) arr_41 [(_Bool)1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_11] [i_12] [i_13] [i_13] [i_13] [i_13]))) : (arr_52 [i_11] [i_11] [i_15]))))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_12] [14LL] [i_12 - 1] [i_11])))))));
                        var_36 = ((/* implicit */_Bool) min((((signed char) ((var_6) << (((arr_52 [(_Bool)1] [(short)5] [i_11]) - (7930895107023993135LL)))))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((2285645978U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_11] [i_11] [18U] [(short)10] [(signed char)18] [15U])))))))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */int) ((((/* implicit */int) arr_12 [4LL] [i_12 - 1] [i_12 - 1])) <= (((/* implicit */int) arr_12 [i_16] [i_12 + 1] [i_12 + 1]))));
                        var_38 = ((/* implicit */signed char) (((-(var_12))) / (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                    }
                    for (long long int i_17 = 2; i_17 < 20; i_17 += 1) 
                    {
                        var_39 += ((/* implicit */long long int) min((((/* implicit */signed char) ((_Bool) (signed char)25))), (((signed char) (_Bool)1))));
                        var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)18232))));
                        var_41 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_8 [i_11] [i_11]))))));
                    }
                    arr_59 [i_12] [i_12] [i_12] [i_11] = var_17;
                }
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    var_42 &= ((/* implicit */long long int) (-(((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (13067829127004473510ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 2; i_19 < 18; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                                var_44 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)104)) | (((((/* implicit */_Bool) arr_41 [i_19 + 2] [i_12 + 1])) ? (((/* implicit */int) arr_41 [i_19 + 2] [i_12 + 1])) : (((/* implicit */int) arr_41 [i_19 + 2] [i_12 + 1]))))));
                                arr_69 [i_11] [i_11] [i_11] [i_19] [i_11] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_11] [i_11] [i_18]))))) >= (((/* implicit */int) arr_22 [i_11] [i_12] [(_Bool)1] [3U] [i_20]))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_24 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1]) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))))))));
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) arr_61 [(_Bool)1] [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)21)) ? (2009321318U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11982)))));
                                var_48 = ((/* implicit */_Bool) ((int) ((int) arr_26 [i_12] [i_11] [i_12] [i_12])));
                            }
                        } 
                    } 
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                {
                    var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) arr_30 [(unsigned char)12] [(signed char)6] [(signed char)6] [i_11])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_11] [i_23] [i_23] [(_Bool)1] [i_23] [i_23])))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) arr_17 [(_Bool)1] [(_Bool)1])), (arr_75 [i_11] [i_12] [i_12] [12LL]))))))))))));
                    arr_77 [i_11] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) ((signed char) arr_28 [i_11] [i_11] [i_12 - 1] [i_12 + 1]));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                {
                    var_50 = ((/* implicit */int) (short)9892);
                    /* LoopNest 2 */
                    for (short i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        for (int i_26 = 0; i_26 < 22; i_26 += 1) 
                        {
                            {
                                var_51 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) (unsigned short)8192)))));
                                var_52 = ((/* implicit */unsigned long long int) ((((int) (-(((/* implicit */int) arr_31 [(short)3] [(short)3] [(short)3] [i_25]))))) * (((/* implicit */int) arr_41 [i_12] [i_25]))));
                            }
                        } 
                    } 
                    arr_85 [i_11] [10] [(short)10] |= ((/* implicit */unsigned short) ((int) (signed char)-66));
                }
                var_53 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_75 [i_12 + 1] [i_12] [(short)19] [i_11])) ? (((/* implicit */int) arr_75 [i_12 + 1] [i_12] [i_12 + 1] [i_11])) : (((/* implicit */int) arr_75 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_11])))));
            }
        } 
    } 
    var_54 = ((short) (!(((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_0))))));
}
