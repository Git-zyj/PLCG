/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30523
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (arr_4 [i_0] [i_1] [(short)12])))) : (arr_5 [22U] [i_1]))) < (((/* implicit */int) ((((var_1) && (((/* implicit */_Bool) (short)3449)))) || (((/* implicit */_Bool) (unsigned short)65535))))))))));
            arr_6 [4] &= ((unsigned long long int) max((var_2), (((/* implicit */unsigned char) ((_Bool) var_18)))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((arr_5 [i_0] [i_2]) >= (arr_9 [i_0] [i_2]));
            arr_10 [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_2]);
        }
        arr_11 [i_0] = ((/* implicit */unsigned int) arr_8 [i_0]);
        var_22 = ((min((((/* implicit */long long int) arr_1 [i_0])), (((long long int) arr_9 [i_0] [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0])))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [(unsigned short)12])) << (((arr_3 [i_3]) - (6650456072449619863LL))))) << ((((((-(((/* implicit */int) arr_0 [(short)8])))) + (26547))) - (29)))));
        var_24 |= ((/* implicit */unsigned char) arr_5 [(short)20] [i_3]);
        var_25 = ((/* implicit */unsigned int) (short)-28804);
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                var_26 = ((/* implicit */int) (((_Bool)1) || (((-1560641616) != (arr_14 [i_5] [i_5] [i_5])))));
                var_27 = ((/* implicit */short) (((~(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((((/* implicit */int) var_7)) != (arr_9 [21LL] [(unsigned char)15]))))));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_21 [i_3] [i_3] [i_4] [i_6] = ((/* implicit */_Bool) ((((var_6) + (2147483647))) >> (((arr_13 [i_4 - 1] [i_4]) - (5910717741880023882LL)))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 1679645277)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15))));
                    arr_22 [i_4] [i_4] = ((/* implicit */short) arr_17 [i_4 + 1] [i_6] [i_4 + 1]);
                    var_29 = var_3;
                }
                var_30 = ((/* implicit */unsigned char) var_5);
                arr_23 [i_4 + 1] [i_4] [i_5] [i_4] = ((((/* implicit */int) arr_8 [i_4 + 1])) - (((/* implicit */int) var_15)));
            }
            var_31 -= ((/* implicit */short) arr_14 [i_3] [i_3] [i_4]);
        }
        for (int i_7 = 2; i_7 < 7; i_7 += 2) 
        {
            var_32 = ((/* implicit */long long int) max((var_32), (((((((/* implicit */int) var_15)) > (((((/* implicit */_Bool) arr_16 [i_3] [i_7] [2LL])) ? (((/* implicit */int) arr_25 [i_3] [i_7])) : (((/* implicit */int) arr_16 [i_3] [i_7] [i_7 + 1])))))) ? (((/* implicit */long long int) ((((var_18) / (((/* implicit */int) (unsigned short)65525)))) / (-1679645258)))) : (((var_3) ^ (((/* implicit */long long int) min((var_6), (((/* implicit */int) arr_12 [i_3])))))))))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3] [i_7 + 1])) / (((/* implicit */int) arr_25 [i_7] [i_7 - 2]))))) ? ((~(((/* implicit */int) arr_25 [i_7] [i_7 - 1])))) : (var_14)));
            arr_26 [i_3] [5LL] [i_7 - 1] &= ((/* implicit */unsigned short) ((max((((((/* implicit */int) (signed char)-3)) * (((/* implicit */int) (unsigned short)65501)))), (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_25 [i_7 + 3] [i_7])))))));
            /* LoopSeq 2 */
            for (short i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                arr_30 [i_8] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) -1679645299)) ? (((1773753831) / (((/* implicit */int) var_2)))) : ((~(630754160))))));
                var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((arr_2 [i_8]) * (((/* implicit */unsigned long long int) var_12)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (9223372036854775799LL) : (((/* implicit */long long int) arr_1 [i_3])))))))), (((max((arr_17 [i_3] [i_3] [i_3]), (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_24 [i_3]))))));
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_9))));
            }
            /* vectorizable */
            for (unsigned short i_9 = 4; i_9 < 8; i_9 += 4) 
            {
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) arr_25 [i_3] [4LL]))));
                arr_34 [i_7 - 1] [i_9] [i_3] = ((/* implicit */unsigned short) ((var_14) << (((((/* implicit */int) arr_8 [i_7 + 1])) - (28310)))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            var_37 += ((((/* implicit */_Bool) arr_1 [i_11])) || (((/* implicit */_Bool) arr_1 [i_10])));
            arr_39 [i_11] = ((/* implicit */unsigned char) var_4);
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (short)29122))));
            var_39 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_37 [i_12 - 1] [i_12 - 1] [i_12 - 1])) * (((arr_42 [i_12]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            arr_43 [i_10] = ((/* implicit */int) ((short) var_4));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                arr_47 [i_10] [(short)6] = ((((/* implicit */_Bool) arr_37 [i_12 - 1] [i_12 - 1] [i_13 - 1])) ? (var_12) : (((/* implicit */unsigned int) var_18)));
                arr_48 [i_10] [i_12] [i_13 + 1] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_10] [i_12] [i_12 - 1] [i_13 + 4])) > (((/* implicit */int) arr_46 [i_10] [i_12] [i_12 - 1] [i_13 + 2]))));
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_41 [i_10] [i_12] [i_13])) > (var_14)))) * (((/* implicit */int) arr_35 [i_12 - 1]))));
                var_41 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) var_17)) >= (1679645283))));
                var_42 = ((/* implicit */unsigned int) ((((arr_45 [i_10] [13U] [i_12] [i_13]) < (((/* implicit */long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_8 [(short)19]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) 18446744073709551613ULL)))))));
            }
            var_43 = ((arr_5 [6LL] [i_12 - 1]) << (((((((/* implicit */int) var_2)) | (var_14))) - (537586858))));
        }
        for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) var_6))));
            /* LoopSeq 1 */
            for (unsigned short i_15 = 1; i_15 < 18; i_15 += 3) 
            {
                arr_54 [i_10] [(short)16] [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-19288)) <= (((/* implicit */int) (short)21344))))) > (((/* implicit */int) (signed char)109))));
                arr_55 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28417)) && (var_5)));
                /* LoopSeq 2 */
                for (short i_16 = 1; i_16 < 17; i_16 += 1) 
                {
                    var_45 -= ((/* implicit */short) ((((/* implicit */int) arr_36 [i_10])) << (((var_14) - (537586723)))));
                    var_46 = ((/* implicit */int) ((short) arr_35 [i_16 - 1]));
                    arr_59 [i_10] [i_16] = ((/* implicit */unsigned int) ((_Bool) arr_4 [i_10] [i_10] [i_16]));
                    arr_60 [i_16] [i_14] [i_14] [i_14] = ((arr_52 [i_10] [i_14]) * (((/* implicit */int) var_5)));
                    var_47 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_14] [i_16])) > (((/* implicit */int) ((((/* implicit */int) (short)18827)) >= (((/* implicit */int) (unsigned short)18)))))));
                }
                for (unsigned short i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    arr_65 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21348))) < (4294967289U)));
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_2)) - (162)))));
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_14])) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned short)61216))))) : (((/* implicit */int) var_4))));
                }
                var_50 = ((/* implicit */unsigned char) ((int) arr_37 [i_10] [i_15 + 2] [i_10]));
                arr_66 [i_10] [i_10] [i_14] [i_14] = ((/* implicit */signed char) ((arr_5 [i_14] [i_14]) != (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
            }
        }
        arr_67 [i_10] = -1382007408276478619LL;
        arr_68 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_2))) * (((/* implicit */int) arr_61 [i_10] [i_10] [i_10] [i_10]))));
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [17ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (6U)));
    }
    /* vectorizable */
    for (short i_18 = 1; i_18 < 8; i_18 += 1) 
    {
        var_52 &= ((/* implicit */unsigned char) ((arr_42 [i_18 + 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_53 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-18839)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (short)-18832)))) < (((/* implicit */int) var_15))));
    }
    var_54 = var_2;
}
