/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25591
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = arr_1 [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 524287LL)) ? (-524287LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            arr_5 [i_0] [i_1 + 2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (((/* implicit */int) var_12)))) + (((/* implicit */int) arr_4 [i_1 + 3]))))) || (((/* implicit */_Bool) ((int) ((arr_0 [i_0]) ^ (var_11)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) arr_8 [i_3 - 1] [i_1 + 1])), (var_6)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_8 [i_3 - 2] [i_1 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_17)), (var_11))))))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) (((+(var_11))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1 + 2] [6U])), (arr_10 [i_1 + 2] [3ULL] [i_0] [(signed char)4])))))));
            arr_12 [i_1] = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) arr_8 [i_1 + 3] [i_1 + 2])), (var_4))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (((((/* implicit */int) arr_1 [i_1 + 1])) >> (((arr_0 [i_1 + 1]) - (500435276U))))))))));
        }
        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            var_23 = ((/* implicit */int) ((unsigned char) ((unsigned short) max((((/* implicit */long long int) (signed char)-27)), (var_10)))));
            arr_15 [i_4] [i_4 + 3] = ((/* implicit */short) ((int) 659239660));
            var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_13 [i_0] [i_4 + 3] [i_4 - 1])))) ? (((((/* implicit */_Bool) 659239686)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_4 + 3] [i_4 + 1])) && (((/* implicit */_Bool) arr_13 [i_0] [i_4 - 1] [i_4 - 1])))))));
        }
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (signed char i_6 = 3; i_6 < 12; i_6 += 3) 
            {
                for (signed char i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_11 [(signed char)9] [i_7 - 2] [4U] [0LL] [i_6 - 2] [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)10] [i_7 - 2] [(unsigned char)10] [(signed char)6] [i_6 - 2] [i_0]))) : (var_3)))))));
                            arr_26 [i_0] [i_5] [i_6] [i_5] [i_8] = ((/* implicit */short) ((unsigned long long int) 524266LL));
                            var_26 = ((/* implicit */unsigned int) max((var_3), (((/* implicit */long long int) var_1))));
                        }
                        var_27 = ((/* implicit */int) var_16);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_31 [i_0] [i_0] [i_10] = ((signed char) ((int) arr_18 [i_9 + 1]));
                    var_28 -= ((/* implicit */signed char) min((((/* implicit */long long int) (+(((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) var_5)))))))), (var_10)));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        for (long long int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                {
                    arr_43 [i_11] [i_12] |= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_33 [i_11])), (arr_35 [(_Bool)1] [i_12])))) << (((((unsigned int) arr_33 [i_12 + 1])) - (50U)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_29 = min((((((/* implicit */_Bool) arr_46 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 + 1]))))), (arr_36 [i_11] [i_11]));
                        arr_48 [i_12] [i_11] [i_14] [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_42 [i_14] [i_12 - 1]), (arr_42 [i_11] [i_12 + 1])))) & (((((/* implicit */int) min((var_14), (arr_35 [i_11] [i_13])))) ^ (((/* implicit */int) ((unsigned char) (signed char)50)))))));
                        arr_49 [(signed char)1] [i_12] [i_12] [i_14] = var_15;
                    }
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        var_30 |= ((/* implicit */unsigned int) var_7);
                        var_31 &= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_39 [i_12 - 1] [i_12 + 1] [i_12 - 1])) ? (((/* implicit */int) arr_39 [i_12 - 1] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_39 [i_12 + 1] [i_12 + 1] [i_12 + 1])))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) << (((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_52 [i_11] [i_13]))) << (((((/* implicit */int) ((unsigned char) var_2))) - (40))))) - (315391U)))));
                        arr_53 [i_11] [i_11] [i_15] &= ((/* implicit */long long int) var_12);
                    }
                    for (signed char i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        arr_58 [i_12] [i_12] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)97)) > (-1104181473)));
                        arr_59 [i_16] [i_12] [i_12] [(unsigned char)9] [i_12] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_15))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_12] [i_12 + 1] [i_13]))) : (arr_38 [i_13])))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-2), (((signed char) 8787503087616ULL)))))) : (min((((/* implicit */long long int) arr_52 [i_12 - 1] [i_12])), (var_10)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 3; i_17 < 14; i_17 += 3) 
                        {
                            var_33 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_9)), (var_5))))) >= (((/* implicit */int) arr_57 [i_11] [i_11] [i_11] [i_11]))));
                            arr_62 [i_12] [5U] [(unsigned char)13] [(unsigned char)13] [i_17 + 1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_16 + 1] [i_17 - 3])) ? (arr_52 [i_16 + 1] [i_17 - 3]) : (((((/* implicit */_Bool) var_7)) ? (arr_52 [i_16 + 1] [i_17 + 2]) : (arr_52 [i_16 - 1] [i_17 - 1])))));
                            var_34 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_50 [i_17] [i_16]))))), (arr_44 [i_16 - 1] [i_12] [i_16 - 1] [i_16 + 1]))), (((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 659239656))))))));
                            arr_63 [i_17] [i_12] [(unsigned short)15] [(unsigned short)15] [i_11] [i_12] = ((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) -5789530720721299213LL))), (var_11)));
                        }
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned int) var_14);
                            var_36 -= ((/* implicit */unsigned char) var_17);
                            var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_55 [i_13] [i_16 + 1] [i_13] [i_11])) ? (var_3) : (((/* implicit */long long int) var_0))))))) || (((/* implicit */_Bool) var_8))));
                        }
                        arr_66 [0] [(signed char)1] [i_12] = var_13;
                    }
                    var_38 = ((/* implicit */unsigned short) ((((((_Bool) -659239661)) ? (min((((/* implicit */unsigned int) (signed char)-27)), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(unsigned char)12] [i_12 - 1]))))) & (min((((/* implicit */unsigned int) var_16)), (var_4)))));
                    arr_67 [i_12] = var_4;
                }
            } 
        } 
    } 
    var_39 -= ((/* implicit */unsigned char) ((unsigned short) var_9));
}
