/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201767
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
    var_15 = ((/* implicit */unsigned int) (~(var_7)));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (_Bool)1)) : (-1)))))))))));
        var_17 *= ((((/* implicit */_Bool) var_13)) ? ((((((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) 2878740653178950597LL);
        arr_7 [i_1] &= ((/* implicit */signed char) (~(arr_1 [i_1])));
        var_18 = ((/* implicit */unsigned int) ((short) arr_4 [i_1]));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
            arr_10 [i_2] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) == (arr_8 [i_1])))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)122))) == (arr_5 [i_1])))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_20 ^= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)163))));
                            var_21 = ((/* implicit */long long int) var_4);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_15 [i_3] [i_4] [i_5] [i_4];
                            var_22 = ((/* implicit */int) ((long long int) arr_5 [i_1]));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_1] [i_3] [i_3] [i_1] [i_4] [i_5] [i_8] = ((/* implicit */unsigned int) ((arr_8 [i_1]) < (arr_8 [i_1])));
                            arr_30 [i_1] [i_3] |= ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1]))));
                            var_23 *= ((/* implicit */_Bool) (+(arr_16 [i_8] [i_3] [i_4] [i_4])));
                            var_24 = (!(((_Bool) arr_12 [i_1])));
                        }
                        arr_31 [i_1] [i_3] [i_1] [i_5] = ((/* implicit */long long int) ((unsigned char) arr_28 [i_1]));
                        arr_32 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) (-(arr_23 [i_5] [i_1] [i_5] [i_4] [i_1] [i_3] [i_1])));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 6; i_9 += 3) 
                        {
                            arr_36 [i_9] [i_9] [i_9] [i_5] [i_9] = ((/* implicit */long long int) arr_28 [i_1]);
                            arr_37 [i_9] [i_9] [i_5] [i_9] [i_1] [i_1] [i_1] = ((/* implicit */short) (signed char)112);
                        }
                        arr_38 [i_1] [i_3] [i_5] = ((/* implicit */unsigned short) arr_1 [i_1]);
                    }
                } 
            } 
            arr_39 [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((signed char) (unsigned short)6599)))));
        }
        var_25 = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_43 [i_10] = ((/* implicit */int) arr_41 [i_10] [i_10]);
        /* LoopNest 2 */
        for (short i_11 = 1; i_11 < 7; i_11 += 4) 
        {
            for (unsigned short i_12 = 3; i_12 < 9; i_12 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12 - 2] [i_11 + 1]))) : (max((((/* implicit */unsigned int) (unsigned char)86)), (arr_48 [i_10] [i_10] [i_10] [i_10])))))) ? (max((((/* implicit */unsigned int) arr_0 [i_11])), (arr_48 [i_10] [i_11] [i_10] [i_12 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_12 - 1] [i_12] [i_11 + 3] [i_10]))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) ((unsigned char) arr_40 [i_10]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 3; i_14 < 10; i_14 += 4) 
                        {
                            arr_54 [i_10] [i_10] [i_13] [i_13] [i_10] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) -2878740653178950610LL))), ((+(((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_10]))) : (arr_48 [i_10] [i_10] [i_10] [i_10])))))));
                            var_28 = ((/* implicit */long long int) arr_53 [i_10] [i_10]);
                            arr_55 [i_10] [i_14] [i_14] = ((/* implicit */short) (signed char)116);
                        }
                        for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            arr_60 [i_10] [i_11] [i_12] [i_10] [i_15] [i_15] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_56 [i_10])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 479732923)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_12] [i_12]))) : (4294967295U)))))))));
                            arr_61 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((long long int) arr_51 [i_10] [i_10] [i_10] [i_10])) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_11] [i_12 + 2] [i_13] [i_15])) ? (((/* implicit */int) arr_51 [i_10] [i_11 - 1] [i_11 - 1] [i_13])) : (((/* implicit */int) arr_51 [i_15] [i_12] [i_12] [i_11 + 3])))))));
                            arr_62 [i_10] [i_10] [i_12] [i_10] [i_10] = ((((/* implicit */_Bool) arr_0 [i_11])) ? ((~(((/* implicit */int) arr_46 [i_11 + 4])))) : ((~(((((/* implicit */_Bool) -1706807001116214048LL)) ? (((/* implicit */int) arr_47 [i_13] [i_11 + 1] [i_10])) : (((/* implicit */int) (signed char)-112)))))));
                            var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                    for (long long int i_16 = 2; i_16 < 10; i_16 += 4) 
                    {
                        var_30 = ((/* implicit */int) var_13);
                        var_31 += ((/* implicit */_Bool) (+((+(var_3)))));
                        arr_66 [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */int) (unsigned short)13767)) : (((/* implicit */int) (signed char)-122))))))) ? (((((/* implicit */_Bool) ((arr_48 [i_10] [i_10] [i_12] [i_16]) >> (((((/* implicit */int) (short)-24785)) + (24797)))))) ? (((/* implicit */int) arr_51 [i_11 + 3] [i_11 + 2] [i_12 - 3] [i_16 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (-2878740653178950584LL)))))) : (((/* implicit */int) (!((_Bool)1))))));
                        var_32 += ((/* implicit */signed char) arr_46 [i_12]);
                        arr_67 [i_10] [i_10] [i_12] [i_16] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) (signed char)112))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_10] [i_10] [i_10] [i_16] [i_16] [i_12] [i_10]))) : (arr_1 [i_10])))))));
                    }
                    for (short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) (signed char)124);
                        arr_70 [i_10] [i_11] [i_12] [i_17] = arr_68 [i_10] [i_11] [i_11] [i_17] [i_17];
                        arr_71 [i_11] [i_11] [i_11] [i_17] [i_11] [i_11] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10] [i_11]))) ^ ((~(min((arr_1 [i_10]), (((/* implicit */unsigned long long int) arr_58 [i_10] [i_11] [i_11 + 4] [i_11] [i_11] [i_11 + 4] [i_11])))))));
                    }
                }
            } 
        } 
        arr_72 [i_10] = ((/* implicit */long long int) arr_50 [i_10] [i_10] [i_10]);
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            var_34 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_57 [i_10] [i_18] [i_10] [i_10] [i_18] [i_18] [i_18])) < (((/* implicit */int) var_6)))))) >= (max((var_3), (((/* implicit */unsigned int) arr_58 [i_10] [i_10] [i_10] [i_18] [i_10] [i_18] [i_10]))))))) / (((/* implicit */int) ((((/* implicit */int) (signed char)119)) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_18] [i_18] [i_18] [i_10]))))))))));
            var_35 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) -7169438944513233834LL)))));
            var_36 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_42 [i_10])) ? (((/* implicit */int) arr_42 [i_10])) : (((/* implicit */int) arr_42 [i_10])))));
            var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)86))));
        }
    }
    var_38 = ((/* implicit */unsigned short) (+((+(max((((/* implicit */long long int) var_3)), (var_12)))))));
}
