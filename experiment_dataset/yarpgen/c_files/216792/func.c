/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216792
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) var_10);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_19 = ((/* implicit */long long int) arr_4 [i_1 + 2] [i_2]);
                var_20 = ((/* implicit */_Bool) ((arr_5 [i_2]) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (_Bool)1))));
            }
            for (short i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((-3952332) > (((/* implicit */int) var_14))))) : (var_0)));
                arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) var_14)))));
            }
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((unsigned char) var_3))) : (var_0)));
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
        {
            arr_12 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))) >= (((arr_8 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) ? ((~(arr_7 [i_4] [i_4] [i_0] [i_0]))) : (((/* implicit */int) var_13))));
            var_23 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (var_1)))));
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            var_24 ^= ((/* implicit */short) (((-(((/* implicit */int) arr_14 [i_5])))) | (((((/* implicit */_Bool) ((signed char) arr_2 [i_5]))) ? (((/* implicit */int) var_17)) : ((~(((/* implicit */int) arr_13 [i_0] [i_5] [(unsigned short)9]))))))));
            var_25 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_11))))), (min(((~(1625958011794817161LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) (short)8196)) : (((/* implicit */int) arr_11 [i_0])))))))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1197952980522544842LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (67108863U))), (arr_2 [i_6])));
        var_26 &= ((/* implicit */int) ((((/* implicit */unsigned int) (((-(arr_7 [i_6] [i_6] [i_6] [i_6]))) << (((((/* implicit */int) arr_10 [(unsigned char)12] [i_6] [i_6])) - (122)))))) > ((((~(arr_2 [i_6]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13))))))));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_4))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
    {
        var_28 |= ((/* implicit */unsigned char) ((short) arr_24 [i_7]));
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_22 [i_7] [i_7]))));
        var_30 ^= ((/* implicit */unsigned short) (~(arr_8 [i_7])));
        var_31 |= ((/* implicit */int) arr_1 [i_7]);
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_9 = 4; i_9 < 13; i_9 += 1) 
        {
            arr_29 [i_9] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((signed char) var_8))) >= ((~(((/* implicit */int) var_17))))))) & ((((+(((/* implicit */int) arr_11 [i_8])))) + (((/* implicit */int) arr_23 [i_8]))))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((((((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1197952980522544831LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_25 [i_9 - 2] [i_8])) - (1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13))))) : (var_1)))))))));
        }
        arr_30 [i_8] = ((/* implicit */unsigned char) min((((unsigned int) var_14)), (((/* implicit */unsigned int) arr_10 [i_8] [i_8] [i_8]))));
    }
    /* LoopSeq 2 */
    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) min((-1197952980522544842LL), (((((/* implicit */long long int) var_0)) + (((((/* implicit */_Bool) 18014398508433408ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))) : (1197952980522544829LL))))))))));
        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_10] [i_10] [i_10]))));
        var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_8))) << (((((/* implicit */int) arr_28 [11U])) - (10500)))));
        arr_34 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_32 [i_10])) / (((/* implicit */int) var_11))))))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_10] [(_Bool)1] [i_10])) ? (((/* implicit */int) arr_16 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_16 [21] [i_10] [i_10])))))));
        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_10] [1] [i_10]))));
    }
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        arr_39 [i_11] = ((/* implicit */signed char) arr_25 [i_11] [i_11]);
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_37 = ((/* implicit */unsigned short) ((short) (~((~(((/* implicit */int) (signed char)-7)))))));
            arr_43 [i_11] [i_12] [i_12] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_35 [i_11] [i_11])) ? (((((/* implicit */_Bool) arr_21 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_15))) : (((arr_15 [i_12] [i_12] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))), (((/* implicit */long long int) arr_23 [i_11]))));
            arr_44 [i_11] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_0 [i_11] [i_12])) : (((/* implicit */int) arr_38 [i_11] [i_12]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (arr_4 [i_11] [i_11])))) : (((/* implicit */int) arr_26 [i_12])))), ((((!(((/* implicit */_Bool) 2135793424)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [5])) && (((/* implicit */_Bool) var_10))))) : (arr_31 [i_11])))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    for (int i_15 = 1; i_15 < 7; i_15 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) var_3);
                            var_39 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((arr_31 [i_12]) >= (((/* implicit */int) arr_4 [i_11] [i_12])))))))));
                            arr_52 [i_11] [(short)0] [(short)0] [i_11] = 1227824060U;
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 3 */
    for (long long int i_16 = 3; i_16 < 20; i_16 += 2) 
    {
        arr_57 [i_16] = ((/* implicit */signed char) (short)4560);
        arr_58 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) arr_7 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) (signed char)-33))))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_14)))))) : ((-(((/* implicit */int) arr_13 [i_16] [i_16 - 3] [i_16]))))));
        arr_59 [i_16] = ((/* implicit */unsigned char) var_14);
    }
    for (short i_17 = 3; i_17 < 22; i_17 += 2) 
    {
        arr_63 [i_17] = ((/* implicit */_Bool) ((long long int) var_4));
        arr_64 [i_17] = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_6 [i_17])), (arr_8 [i_17 - 3]))) / (((((/* implicit */_Bool) (unsigned short)52666)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) : (3257618070U)))));
        /* LoopNest 2 */
        for (long long int i_18 = 1; i_18 < 21; i_18 += 2) 
        {
            for (int i_19 = 1; i_19 < 19; i_19 += 2) 
            {
                {
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_62 [(_Bool)1])) ? (arr_62 [(unsigned short)8]) : (var_9))))))));
                    arr_71 [i_17] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_15 [i_18 + 2] [i_18 - 1] [i_18 + 2]))) >= (((/* implicit */int) (!(arr_68 [i_17] [i_17] [i_17]))))));
                    arr_72 [i_17] [i_17] [i_18 + 2] [i_19 + 1] = ((/* implicit */unsigned short) arr_3 [i_17] [i_17 - 1] [i_17 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 3; i_20 < 20; i_20 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_10 [i_17] [(unsigned short)4] [i_20])) : (((((/* implicit */int) arr_1 [i_17])) | (((/* implicit */int) var_2)))))) / (((/* implicit */int) var_10))));
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((((/* implicit */int) arr_68 [i_19 + 1] [i_18] [(unsigned char)4])) >= (((/* implicit */int) arr_3 [i_19 + 1] [i_19 + 1] [i_18 + 2])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (short)28155)) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (unsigned short)50408))))))))))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (min((arr_61 [(unsigned short)18]), (arr_2 [i_19 + 1]))))))));
                    }
                    for (unsigned char i_21 = 3; i_21 < 20; i_21 += 1) /* same iter space */
                    {
                        arr_77 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) var_1);
                        var_44 = ((/* implicit */unsigned int) ((((arr_4 [i_17] [i_17 - 3]) ? (((/* implicit */int) arr_4 [i_17 - 3] [i_18 + 2])) : (((/* implicit */int) arr_4 [i_21] [i_17])))) | (((/* implicit */int) var_13))));
                        var_45 = ((/* implicit */_Bool) min((((/* implicit */signed char) ((2147483647) >= ((-(((/* implicit */int) arr_68 [i_17] [i_18] [i_17]))))))), (var_13)));
                    }
                    var_46 = ((/* implicit */short) var_9);
                }
            } 
        } 
        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_17 - 3])) ? (((arr_8 [i_17 + 1]) - (arr_8 [i_17 - 3]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))))));
    }
    for (unsigned int i_22 = 1; i_22 < 14; i_22 += 3) 
    {
        var_48 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_22] [i_22 + 2] [i_22 + 2])) ^ (((/* implicit */int) arr_13 [i_22 + 1] [i_22 + 1] [i_22 + 1]))))), (((((/* implicit */_Bool) arr_70 [i_22] [i_22] [i_22])) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_6)))))))));
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            var_49 = arr_73 [i_22];
            var_50 = ((/* implicit */int) arr_75 [i_22 - 1] [i_22 + 1] [i_22] [(unsigned char)9] [i_22 - 1]);
        }
        var_51 = ((/* implicit */signed char) max((var_51), (var_3)));
    }
}
