/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194341
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
    var_14 = ((/* implicit */signed char) min((var_0), ((!(((/* implicit */_Bool) 16777215))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [0] = ((/* implicit */unsigned char) ((0) ^ (1433290499)));
                    var_15 -= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0] [i_1 - 2])) & (((/* implicit */int) arr_0 [i_0] [i_1 - 1])))) % ((~((+(((/* implicit */int) (unsigned char)73))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_12 [0U] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_7 [6U] [i_0] [i_0] [i_3])), (max((arr_4 [i_3]), (arr_4 [i_3])))));
            var_16 = ((/* implicit */unsigned int) ((_Bool) (-(1433290503))));
            arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_0])))) || (((/* implicit */_Bool) arr_9 [i_0] [13U] [i_3]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_3]))))) || (((/* implicit */_Bool) arr_10 [i_3])))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) max((1433290499), (1433290472)));
                arr_16 [i_4] [i_3] [i_4] = var_3;
                arr_17 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */int) (unsigned char)27);
                arr_18 [i_0] [5] [5] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) -1433290502))))) && (((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (_Bool)1)))))), (((arr_9 [i_0] [i_0] [i_4]) >= (1801605656U)))));
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) 1433290499);
            /* LoopSeq 4 */
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 1433290490))));
                arr_24 [i_6] = ((/* implicit */signed char) arr_14 [i_5] [i_5] [i_6]);
                var_19 ^= ((/* implicit */unsigned char) (-(arr_11 [i_0] [i_5] [i_5])));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [(signed char)0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_5] [i_0] [i_6])))))))));
            }
            for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                var_21 ^= ((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_7])) ? (arr_11 [i_0] [i_5] [20ULL]) : (arr_11 [(_Bool)1] [i_5] [i_0]));
                arr_28 [i_0] [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned long long int) 2147483520U))))));
            }
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                var_22 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) (signed char)48)))))));
                arr_33 [i_8] = ((/* implicit */int) ((short) arr_23 [i_0] [i_0] [i_5] [i_8]));
                arr_34 [i_0] [i_5] [i_8] = ((/* implicit */long long int) ((1433290468) <= (((/* implicit */int) arr_23 [i_0] [i_0] [i_8] [i_0]))));
                arr_35 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_8] [i_8]))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_38 [i_8] [13LL] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_0] [i_8] [i_8] [i_0])) != ((-(arr_30 [i_0] [i_5] [i_8] [i_9])))));
                    arr_39 [i_0] [i_5] [i_8] [i_9] = arr_14 [i_5] [i_8] [i_9];
                }
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    arr_42 [i_0] [i_5] [i_8] [i_10] [i_10] = ((arr_36 [i_0] [i_0] [i_0] [i_8]) ? (arr_31 [i_0] [i_5] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_5] [i_8] [i_10]))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_8] [i_0] [i_8]))))) : (arr_19 [i_10])));
                        var_24 |= ((/* implicit */signed char) 1571870113U);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_5] [i_8])) != ((~(-1433290469)))));
                        arr_47 [(short)15] [i_12] [i_12] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_8] [i_8] [6U])) ? (((/* implicit */int) (short)28)) : (((/* implicit */int) ((var_13) < (arr_20 [i_5]))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-(arr_9 [i_0] [i_8] [i_10]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_13] [i_10] [5U] [i_13] [i_13] = ((/* implicit */unsigned long long int) (-(arr_30 [i_8] [i_8] [i_5] [i_0])));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_5] [i_8] [i_13])) ? (((/* implicit */int) arr_23 [i_0] [i_5] [i_10] [i_13])) : (((/* implicit */int) arr_2 [i_13])))) : (((/* implicit */int) ((_Bool) arr_31 [i_13] [i_5] [i_0])))));
                        arr_51 [i_0] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (var_5)));
                        arr_52 [i_13] [i_10] [i_8] [i_5] [i_13] = 1433290474;
                    }
                    arr_53 [i_10] [13ULL] [13ULL] [i_0] = ((/* implicit */unsigned short) (-(arr_10 [i_0])));
                }
            }
            for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
            {
                arr_56 [i_0] [i_5] = ((/* implicit */signed char) arr_23 [i_14] [i_14] [i_0] [i_0]);
                var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    arr_59 [i_0] [i_5] [i_5] [i_14] [8U] = ((/* implicit */long long int) ((arr_57 [i_0] [i_5]) ? (((/* implicit */unsigned long long int) arr_37 [i_15] [i_15] [i_14] [i_14] [(signed char)1] [i_0])) : (7292757737371525461ULL)));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_5] [i_14] [i_0])) ? (((((/* implicit */_Bool) arr_11 [i_15] [i_5] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_48 [12LL] [i_5] [i_15] [i_15] [i_14] [i_15] [14])))) : ((-(-1928414726))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_2 [i_16]))));
                        var_31 |= ((/* implicit */signed char) var_10);
                        var_32 = ((/* implicit */unsigned int) var_13);
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0] [i_14] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_31 [i_0] [i_0] [i_14])));
                        arr_63 [i_0] [i_5] [i_5] [i_5] [13U] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_0] [i_16] [i_14] [i_15] [i_16] [i_5])) ? (arr_25 [i_16] [(signed char)2] [i_14] [10U]) : (((((/* implicit */_Bool) (short)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))));
                    }
                    var_34 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14] [i_5] [i_14] [i_15]))) & (((((/* implicit */_Bool) arr_1 [i_14])) ? (((/* implicit */unsigned int) 1433290499)) : (arr_40 [i_15] [i_5])))));
                }
            }
            var_35 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_54 [i_5]))))) : (((((/* implicit */_Bool) arr_49 [(_Bool)0] [i_0] [4] [4U] [i_0] [i_5] [i_5])) ? (((/* implicit */long long int) 3872481590U)) : (0LL)))));
        }
    }
    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            for (int i_19 = 0; i_19 < 22; i_19 += 4) 
            {
                for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    {
                        var_36 = ((/* implicit */signed char) var_5);
                        arr_76 [i_17] [i_18] [16ULL] [i_18] = ((/* implicit */unsigned char) ((short) min((72170681U), (((/* implicit */unsigned int) (unsigned short)65253)))));
                    }
                } 
            } 
        } 
        arr_77 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_17] [i_17] [0LL] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) min(((-(((/* implicit */int) arr_49 [i_17] [i_17] [i_17] [(unsigned char)0] [(short)4] [8LL] [i_17])))), (((/* implicit */int) ((unsigned char) -1433290473)))))) : (((long long int) arr_46 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))));
        arr_78 [i_17] [(_Bool)0] = ((/* implicit */int) var_7);
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((1433290490), (((/* implicit */int) var_4)))) >= (((/* implicit */int) ((unsigned char) var_2)))))), (((((arr_66 [(signed char)10]) << (((arr_4 [(_Bool)1]) - (713586921))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))))));
        arr_82 [i_21] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (((/* implicit */unsigned long long int) arr_62 [i_21] [i_21] [i_21] [i_21] [i_21])))) > (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1433290468)) ? (-1433290500) : (((/* implicit */int) (short)-20)))) + (max((-2147483647), (1915387386))))))));
        var_38 = ((/* implicit */int) max((var_38), (min((((/* implicit */int) ((((/* implicit */int) ((short) arr_67 [i_21]))) != (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 1433290499)))))))), (max((((((/* implicit */int) var_2)) + (((/* implicit */int) var_10)))), (((/* implicit */int) arr_80 [i_21]))))))));
    }
}
