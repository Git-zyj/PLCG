/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222465
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((short) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_1])) == (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_0 [i_1 - 1]) != (arr_0 [i_1 + 1]))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_5 [i_2] [i_2])))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32767))));
        var_21 = ((/* implicit */_Bool) ((unsigned char) arr_1 [i_2] [i_2]));
        var_22 &= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_1 [i_2] [i_2]))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_0 [i_3]) : (arr_9 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_2 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (arr_9 [i_3])))))) : (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_3]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_3]))))) : (arr_8 [i_3])))));
        var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) ((arr_7 [i_3]) ? ((~(((/* implicit */int) arr_7 [i_3])))) : ((-(((/* implicit */int) arr_7 [i_3]))))))), (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-32766)) / (((/* implicit */int) (short)32767))))) : (((arr_8 [i_3]) << (((/* implicit */int) arr_7 [i_3]))))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_3]), (((/* implicit */unsigned int) ((arr_2 [i_3]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_7 [i_3])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [i_3]), (arr_7 [i_3])))) << (((((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3]))))) - (451310140U)))))) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (arr_0 [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) % (arr_9 [i_3])))))));
        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (short)20283)) : (((/* implicit */int) (short)-25035))))) ? (((((/* implicit */int) (unsigned char)185)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)43)))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) arr_11 [i_4] [i_5])))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) > (((/* implicit */int) arr_2 [i_5]))))) : (((/* implicit */int) arr_11 [i_5] [i_5]))));
            var_29 = ((/* implicit */unsigned int) (-(((arr_2 [i_4]) ? (((/* implicit */int) arr_11 [i_5] [i_4])) : (((/* implicit */int) arr_12 [i_4] [i_5] [i_5]))))));
        }
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [(unsigned char)8])) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_4]))))) ? (arr_0 [7U]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_4] [i_4])) % (((/* implicit */int) arr_2 [i_4])))))));
        var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4] [i_4]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_18 [i_6])) : (((/* implicit */int) ((unsigned char) arr_1 [(_Bool)1] [i_6])))));
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_6])) ? ((-(((/* implicit */int) arr_14 [i_6])))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)96))))));
        var_34 = ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_6]))))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6]))) * (arr_0 [i_6]))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_7])) | (((/* implicit */int) arr_7 [i_6])))))));
            var_36 = ((/* implicit */unsigned char) ((short) arr_7 [i_6]));
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_2 [i_6])))) - (((/* implicit */int) ((arr_8 [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [i_6]))))))));
            var_38 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_6])) != (((/* implicit */int) arr_10 [i_6]))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_6]))))) ? ((~(((/* implicit */int) arr_13 [i_6] [i_8])))) : (((((/* implicit */int) arr_5 [i_8] [i_8])) ^ (((/* implicit */int) (_Bool)1))))));
        }
        var_40 = arr_8 [i_6];
    }
    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)160))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) min((var_13), (var_2)))) % ((((_Bool)1) ? (((/* implicit */int) (short)-497)) : (((/* implicit */int) (short)-5))))))));
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_9]), (arr_3 [i_9])))) ? (((/* implicit */int) (!(arr_7 [i_9])))) : (((((/* implicit */int) ((short) (short)-493))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_9])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_43 = ((/* implicit */unsigned char) ((arr_2 [2U]) ? (((/* implicit */int) ((unsigned char) arr_7 [i_9]))) : (((/* implicit */int) ((unsigned char) arr_1 [i_9] [i_10])))));
            var_44 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9]))) : (arr_9 [i_9])))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_9])))))));
            var_45 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned char)199)) - (((/* implicit */int) (_Bool)0)))));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_46 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_9]))))) ? (((((/* implicit */_Bool) arr_10 [i_9])) ? (((/* implicit */int) arr_11 [i_9] [i_9])) : (((/* implicit */int) arr_3 [i_9])))) : (((/* implicit */int) ((arr_29 [i_9] [(unsigned char)8]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned char)2])))))))) == (((((((/* implicit */int) arr_27 [i_9] [i_9] [i_11 - 1])) + (2147483647))) << (((((/* implicit */int) arr_13 [i_11] [i_11])) - (79)))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_47 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_7 [i_12]))) ? (((/* implicit */int) arr_4 [i_11 - 1])) : (((((/* implicit */int) arr_10 [i_11])) | (((/* implicit */int) arr_3 [i_9]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13]))) : (((((((/* implicit */_Bool) arr_10 [i_13])) ? (arr_8 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_12]))))) & ((~(arr_9 [i_11]))))));
                        var_48 -= ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) arr_30 [i_9] [i_11] [i_12])) ? (arr_29 [i_9] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_9] [i_11])))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_49 = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_13]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_9] [i_11])) >> (((/* implicit */int) arr_7 [i_9]))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_9]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9] [i_9])) ? (arr_29 [i_11] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_14 - 1])))))) ? (((arr_34 [(short)9] [i_11] [i_11] [i_11]) >> (((arr_29 [(unsigned char)3] [i_9]) - (2157697008U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11] [i_11] [i_9] [i_11 - 1]))))));
                            var_50 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) - (4294967295U)))) ? ((+(((/* implicit */int) arr_33 [i_9] [i_9])))) : (((((/* implicit */int) arr_33 [i_9] [i_9])) - (((/* implicit */int) arr_5 [i_9] [i_14]))))))));
                        }
                        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                        {
                            var_51 = ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_11]))));
                            var_52 *= ((/* implicit */short) arr_31 [i_9]);
                        }
                        /* vectorizable */
                        for (unsigned char i_16 = 4; i_16 < 9; i_16 += 4) 
                        {
                            var_53 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_12])) + (((/* implicit */int) arr_3 [i_9])))) - (((/* implicit */int) arr_12 [i_9] [i_11] [i_11]))));
                            var_54 = ((/* implicit */_Bool) ((arr_5 [i_11 - 1] [i_16 - 4]) ? (arr_30 [i_11 - 1] [i_12] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_11 - 1] [i_16 + 3])))));
                        }
                        var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_35 [i_9] [i_11] [i_12] [i_9])))) >= (((arr_30 [i_9] [i_11] [i_12]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_11])))))))), (((((arr_5 [i_9] [i_11]) || (((/* implicit */_Bool) arr_14 [i_11])))) ? (((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_11] [(short)10])) ? (((/* implicit */int) arr_3 [i_13])) : (((/* implicit */int) arr_33 [i_9] [(unsigned char)5])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9] [i_12])) && (((/* implicit */_Bool) arr_8 [i_9]))))))))))));
                    }
                } 
            } 
            var_56 *= ((_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_9]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_42 [i_9] [i_9] [i_9] [i_9]), (arr_1 [i_9] [i_11]))))) : (((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [2U])) ? (arr_35 [i_11] [(_Bool)1] [(_Bool)1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9])))))));
        }
        var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_34 [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [18U] [i_9]))) : ((-(min((((/* implicit */unsigned int) arr_28 [(unsigned char)10])), (arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))))));
    }
    var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1023U)) ? (688435976U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32762)))))));
}
