/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228200
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((min((arr_0 [i_0]), (((1982184804609348415ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_10 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_0 [i_0])));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((var_4) >> (((arr_1 [i_1 - 1]) - (1306105757769593940LL))))) : (arr_5 [i_1 - 1] [i_1 + 1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((arr_5 [i_1 - 1] [i_1 + 1]) < (((/* implicit */long long int) ((int) 16464559269100203188ULL)))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65531))))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) arr_5 [i_2 - 3] [i_2 - 3])) : (var_6))) : (((/* implicit */unsigned long long int) arr_10 [i_2 - 1]))));
                arr_16 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 1]))));
            }
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_13 = (+(arr_22 [i_2] [i_3] [i_2 - 3] [(signed char)1]));
                        arr_23 [i_3] = ((((/* implicit */_Bool) arr_9 [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 3])) : (-3));
                    }
                    arr_24 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_2])))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_13 [i_2])) ? (var_0) : (((/* implicit */int) var_5))))));
                }
                var_14 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 5191024844392102600LL)))));
                var_15 = -270802367;
            }
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned long long int) -959619946);
                var_17 = ((/* implicit */int) ((((long long int) (signed char)5)) / (((((/* implicit */_Bool) arr_17 [i_3] [i_3])) ? (arr_14 [i_3]) : (((/* implicit */long long int) arr_20 [4LL] [i_8] [i_3] [(unsigned short)4] [i_3] [i_2 - 3]))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 3] [i_2 - 2])) != (arr_26 [i_8] [i_3] [i_3] [i_2])));
                arr_28 [i_3] [i_3] [i_8] [i_8] = ((((/* implicit */unsigned long long int) arr_10 [i_2 - 1])) / (arr_12 [i_2] [i_2] [i_8]));
                var_19 = (~((+(var_0))));
            }
            for (signed char i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */int) (-(arr_14 [i_3])));
                var_21 = (-(arr_8 [i_2 + 1] [i_2 + 1]));
            }
            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-6)) | (-1681000326)))) % (((((/* implicit */_Bool) (signed char)77)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_3] [i_2] [i_2 + 1])))))));
            var_23 = ((/* implicit */int) 1199637123932283161LL);
        }
        for (int i_10 = 1; i_10 < 12; i_10 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                var_24 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_13 [8LL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (arr_1 [9LL])))));
                var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_25 [10LL] [i_10] [i_10] [i_10])) ? (arr_22 [i_2] [i_2 - 2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                arr_36 [i_10] = ((/* implicit */unsigned short) arr_32 [i_2 - 1] [i_10 - 1] [i_10 - 1]);
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1])) ? (arr_25 [i_2] [i_2 - 2] [7] [i_10]) : (var_2)));
            }
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [(signed char)5] [i_10 - 1] [i_10] [i_10 - 1] [i_2] [6ULL])) : (var_2))) < (((var_0) & (((/* implicit */int) (signed char)-105))))));
            arr_37 [(signed char)6] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_10])) ? (((/* implicit */int) (signed char)-4)) : (arr_25 [i_2] [i_2] [i_2] [i_10])))) ? (((/* implicit */long long int) arr_34 [i_2 - 3] [i_10] [(unsigned short)10])) : (arr_5 [i_10] [i_2 - 2])));
        }
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 2; i_13 < 10; i_13 += 3) 
            {
                for (long long int i_14 = 2; i_14 < 11; i_14 += 4) 
                {
                    {
                        arr_47 [i_2] = arr_39 [i_12];
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)118))))) && (((/* implicit */_Bool) arr_11 [i_14 - 2]))));
                        arr_48 [i_2] [i_12] [i_2] = ((/* implicit */unsigned short) var_3);
                        arr_49 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_5 [7LL] [i_12])))) ? (arr_8 [i_14 + 2] [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_12] [i_14 + 2])))));
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2 - 2])) ? (((((/* implicit */int) (signed char)89)) << (((arr_43 [i_2] [i_12] [i_2 - 3]) + (1932018433))))) : (((/* implicit */int) ((var_1) > (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_2] [(signed char)2] [(signed char)2] [i_2 - 2]))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
        {
            arr_52 [i_15] = (~(arr_25 [i_2] [i_2] [(unsigned short)10] [i_15]));
            /* LoopSeq 4 */
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                arr_55 [(signed char)0] [i_15] [(signed char)11] = (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_38 [11])) : (var_2))));
                var_30 = ((/* implicit */int) arr_38 [i_2 - 1]);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        {
                            var_31 = ((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) -26)) : (arr_5 [i_2 + 1] [i_2 - 1]));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_26 [i_2 - 2] [i_17] [i_2 - 3] [i_17])) & (var_3)));
                        }
                    } 
                } 
            }
            for (long long int i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                arr_65 [i_15] [i_15] [i_2 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(944882928)))) ? (arr_27 [i_19] [i_15] [i_2]) : (((/* implicit */long long int) arr_25 [i_2] [i_15] [i_19] [i_19]))));
                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_2])) ? (((/* implicit */int) arr_54 [0])) : (((/* implicit */int) arr_46 [i_2] [i_2 - 1] [i_2 - 1] [i_15]))));
                var_34 = ((int) ((((/* implicit */_Bool) arr_39 [i_2])) ? (arr_22 [i_2] [i_15] [i_15] [i_19]) : (((/* implicit */long long int) var_8))));
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_2 - 2] [i_2 - 2] [i_2 - 2]))) : (((long long int) arr_9 [i_2 + 1] [i_2]))));
            }
            for (int i_20 = 2; i_20 < 9; i_20 += 4) 
            {
                var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_20]))));
                /* LoopSeq 2 */
                for (signed char i_21 = 3; i_21 < 11; i_21 += 4) 
                {
                    arr_73 [i_2] [6ULL] [i_2] [i_2] [i_2] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */long long int) var_2)) : (7214876122434322177LL))))));
                    arr_74 [4LL] [i_15] [11] [i_21] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_71 [i_21] [i_20] [9LL] [i_2])) < (arr_30 [i_15]))) ? (var_3) : (arr_32 [i_20 - 1] [i_2 - 1] [i_2])));
                    var_37 = (~(((/* implicit */int) (signed char)-8)));
                    arr_75 [i_21] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2277805242201692420LL)) ? (arr_57 [i_2 + 1] [i_20 + 4] [(signed char)11] [i_20] [3] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [0] [i_20 + 4] [(signed char)2])))));
                }
                for (unsigned long long int i_22 = 2; i_22 < 10; i_22 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_2 - 2]) : (arr_11 [i_2 + 1])));
                    arr_78 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */signed char) arr_61 [i_20] [i_20 + 2] [i_22 - 2] [i_22 + 3]);
                }
                var_39 = ((int) arr_27 [i_20 - 1] [i_2 - 3] [i_20]);
                arr_79 [i_2] [i_15] [i_20] = 1982184804609348393ULL;
            }
            for (long long int i_23 = 0; i_23 < 13; i_23 += 2) 
            {
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_23] [i_2 + 1])) ? (((/* implicit */int) arr_17 [i_23] [i_2 - 2])) : (((/* implicit */int) arr_17 [i_15] [i_2 - 2]))));
                arr_82 [(unsigned short)9] [i_15] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) -35401516)) & (16464559269100203238ULL))));
            }
            arr_83 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8471)) | (((/* implicit */int) (signed char)-64))));
        }
        var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_44 [i_2] [i_2] [i_2 - 1] [i_2 - 2])) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_80 [i_2] [i_2] [i_2]))) : (18446744073709551615ULL)))));
        var_42 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [8LL] [i_2 - 1]))) < (arr_72 [i_2] [6]))));
    }
    for (long long int i_24 = 0; i_24 < 20; i_24 += 4) 
    {
        arr_86 [i_24] = ((/* implicit */long long int) ((max((((long long int) arr_85 [i_24] [i_24])), (((/* implicit */long long int) (~(var_8)))))) > (max((-6321464576027166677LL), (((/* implicit */long long int) arr_6 [i_24] [i_24]))))));
        arr_87 [16LL] = max((min((var_1), (arr_4 [i_24] [i_24]))), (((max((var_7), (((/* implicit */long long int) arr_6 [i_24] [15])))) - (((/* implicit */long long int) ((int) 12LL))))));
        var_43 = min((15658426247484408173ULL), (((/* implicit */unsigned long long int) (((+(arr_5 [i_24] [9]))) / (((((/* implicit */_Bool) arr_5 [i_24] [(unsigned short)19])) ? (((/* implicit */long long int) arr_84 [i_24] [i_24])) : (arr_1 [i_24])))))));
    }
    var_44 = ((/* implicit */signed char) -959619948);
}
