/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19215
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))) < (arr_2 [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_1] [i_1]))));
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) arr_1 [i_4]);
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (((_Bool)0) ? (79343561U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 4; i_6 < 14; i_6 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned char) ((_Bool) arr_22 [i_1] [i_1] [i_1] [i_5] [i_6] [i_6 + 3]));
                            arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] = (~(arr_2 [i_2] [i_5]));
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_24 [i_0] [i_1] [i_2] [i_2]))))));
                            var_14 -= ((var_10) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (arr_12 [i_0] [i_1])))));
                            arr_28 [i_1] = ((/* implicit */signed char) ((unsigned char) arr_8 [i_2] [i_1] [i_1] [i_2]));
                        }
                    }
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_8] [i_0] [i_8 + 3] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2]))) - (var_4)));
                        var_15 = ((/* implicit */short) arr_14 [i_1]);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_35 [i_2] [i_1] [i_1] [i_2] [i_2] [i_9] |= ((/* implicit */signed char) var_1);
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((arr_8 [i_9] [i_9] [i_2] [i_9]) - (((/* implicit */unsigned int) arr_24 [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    arr_36 [i_1] [i_1] [i_2] = (~(((arr_22 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]) ? (((/* implicit */long long int) arr_33 [i_1] [i_1] [i_2] [i_1] [i_0])) : (arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_0]))));
                    arr_37 [i_1] [i_1] = ((/* implicit */unsigned int) (~((((_Bool)1) ? (27021597764222976LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    var_17 = ((/* implicit */long long int) (signed char)2);
                    arr_38 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3373528537745032742ULL) == (3373528537745032742ULL))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_2]))) ^ (arr_12 [i_1] [i_1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_10 = 3; i_10 < 16; i_10 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned int) arr_23 [i_0] [i_10 - 3] [i_10 - 3] [i_10] [i_10 - 3]));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((-6856916971365049428LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22742))))))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 15; i_11 += 2) 
            {
                arr_44 [i_10 - 3] = ((/* implicit */short) (+(((/* implicit */int) arr_42 [i_11 - 1] [i_10 - 3] [i_11 - 1] [i_11]))));
                arr_45 [i_0] [i_10 - 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_10 - 2])) ? (((/* implicit */int) arr_3 [i_11] [i_10 - 2])) : (((/* implicit */int) arr_3 [i_11] [i_10 - 2]))));
            }
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_41 [i_12] [i_0])))) == (arr_12 [i_10] [i_10])));
                arr_48 [i_12] [i_12] [i_10] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_23 [i_10 - 1] [i_10] [i_10] [i_12] [i_10]));
            }
            for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 4) 
            {
                var_21 += ((/* implicit */short) var_10);
                var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0] [i_10])) / (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_10])))))));
                arr_52 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (arr_29 [i_13] [i_10] [i_0] [i_0]))));
                var_23 -= ((/* implicit */short) arr_0 [i_10 - 1]);
                /* LoopSeq 1 */
                for (int i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    arr_55 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_10]);
                    arr_56 [i_14 - 1] [i_13] [i_10] [i_0] = ((/* implicit */signed char) arr_24 [i_0] [i_10] [i_13] [i_14]);
                    arr_57 [i_0] [i_0] [i_13] [i_13] [i_14] = ((/* implicit */signed char) arr_22 [i_0] [i_14 + 1] [i_0] [i_13 + 1] [i_13] [i_0]);
                }
            }
            for (int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                var_24 += ((/* implicit */long long int) ((short) arr_3 [i_15] [i_10 + 1]));
                var_25 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_10])) | (((/* implicit */int) arr_7 [i_15] [i_10 + 1]))));
            }
        }
    }
    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) 
    {
        arr_65 [i_16] [i_16] = ((/* implicit */_Bool) ((unsigned long long int) arr_62 [i_16]));
        arr_66 [i_16] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_16] [i_16]))) <= ((~(arr_63 [i_16])))));
        var_26 *= ((/* implicit */signed char) arr_64 [i_16] [i_16]);
        arr_67 [i_16] [i_16] &= ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)57)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_16])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_16] [i_16])) || (((/* implicit */_Bool) arr_64 [i_16] [i_16]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_16] [i_16])) && (((/* implicit */_Bool) 15073215535964518874ULL)))))))) : (5364894970844401750LL)));
    }
    for (signed char i_17 = 2; i_17 < 15; i_17 += 2) 
    {
        var_27 += ((/* implicit */signed char) ((unsigned char) ((signed char) var_6)));
        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_17] [i_17] [i_17 + 1] [i_17 + 1] [i_17])) ? (max((var_6), (((/* implicit */long long int) arr_32 [i_17 + 1] [i_17] [i_17] [i_17])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_62 [i_17 + 1])))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)22733)))) * (min((arr_19 [i_17] [i_17] [i_17 + 1] [i_17 - 2] [i_17]), (((/* implicit */int) arr_54 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 - 2] [i_17 + 1]))))));
        var_30 -= ((((((/* implicit */_Bool) max((arr_59 [i_17]), ((unsigned char)196)))) ? (max((arr_68 [i_17]), (((/* implicit */long long int) arr_0 [i_17])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_47 [i_17] [i_17] [i_17]), (arr_3 [i_17] [i_17]))))))) > (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_17 + 1] [i_17])))))))));
    }
    var_31 = ((/* implicit */_Bool) var_1);
    var_32 |= ((/* implicit */long long int) var_4);
    var_33 |= max((((/* implicit */int) max((var_0), (var_8)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)16409))))) : (((/* implicit */int) min((var_5), (((/* implicit */short) var_8))))))));
}
