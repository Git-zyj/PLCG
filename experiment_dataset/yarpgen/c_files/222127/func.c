/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222127
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (unsigned char)7))));
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))))) ? (((var_4) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) 3876920540U))));
        arr_4 [i_0] = arr_2 [i_0];
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) (unsigned char)7);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                var_19 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 1])))) * (((((/* implicit */int) (unsigned char)231)) * (((/* implicit */int) var_8))))))));
                var_20 = ((/* implicit */unsigned short) var_4);
                arr_11 [i_1] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 - 1]))))));
            }
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                arr_16 [i_0 - 2] [i_1] [i_3] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) arr_0 [4LL])), (arr_10 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)244)))))));
                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)244)))) : ((-(-1676320888))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (var_5) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [10] [i_1 + 1]))))))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) & (((/* implicit */int) (signed char)26))));
                arr_17 [i_0] [i_1] [i_1] |= (unsigned char)244;
            }
            var_23 = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)31)) || (((/* implicit */_Bool) (signed char)-14))))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            var_25 ^= (~(((((((((/* implicit */int) arr_6 [i_0] [4])) + (2147483647))) >> (((arr_9 [i_0] [i_0] [i_0] [i_4 + 2]) - (1150810691))))) ^ (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)248)))))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 2] [i_4] [i_4])) - (((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 2] [i_0] [i_0])))))));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_27 ^= ((/* implicit */long long int) var_4);
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_5] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_4])) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)1)) : (1989080905)))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)254)), (arr_7 [i_0] [i_4] [i_5])))) ? (max((arr_12 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_4] [i_0])))) : (((/* implicit */unsigned long long int) var_14))))));
            }
            for (int i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_4 - 1] [i_6])))))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : ((+(arr_15 [i_6] [i_6])))))) ? (((arr_10 [i_0]) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)39))))))) : (3974282095U)));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_30 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 1185202444U);
                        arr_31 [i_0] [i_4 - 1] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) -1)) * (arr_5 [i_6] [i_7] [i_6]))), (arr_5 [i_0] [i_0] [i_6])));
                        arr_32 [(unsigned short)15] [i_4] [i_4] [2ULL] [i_8] [i_8] = ((((/* implicit */_Bool) (unsigned short)47944)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)25)));
                    }
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_31 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned short)65528), (arr_14 [i_4] [i_4] [i_4 + 2] [i_7 + 1]))))));
                        var_32 = (((~(((/* implicit */int) ((((/* implicit */int) (signed char)-9)) > (((/* implicit */int) arr_20 [0ULL]))))))) ^ (min((((/* implicit */int) arr_20 [i_4])), (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (unsigned short)49812)) : (((/* implicit */int) (unsigned short)7)))))));
                        arr_36 [i_0] [i_4 + 3] [i_0] [i_0] [3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_18 [13ULL] [13ULL] [13ULL])) ? (arr_18 [i_6] [i_4] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [2U])))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_6]))))) ? (-1992260567) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                    }
                }
            }
            for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                arr_39 [i_0] = ((/* implicit */int) (unsigned short)65524);
                arr_40 [i_0] = ((/* implicit */unsigned char) var_13);
                var_33 = ((/* implicit */unsigned char) arr_9 [i_10] [i_0] [i_0] [i_0 - 2]);
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) ^ (arr_13 [i_10] [i_0] [i_0])));
            }
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned char)254)) - (249)))))))));
        }
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        {
                            arr_50 [i_14] [i_13] [i_12] [i_11] [i_11] [(_Bool)0] [i_0 - 1] = ((/* implicit */int) arr_37 [i_0] [i_11] [i_12] [i_14]);
                            arr_51 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_12])) && (((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_12]))))), (((arr_41 [i_0 + 1]) ? (arr_5 [i_0 - 1] [i_0 - 2] [i_13]) : (((/* implicit */unsigned int) var_3))))));
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) var_2))));
                            arr_52 [i_0] [i_11] [i_0] [i_14] [i_12] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_42 [i_0 - 2] [i_0 + 1]))))));
                            var_37 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3974282095U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) : (arr_8 [i_14] [i_14] [i_12])))) ? (((((/* implicit */_Bool) arr_15 [i_11] [i_0])) ? (arr_49 [i_13] [i_12]) : (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) (signed char)25))));
                        }
                    } 
                } 
            } 
            arr_53 [i_0] = ((/* implicit */unsigned long long int) -1);
            arr_54 [i_0] [i_11] = (+(min((max((((/* implicit */unsigned int) (unsigned char)238)), (arr_8 [i_0] [i_0] [i_11]))), (((/* implicit */unsigned int) -486286658)))));
        }
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_9 [i_15] [i_0] [i_15] [i_15]))));
            arr_57 [i_0] = ((/* implicit */signed char) var_4);
            var_39 = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_43 [i_15] [i_15] [i_15] [11U])) ? ((-(((/* implicit */int) (unsigned char)16)))) : (0)))));
        }
        /* LoopNest 3 */
        for (unsigned int i_16 = 1; i_16 < 12; i_16 += 3) 
        {
            for (unsigned short i_17 = 3; i_17 < 15; i_17 += 3) 
            {
                for (signed char i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) arr_34 [0ULL] [i_16 - 1] [i_16] [0ULL] [i_18]))));
                        arr_64 [i_0] [i_16] [i_17] [i_18] [i_17] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)249)) ^ (((/* implicit */int) arr_21 [i_17 - 2] [12ULL] [i_16 + 2]))))));
                        arr_65 [i_17] [i_16] [i_16] [i_0] = ((/* implicit */unsigned char) (((+(arr_10 [i_16]))) << (((min((((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))), ((~(var_11))))) - (139U)))));
                    }
                } 
            } 
        } 
    }
}
