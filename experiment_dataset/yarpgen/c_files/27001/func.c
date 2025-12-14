/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27001
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [20] [i_2 + 1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_4 [i_2 + 2] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2]))))), ((~(min((((/* implicit */long long int) var_5)), (arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                    var_15 ^= ((/* implicit */signed char) var_9);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) var_9);
                        var_16 = ((/* implicit */int) (((_Bool)1) ? (4356353820939194178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3493)))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_16 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)4638)), (7486851127335423894LL)))) ? (((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 2] [i_2 + 2])))) : (arr_14 [i_0] [i_0] [i_2 + 1] [i_4]));
                        arr_17 [i_2] [20LL] [i_2 + 2] = min((((/* implicit */int) arr_0 [i_2 - 1])), (var_0));
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [15] [i_6] = ((/* implicit */int) ((arr_7 [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_5] [(unsigned char)10])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) ? (max((var_2), (((/* implicit */long long int) arr_18 [i_0] [i_6] [i_2] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5]))))) : (((/* implicit */long long int) (((~(arr_15 [i_0] [i_0] [(signed char)18] [i_0] [i_0]))) >> (((var_2) + (3250227952557385779LL))))))));
                            arr_23 [i_6 - 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), (max((arr_6 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_2 - 1]), (((((/* implicit */long long int) arr_8 [i_0] [i_0])) ^ (arr_6 [i_6 + 1] [i_2] [i_1] [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_17 &= ((/* implicit */_Bool) (-(arr_6 [i_5] [i_5] [i_2 + 2] [i_0])));
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_2 + 1] [i_5] [i_7] = ((/* implicit */long long int) arr_26 [i_7] [i_5] [i_2 + 2] [i_2] [i_1] [3]);
                        }
                        arr_28 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_13))) >> (((arr_24 [i_0] [i_2 + 2] [i_2 + 2] [i_5] [i_2 + 2]) + (1450537945)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_5]))))) : (((3562679344669441254ULL) + (((/* implicit */unsigned long long int) 4076984741U))))));
                        arr_29 [i_2] [i_1] [i_2] [i_5] = ((/* implicit */signed char) arr_18 [i_5] [i_1] [i_1] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_18 = ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)17] [(signed char)17])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [6LL] [i_0] [i_0] [i_0])))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)1] [i_8])) : (arr_3 [i_0])))) < (((((/* implicit */unsigned long long int) arr_3 [i_1])) | (arr_19 [i_8] [i_2] [i_1] [i_0])))))));
                        arr_32 [i_0] [i_0] [i_8] [i_0] [14] = ((/* implicit */long long int) max((((/* implicit */int) arr_12 [(signed char)13] [(signed char)13] [(signed char)13] [i_0])), (arr_1 [i_0])));
                        arr_33 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 - 1])) << (((((/* implicit */int) arr_18 [i_2 + 2] [i_2 - 1] [i_2] [i_2])) - (87)))))) ? (arr_20 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_8] [i_2] [i_2 + 1] [i_1] [i_0])) ? (((/* implicit */int) (short)32744)) : (784155539)))) : ((-(arr_31 [i_0] [i_1] [i_1] [i_8]))))))));
                    }
                    arr_34 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) min(((-(var_11))), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_2])) || ((!(((/* implicit */_Bool) var_7)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        var_19 += ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 115097619)))) || (((/* implicit */_Bool) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9])) & (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9] [i_9]))) : (min((((/* implicit */long long int) arr_35 [(_Bool)1])), (arr_31 [i_9] [i_9] [i_9] [i_9]))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_37 [i_9] = ((784155542) << (1ULL));
    }
    for (unsigned char i_10 = 4; i_10 < 12; i_10 += 2) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10 - 2])) ? (arr_20 [i_10 - 3] [i_10 - 2] [i_10 - 3] [i_10 - 3] [i_10]) : (arr_20 [i_10 + 1] [i_10 - 2] [i_10 - 4] [i_10 - 3] [i_10 - 2])))) ? (((/* implicit */int) arr_38 [i_10])) : (((((/* implicit */_Bool) arr_4 [i_10 - 3] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) arr_4 [i_10 - 4] [i_10 - 3] [i_10])) : (((/* implicit */int) arr_4 [i_10 + 1] [i_10 - 2] [i_10 - 1]))))))));
        arr_40 [i_10] [i_10] = ((((/* implicit */_Bool) min((arr_30 [i_10] [i_10] [i_10] [i_10 + 1] [i_10] [i_10]), (((/* implicit */unsigned short) arr_4 [i_10 + 1] [i_10 + 1] [i_10 - 3]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)4281))))) ? ((+(arr_25 [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 1] [i_10] [i_10] [i_10]))) : (arr_8 [i_10 - 2] [i_10 - 1])))) : (((max((((/* implicit */long long int) arr_7 [i_10])), (arr_6 [10ULL] [10ULL] [i_10] [i_10]))) | (((/* implicit */long long int) arr_8 [(short)12] [(short)12])))));
        arr_41 [i_10] [i_10] = ((((/* implicit */_Bool) min((-784155542), (((/* implicit */int) arr_35 [i_10]))))) ? (((/* implicit */int) max(((short)-4283), (((/* implicit */short) (unsigned char)255))))) : (((/* implicit */int) (short)4297)));
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    {
                        arr_48 [i_10] [i_11] = min((((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_10] [i_11] [i_11] [i_13] [i_13]))))), ((-(((arr_31 [i_10] [i_11] [i_12] [i_12]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12]))))))));
                        var_21 = ((/* implicit */short) arr_30 [i_10] [i_11] [i_11] [i_12] [i_13] [i_11]);
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [i_13])) ? (((/* implicit */int) arr_46 [i_10] [i_10] [i_10] [8LL])) : (((/* implicit */int) arr_46 [i_10] [i_11] [i_10] [i_13])))) < (((/* implicit */int) var_12))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((arr_24 [i_10] [3LL] [i_11] [i_12] [i_13]) < (var_3)))))))))));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */unsigned char) ((max((arr_45 [i_10] [i_10] [i_10] [i_10 - 3]), (arr_45 [i_10] [i_10] [i_10] [i_10 - 4]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_10] [i_10] [i_10] [i_10 + 1]))))))));
    }
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        var_24 = min((((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_14 + 1])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_14])) >> (((((/* implicit */int) arr_50 [i_14])) - (192))))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_49 [i_14]))))) ? (((/* implicit */int) arr_49 [i_14 + 1])) : (((/* implicit */int) arr_51 [i_14] [i_14])))));
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            arr_56 [i_15] = ((/* implicit */unsigned int) arr_50 [i_15]);
            arr_57 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-784155547) + (((/* implicit */int) (signed char)50))))) ? (((/* implicit */int) max((arr_54 [i_14 + 1] [i_14 + 1] [i_14]), (((/* implicit */short) arr_50 [i_14 + 1]))))) : ((-(((/* implicit */int) arr_54 [i_14] [i_14 + 1] [i_14 + 1]))))));
        }
        for (signed char i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                for (signed char i_18 = 2; i_18 < 21; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */_Bool) arr_65 [i_19] [i_19] [i_18] [i_17] [i_16] [i_14 + 1]);
                            arr_69 [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_16] [i_14 + 1] [i_14 + 1] = ((/* implicit */unsigned int) ((arr_61 [i_14 + 1]) & (min((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_64 [i_14] [i_14])))), (arr_55 [i_14] [i_17])))));
                            var_26 = ((/* implicit */int) max((var_26), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_14 + 1] [i_19])) || (((/* implicit */_Bool) arr_64 [i_14 + 1] [i_18 + 2]))))), ((~(arr_55 [i_18 + 3] [i_14 + 1])))))));
                            arr_70 [i_14] [i_16] [i_16] [(signed char)5] [i_19] [i_19] = ((/* implicit */signed char) var_13);
                        }
                    } 
                } 
            } 
            arr_71 [i_14] [i_16] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_50 [i_14 + 1])) ^ (((/* implicit */int) arr_54 [i_14 + 1] [i_14 + 1] [i_14])))), (var_11)));
            var_27 ^= ((/* implicit */unsigned long long int) min((((arr_61 [i_14 + 1]) % (arr_61 [i_16]))), (((min((((/* implicit */int) (unsigned char)254)), (-642190376))) & (min((((/* implicit */int) arr_58 [8] [2])), (arr_61 [(_Bool)1])))))));
        }
    }
    for (long long int i_20 = 0; i_20 < 18; i_20 += 1) 
    {
        var_28 ^= ((/* implicit */unsigned short) arr_72 [i_20]);
        var_29 = ((/* implicit */int) min((arr_67 [i_20] [i_20] [i_20]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_20] [(unsigned char)1] [i_20] [i_20] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) arr_25 [14] [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_20] [i_20])) : (((/* implicit */int) arr_64 [i_20] [i_20]))))) ? (((/* implicit */int) max((arr_2 [i_20] [i_20]), (arr_2 [i_20] [i_20])))) : ((~(((/* implicit */int) arr_64 [i_20] [i_20]))))));
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_21] [i_20] [i_20] [i_20])) ? (var_2) : (arr_31 [i_20] [0LL] [i_21] [i_20])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [14U] [i_21]))) : (((((/* implicit */_Bool) arr_31 [i_20] [i_21] [i_20] [(unsigned short)9])) ? (arr_31 [i_20] [i_21] [i_21] [i_21]) : (arr_31 [i_20] [i_21] [i_20] [i_20]))));
            arr_78 [i_21] [i_21] = ((/* implicit */int) ((((arr_55 [(unsigned char)9] [(unsigned char)9]) == (((/* implicit */int) arr_77 [i_20])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_20] [i_20] [i_20]))) : (((((/* implicit */unsigned long long int) var_11)) - (arr_19 [i_21] [i_21] [i_21] [i_21])))));
        }
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_4) ^ (((/* implicit */int) var_1))))), (var_2)))) ? (((max((((/* implicit */long long int) var_14)), (var_2))) * (var_9))) : (min((var_13), (var_9)))));
    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_0))));
}
