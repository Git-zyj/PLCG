/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194639
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (var_8)))), (max((max((((/* implicit */long long int) var_11)), (var_13))), (((/* implicit */long long int) var_9))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((min((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))), (arr_2 [i_0]))) >> (((/* implicit */int) arr_1 [(unsigned short)11]))));
        var_17 ^= ((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [(_Bool)1]), (max((arr_0 [i_0]), (arr_0 [i_0]))))))) < (max((((/* implicit */long long int) arr_0 [i_0])), (min((72057594037927935LL), (((/* implicit */long long int) arr_1 [11LL])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_18 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) max((arr_1 [3LL]), (arr_4 [i_0])))), (arr_0 [i_1])));
            arr_6 [i_0] [i_1] [i_0] = ((max((max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [i_1])))), (arr_2 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) << (((/* implicit */int) arr_4 [i_1]))))) >= (min((((/* implicit */long long int) arr_4 [i_0])), (arr_5 [(unsigned char)5] [i_1] [(unsigned char)5]))))))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((max((min((((/* implicit */long long int) arr_0 [i_0])), (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) == (arr_5 [i_0] [i_0] [i_1])))))), (min((arr_5 [i_0] [i_0] [(_Bool)1]), (max((((/* implicit */long long int) arr_0 [(unsigned char)12])), (arr_5 [i_0] [i_0] [10LL]))))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 4; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [(unsigned char)12])), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)123)) * (((/* implicit */int) arr_4 [i_3]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3]))) % (arr_5 [i_3] [i_3] [i_3])))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((min((((arr_10 [i_2 - 2] [i_2 - 2] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] [i_4]))))), (min((((/* implicit */unsigned long long int) (unsigned short)57159)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((arr_14 [i_4] [i_1] [i_0] [i_1] [i_0]) != (arr_2 [(signed char)9])))), (arr_8 [i_4] [i_4] [i_4] [i_4]))))));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [6LL] [i_4]);
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)9] [i_1]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [(unsigned short)0] [i_2] [i_2] [i_4 - 1]) < (arr_11 [(unsigned char)7] [i_1] [i_3] [i_4 + 3]))))) - (((((/* implicit */unsigned long long int) arr_2 [i_2])) - (18446744073709551605ULL)))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            var_22 += ((/* implicit */_Bool) arr_22 [3U]);
            arr_23 [i_0] [i_0] = ((((/* implicit */int) (unsigned short)8191)) < (((/* implicit */int) (short)0)));
        }
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            var_23 -= ((/* implicit */short) arr_5 [i_6] [(signed char)10] [i_0]);
            var_24 ^= ((/* implicit */unsigned short) ((arr_22 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6])))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_6] [i_6])) > (((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6]))));
            var_26 -= ((/* implicit */unsigned int) arr_22 [i_0]);
        }
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_27 = ((((((/* implicit */long long int) ((arr_32 [(unsigned short)21] [i_8]) - (((/* implicit */int) arr_34 [i_10] [(_Bool)1] [i_8] [i_7]))))) & (min((arr_31 [i_8] [(unsigned short)6] [i_9] [i_10]), (((/* implicit */long long int) arr_29 [(_Bool)1] [i_8] [i_8])))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1785868987)) < (((13749702905719011039ULL) >> (((((/* implicit */int) (short)-26836)) + (26889))))))))));
                        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_34 [i_10] [i_9] [i_8] [i_7])), (arr_30 [i_7] [i_8]))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_7] [i_7])) / (((/* implicit */int) arr_36 [i_8])))))))), (arr_27 [12U] [i_10])));
                        var_29 = ((/* implicit */int) arr_30 [i_9] [i_8]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                {
                    arr_43 [i_11] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_7] [i_11] [i_12] [i_11])) || (((/* implicit */_Bool) arr_29 [(unsigned short)11] [i_11] [i_12]))));
                    arr_44 [(unsigned char)0] [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */_Bool) arr_34 [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) arr_38 [i_7] [13LL])))), (((arr_31 [(signed char)6] [i_11] [i_11] [i_11]) < (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7])))))))) << (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_33 [i_7] [15LL])) < (arr_32 [i_7] [i_7])))) == (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)240)), ((unsigned short)57347)))))))));
                }
            } 
        } 
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_14 = 3; i_14 < 21; i_14 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_38 [i_13] [i_13])) == (arr_45 [i_13])))) != (((/* implicit */int) min((arr_36 [i_13]), ((unsigned short)57324))))))), (max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_40 [i_14 - 3] [i_14 - 3] [(_Bool)1] [i_13])), (arr_34 [i_13] [i_13] [i_13] [i_13])))), (min((arr_48 [i_14 - 2] [i_14] [i_14 - 1]), (((/* implicit */long long int) arr_30 [i_13] [i_13]))))))));
            /* LoopNest 2 */
            for (long long int i_15 = 1; i_15 < 20; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8212)) >> (((/* implicit */int) (unsigned short)0))));
                        var_32 = ((/* implicit */long long int) arr_52 [i_16] [i_15 + 1] [i_14] [i_13] [i_13]);
                    }
                } 
            } 
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)8189)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_53 [16LL])), (arr_54 [i_14] [i_13] [i_13]))))))))));
        }
        for (unsigned short i_17 = 3; i_17 < 21; i_17 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) min((arr_45 [i_13]), (((/* implicit */int) min((arr_52 [i_13] [i_13] [i_13] [i_13] [(signed char)12]), (((/* implicit */short) arr_37 [i_17] [i_17])))))));
            var_35 = ((/* implicit */unsigned char) arr_48 [i_17] [i_17] [i_13]);
        }
        arr_57 [i_13] [(unsigned short)12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_34 [i_13] [i_13] [(unsigned short)9] [i_13])), (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13]))) > (arr_30 [i_13] [(unsigned short)0])))), (max((arr_30 [i_13] [i_13]), (((/* implicit */unsigned int) arr_49 [i_13] [i_13] [i_13]))))))));
        var_36 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)30)), (arr_42 [i_13] [i_13] [i_13] [(unsigned short)6]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_48 [i_13] [i_13] [(unsigned char)18]), (((/* implicit */long long int) arr_46 [i_13] [12LL]))))) && (((/* implicit */_Bool) arr_54 [i_13] [i_13] [i_13]))))))));
    }
    var_37 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)57346), ((unsigned short)4))))) - (max((8071189909722249085ULL), (((/* implicit */unsigned long long int) -7100995595445811589LL)))))) * (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_8)), (var_14))), (((/* implicit */long long int) min((var_12), (var_7)))))))));
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((max((((/* implicit */unsigned long long int) -1146680940)), (36028659580010496ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_7))));
}
