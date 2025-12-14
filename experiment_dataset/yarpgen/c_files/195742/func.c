/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195742
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [5] = ((/* implicit */unsigned char) min((36028797018963967ULL), (((/* implicit */unsigned long long int) 2145386496U))));
        arr_3 [4] [(unsigned short)7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_19)), ((((~(2199023255551ULL))) ^ (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_7))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [17U])) && (((/* implicit */_Bool) var_7))))))), (min((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_4 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */short) var_1);
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */short) arr_4 [i_1]);
            arr_11 [12U] [i_2 + 1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))))), (arr_4 [i_2 + 2])));
        }
        arr_12 [i_1] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    arr_21 [i_3] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_12))))));
                    arr_22 [(_Bool)1] [7U] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_3] [i_3])) ^ (((((/* implicit */int) (short)32767)) ^ (-1)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
        {
            arr_25 [i_3] = ((int) (+(((((/* implicit */_Bool) 9079256848778919936ULL)) ? (4294967270U) : (((/* implicit */unsigned int) -1))))));
            arr_26 [7ULL] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-45))))) ? (var_7) : (((((/* implicit */int) var_14)) / (((/* implicit */int) var_16))))))));
            arr_27 [i_3] [(unsigned short)7] [0U] = ((/* implicit */short) ((((((((/* implicit */_Bool) 4383278899052504520ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */unsigned int) (((!(arr_24 [0]))) ? (((((/* implicit */_Bool) arr_4 [(unsigned short)1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [(_Bool)0] [i_6 - 2] [(short)2] [(unsigned char)3])) : (((/* implicit */int) var_9)))))))));
            arr_28 [1U] [(_Bool)1] [i_6 - 1] = ((/* implicit */signed char) arr_8 [(short)7]);
        }
        for (short i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            arr_32 [i_3] [i_7 + 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_0)))) ? ((+(arr_0 [i_7 - 1] [i_7 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((((/* implicit */int) var_13)) + (2147483647))) << (((arr_23 [i_3]) - (3055743418914730382ULL))))) : ((+(2087317567))))))));
            arr_33 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-40)), ((~(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [(unsigned short)7]))) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7 - 1])) ? (-2087317567) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))))));
        }
        arr_34 [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) arr_4 [i_3])) - (166))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3])), (var_11)))) ? (-1) : (-1)))));
        arr_35 [i_3] = ((/* implicit */_Bool) var_13);
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_39 [i_3] [(short)2] [i_8] = ((/* implicit */unsigned short) min((30ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_3])))))));
            arr_40 [(short)2] [i_8] = (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)65535))))), (((((/* implicit */_Bool) arr_19 [9] [(unsigned short)6] [i_3] [i_3])) ? (-153931900) : (((/* implicit */int) var_12))))))));
            arr_41 [8ULL] [i_3] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_15)))), ((!(((/* implicit */_Bool) min((arr_17 [i_3]), (((/* implicit */short) arr_24 [2U])))))))));
        }
    }
    for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 9; i_10 += 4) 
        {
            for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 2) 
                    {
                        for (signed char i_13 = 4; i_13 < 6; i_13 += 2) 
                        {
                            {
                                arr_55 [i_9 + 1] [i_13] = ((/* implicit */unsigned char) max((((arr_52 [i_13]) + (var_11))), ((-(arr_52 [i_13])))));
                                arr_56 [i_9] [2ULL] [2ULL] [(unsigned short)6] [i_9] = ((/* implicit */unsigned char) ((max((max((((/* implicit */unsigned int) var_7)), (var_4))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) ^ (((((/* implicit */_Bool) var_7)) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 4294967295U))))))))));
                                arr_57 [i_9] [i_12 + 1] [5U] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_46 [i_9 + 2] [(_Bool)0] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12)))) | (((((/* implicit */_Bool) 536870911)) ? (((/* implicit */int) (_Bool)1)) : (0))))) ^ ((((~(arr_47 [(signed char)6] [i_10 - 3]))) | (((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-20))))))));
                                arr_58 [i_9 - 2] [(signed char)4] [(unsigned short)1] [i_11 + 1] [(short)3] [i_12 + 2] [i_9] = ((/* implicit */short) (~(((unsigned long long int) arr_48 [i_9 - 3]))));
                            }
                        } 
                    } 
                    arr_59 [i_9] [i_9] = ((/* implicit */unsigned short) (signed char)-17);
                    arr_60 [i_9] = ((/* implicit */int) ((((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_3)) - (36082)))))))) < (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_14)))))))));
                    arr_61 [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_16)))) - (((/* implicit */int) max((var_12), (((/* implicit */signed char) (_Bool)1)))))))) * (min((((((/* implicit */_Bool) (signed char)-1)) ? (arr_9 [i_9] [(_Bool)1] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [(_Bool)1] [i_10 - 1] [i_10 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
        arr_62 [i_9] = ((/* implicit */unsigned char) min(((~(var_8))), (((/* implicit */unsigned long long int) min((arr_47 [i_9 - 1] [i_9 - 1]), (arr_47 [i_9 - 3] [i_9 - 2]))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_14 = 1; i_14 < 24; i_14 += 2) 
    {
        arr_67 [i_14 + 1] [(signed char)22] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_66 [i_14 + 1])) ? (arr_66 [i_14 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) ^ (((/* implicit */unsigned int) ((int) arr_64 [i_14 - 1] [i_14 - 1])))));
        arr_68 [i_14 + 1] [i_14 - 1] = ((/* implicit */short) (~((+(min((((/* implicit */unsigned int) var_12)), (arr_66 [i_14 - 1])))))));
        arr_69 [1U] [(short)12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(arr_63 [i_14 - 1] [(unsigned short)16])))) ? ((+(((/* implicit */int) arr_65 [i_14 - 1])))) : (((/* implicit */int) arr_65 [i_14 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    for (short i_15 = 1; i_15 < 14; i_15 += 2) 
    {
        arr_73 [i_15 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_70 [i_15 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_70 [i_15 + 1])) && (((/* implicit */_Bool) 131071))))) : (((((/* implicit */int) arr_70 [i_15 - 1])) ^ (((/* implicit */int) arr_70 [i_15 + 1]))))));
        arr_74 [i_15 - 1] = ((/* implicit */short) 2087317577);
    }
}
