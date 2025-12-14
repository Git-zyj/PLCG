/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223814
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0])))) + (((long long int) ((((/* implicit */_Bool) var_5)) ? (223555322) : (((/* implicit */int) var_5)))))));
        var_11 = ((/* implicit */long long int) max((max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2]))), (max((arr_3 [i_0 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0])))))))));
        var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) var_3)), (18446744073709551613ULL))))), (arr_1 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) + (((unsigned long long int) arr_6 [i_1] [i_1] [i_2]))))))));
            var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */int) arr_4 [i_2 + 1])), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1] [i_1])))))) - (((((/* implicit */_Bool) ((int) arr_7 [i_1] [2U]))) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40609)) && (((/* implicit */_Bool) 4294967295U)))))))));
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_15 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 63719278006382469LL)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34324)) ? (2027978242) : (((/* implicit */int) (short)-23068))))) ? (((((/* implicit */_Bool) 5743971151988345739LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) : (18446744073709551599ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)15), ((signed char)-8)))))))));
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61440))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [(short)18]))) ^ (arr_10 [i_1] [i_3])))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [(signed char)16])) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_9 [i_3] [i_3])))), (((/* implicit */int) ((short) var_6)))))) : (arr_10 [i_1] [i_3]));
            var_17 += var_2;
            var_18 = ((/* implicit */int) ((unsigned short) ((((((/* implicit */_Bool) var_9)) ? (2147483647) : (((/* implicit */int) arr_9 [i_3] [i_3])))) / (((/* implicit */int) (signed char)-110)))));
        }
        arr_11 [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1])), ((signed char)20))))) : (4190208U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (arr_9 [(signed char)14] [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        var_20 = arr_4 [i_4];
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) max(((_Bool)0), ((_Bool)1)));
        /* LoopSeq 3 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            arr_19 [i_4] = ((/* implicit */_Bool) arr_5 [i_5]);
            arr_20 [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_5])) ? (((/* implicit */int) (signed char)16)) : (((((/* implicit */_Bool) arr_7 [i_4] [i_5])) ? (((/* implicit */int) (unsigned short)31210)) : (0))))));
        }
        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) 
        {
            arr_23 [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */long long int) 0U)) : (max((((/* implicit */long long int) var_1)), (arr_10 [i_4] [i_6 + 1])))))));
            arr_24 [i_4] [i_4] [i_4] = (unsigned short)2047;
        }
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        {
                            arr_33 [i_4] [i_4] [i_8] [i_9 - 1] [i_4] [i_10] [i_10] = ((/* implicit */_Bool) var_1);
                            arr_34 [0LL] [i_4] [i_8] [i_9] [i_10] = ((/* implicit */signed char) arr_25 [i_4] [3LL]);
                            var_21 = ((/* implicit */int) ((unsigned long long int) ((short) arr_25 [13LL] [i_9 + 1])));
                        }
                    } 
                } 
                var_22 -= ((/* implicit */long long int) max((((/* implicit */int) max((arr_29 [i_4] [i_7] [i_7] [i_8] [i_8]), (((/* implicit */short) (signed char)14))))), (511)));
            }
            for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                var_23 ^= var_0;
                arr_38 [(unsigned short)7] [i_4] [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65195)) / (-2147483647)));
            }
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                arr_41 [i_4] [i_7] [i_12] = -2147483641;
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_45 [i_4] = ((/* implicit */signed char) var_4);
                    var_24 = var_8;
                    var_25 += ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32130)) ? (288225978105200640LL) : (((/* implicit */long long int) ((int) (short)-32129)))))) : (207061533720038386ULL)));
                    var_26 ^= ((/* implicit */unsigned int) arr_39 [i_12] [i_12]);
                }
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((unsigned int) (signed char)93)), (((/* implicit */unsigned int) arr_15 [i_12] [i_12] [i_4]))))) ? (max((arr_25 [i_4] [i_12]), (arr_25 [i_4] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-32129), (var_2)))) ? (((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (arr_27 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62626))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)38)), (var_4))))))))));
            }
            var_28 = ((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_4])) ? (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)-124)))))) : (((/* implicit */int) (signed char)-64)));
            arr_46 [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_15 [i_4] [i_4] [i_4]);
        }
    }
    var_29 = ((/* implicit */_Bool) var_3);
}
