/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21505
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((arr_1 [i_0]) ? (5419621908792493771LL) : (((/* implicit */long long int) -907561918))))))) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0] [i_0])))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_19 = arr_4 [i_0] [i_0] [i_2];
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_7 [i_0] [i_3]) : (((((/* implicit */_Bool) 5419621908792493771LL)) ? (-907561934) : (-907561915)))))) ? (arr_5 [i_0] [i_1 + 2] [i_2]) : (((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_2]))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_13 [i_4]);
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) arr_12 [i_4]);
            var_23 = ((/* implicit */unsigned char) arr_12 [i_4]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_14 [i_4]);
                    arr_22 [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 907561910)) ? (907561922) : (262144)));
                    var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6] [i_6] [i_4] [i_4])) ? (((arr_20 [i_4] [i_5] [i_6] [i_7]) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4])))) : (((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_6] [i_7] [i_7] [i_7])) ? (arr_19 [i_4] [i_4] [i_5] [i_5] [6]) : (((/* implicit */int) arr_13 [i_4]))))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5419621908792493751LL)) ? (7225717475582205768ULL) : (((/* implicit */unsigned long long int) -5419621908792493751LL))))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) arr_19 [i_6] [i_6] [i_4] [i_6] [i_4])) : (arr_12 [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_11 [i_4]) : (((/* implicit */int) arr_20 [i_4] [i_6] [i_6] [i_7])))))));
                    var_27 = ((/* implicit */unsigned char) ((arr_13 [(unsigned char)13]) ? (((/* implicit */long long int) ((arr_13 [i_4]) ? (arr_14 [i_4]) : (((/* implicit */int) arr_20 [i_4] [i_6] [i_4] [i_5]))))) : (((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6] [11ULL])) ? (arr_12 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_4] [i_7] [i_7])))))));
                }
                arr_23 [i_6] [i_5] [i_5] [2LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (arr_19 [i_4] [i_4] [i_5] [i_6] [i_6]) : (((/* implicit */int) arr_21 [i_4] [i_6] [i_4] [i_6] [i_4]))));
            }
            var_28 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4] [i_5] [i_4] [i_5] [0ULL]))) : (((arr_20 [i_4] [i_5] [i_5] [i_4]) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned int) arr_19 [i_4] [i_4] [i_4] [i_5] [i_5]))))))) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)19)) : (1977302773))))));
        }
        for (int i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 2; i_9 < 21; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_26 [i_4] [i_8]))));
                arr_30 [i_4] [i_8 + 1] [i_4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [12LL] [i_4])) ? (((/* implicit */long long int) arr_11 [i_9 + 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1095471161)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_8] [i_8] [i_9 + 2]))))) : (((arr_13 [i_9]) ? (arr_16 [i_4] [i_4] [i_9]) : (arr_16 [i_4] [i_8] [i_4])))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_4] [22LL])) ? (((/* implicit */int) arr_20 [8LL] [(unsigned short)22] [8LL] [i_8 + 3])) : (arr_11 [i_8])));
            }
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_4] [i_8 + 1] [i_10])) ? (((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_10])) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_10] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8]))) : (arr_15 [i_4] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8 - 1]))))) : (arr_15 [i_4] [i_4])));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_28 [i_8]) ? (((/* implicit */int) arr_28 [i_4])) : (((/* implicit */int) arr_21 [i_4] [i_10] [i_4] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_10] [i_8] [(short)5]))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_10]))) : (arr_32 [i_4] [i_8 - 1] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4]))) : (arr_24 [i_4] [i_8] [i_4])));
                var_33 = ((/* implicit */int) arr_33 [i_4] [i_8] [i_4]);
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_10])) ? (arr_27 [i_10]) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_19 [i_10] [i_10] [i_8 + 1] [i_10] [i_4])) ? (arr_32 [i_4] [i_8 + 1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_8] [i_4]))))))))))));
            }
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_14 [i_4]))));
            var_36 = ((/* implicit */unsigned char) arr_27 [13LL]);
        }
        for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_12] [i_11] [5])) ? (((((/* implicit */_Bool) arr_35 [i_4])) ? (arr_11 [i_12]) : (((/* implicit */int) arr_26 [i_12] [i_4])))) : (((/* implicit */int) arr_26 [i_12] [i_4]))))) ? (((/* implicit */long long int) arr_19 [i_12] [i_12] [i_11] [i_12] [i_4])) : (arr_18 [i_4] [i_12] [i_12] [i_12] [6] [6]));
                arr_42 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_12])) ? (arr_18 [i_12] [i_12] [(unsigned char)18] [i_12] [i_12] [i_4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_33 [i_12] [i_12] [i_12])) : (((((/* implicit */_Bool) arr_27 [i_11])) ? (arr_41 [i_12] [i_12] [i_12] [i_12]) : (arr_11 [i_4]))))))));
                var_38 *= ((/* implicit */short) arr_15 [i_4] [i_12]);
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_39 = ((/* implicit */unsigned char) arr_25 [4U] [i_11] [21]);
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_4] [(unsigned short)8] [i_4] [i_4]) ? (((/* implicit */int) arr_33 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_21 [i_4] [12] [12] [12] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4] [i_4]))) : (arr_16 [i_11] [i_11] [(unsigned short)6])))) ? (((/* implicit */long long int) arr_40 [i_4] [i_4] [i_13] [i_4])) : (((((/* implicit */_Bool) arr_45 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [16] [i_11] [16] [10] [i_11 - 1])) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned int) arr_19 [i_4] [i_11] [i_11] [12U] [i_11]))))) : (((((/* implicit */_Bool) arr_39 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [4] [i_11 + 3] [i_11 + 3] [i_13]))) : (arr_35 [(unsigned char)16])))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            arr_52 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_15])) ? (arr_36 [i_14]) : (((/* implicit */int) (unsigned short)7))))) ? (((((/* implicit */_Bool) arr_25 [i_4] [i_11] [i_13])) ? (arr_14 [i_14]) : (((/* implicit */int) arr_39 [i_15])))) : (arr_44 [i_11] [i_13] [i_11] [i_15])))) ? (((/* implicit */int) arr_28 [i_15])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_24 [i_11] [i_13] [i_15]) : (((/* implicit */long long int) arr_40 [i_4] [i_11 + 3] [i_15] [i_14]))))) ? (((((/* implicit */_Bool) arr_41 [i_4] [i_11 + 2] [i_13] [i_15])) ? (((/* implicit */int) arr_21 [i_4] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_49 [i_14] [(unsigned short)12] [3] [10])))) : (((/* implicit */int) arr_13 [3U]))))));
                            var_41 += ((/* implicit */int) arr_38 [i_4] [i_11 + 2] [i_4]);
                            arr_53 [i_4] [i_11] [i_13] [i_4] [i_14] = ((/* implicit */_Bool) arr_46 [i_13] [i_14] [i_15]);
                            arr_54 [i_4] [i_4] [i_14] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_13])) ? (arr_48 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_11] [i_11] [i_14])))))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_13])) ? (arr_18 [i_4] [i_14] [i_4] [i_13] [i_13] [i_13]) : (((/* implicit */long long int) arr_40 [i_4] [i_11] [i_4] [i_14])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_4] [i_11] [i_13])) ? (((/* implicit */int) arr_21 [i_15] [i_14] [i_13] [i_14] [i_4])) : (arr_36 [i_4]))))))) ? (((arr_13 [i_4]) ? (((((/* implicit */_Bool) arr_47 [i_4] [i_11] [i_11] [i_14] [i_13])) ? (((/* implicit */long long int) arr_47 [i_4] [i_11] [12LL] [i_14] [(unsigned char)9])) : (arr_32 [i_4] [i_11] [i_14]))) : (arr_12 [i_15]))) : (((((/* implicit */_Bool) arr_46 [i_11] [i_11] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11 + 1] [i_11 + 1]))) : (arr_24 [i_4] [i_11 - 1] [i_13])))));
                        }
                    } 
                } 
            }
            var_42 = ((/* implicit */signed char) ((arr_20 [i_4] [10] [i_11] [16LL]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_4] [i_4])) ? (11221026598127345859ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_4])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [6ULL] [i_11 - 1] [2] [6ULL]))) : (arr_24 [i_4] [i_11] [i_11]))) : (((((/* implicit */_Bool) 2115346305)) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [4LL] [i_4] [i_11 + 1] [i_11]))) : (((((/* implicit */_Bool) (unsigned char)242)) ? (4947604624033744455LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_4] [i_11 + 3])))))))));
        }
        var_43 ^= arr_12 [i_4];
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
    {
        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [10ULL] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_28 [i_16])) : (arr_14 [i_16]))))));
        var_45 = ((/* implicit */unsigned char) arr_36 [19U]);
        var_46 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_16])) ? (((/* implicit */int) arr_34 [i_16] [i_16] [i_16])) : (2147483647)))) ? (5419621908792493750LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))));
    }
}
