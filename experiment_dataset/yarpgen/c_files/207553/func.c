/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207553
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 12; i_1 += 2) /* same iter space */
        {
            arr_5 [i_1] [i_0] |= ((/* implicit */unsigned int) (unsigned short)46826);
            var_11 -= ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0] [i_0 + 2] [i_0]));
            var_12 = ((/* implicit */unsigned char) arr_0 [i_1]);
            arr_6 [i_0 - 2] [i_1] = (+(((/* implicit */int) var_8)));
            var_13 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)255));
        }
        for (short i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
        {
            var_14 ^= ((/* implicit */short) ((arr_4 [i_0]) ? (((/* implicit */int) ((signed char) var_3))) : (((int) var_10))));
            var_15 = ((/* implicit */int) (~((+(826156941U)))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])));
            var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_2])))))));
            arr_10 [i_2] [i_0 + 1] [i_2] = ((/* implicit */unsigned short) (~(var_5)));
        }
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            arr_14 [i_0 + 2] = ((/* implicit */signed char) ((unsigned int) 1048559));
            var_18 = ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0]))));
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned char) var_0)))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) var_0)))))));
                var_21 = (-(((((/* implicit */int) arr_3 [i_0])) | (arr_9 [i_5] [7]))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    arr_23 [i_4] = ((/* implicit */unsigned int) arr_12 [i_0 - 1] [i_4] [i_4]);
                    arr_24 [i_0] [i_0 - 1] [i_5] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0])))))));
                    var_23 = ((/* implicit */signed char) arr_11 [i_6] [i_0] [i_0]);
                }
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        var_24 += ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_7] [i_4]))))) * (((/* implicit */int) arr_30 [i_0])));
                        var_25 -= ((/* implicit */_Bool) ((unsigned short) (short)2));
                        var_26 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_2)))));
                    }
                    for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */short) var_4);
                        var_28 = ((/* implicit */signed char) ((int) (+(var_6))));
                        var_29 = ((/* implicit */int) arr_28 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 2]);
                    }
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 2) 
                    {
                        var_30 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_11 [i_0] [i_4] [i_0]))))));
                        var_31 -= (+(((/* implicit */int) var_0)));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) 3989412412U))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)24757)) - (1048558)));
                    }
                    arr_39 [i_0] [i_4] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_0] [i_0 + 1]))));
                    var_34 = ((/* implicit */int) max((var_34), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_7]))))) ? (((/* implicit */int) arr_8 [i_0 - 1])) : ((~(((/* implicit */int) arr_7 [i_0]))))))));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_0 + 2] [i_7] [(unsigned char)6] [i_0 - 2] [i_5])) << (((arr_9 [i_0 - 1] [i_7]) + (751292307)))));
                }
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_36 = ((/* implicit */_Bool) (~(var_1)));
                    var_37 = ((/* implicit */long long int) arr_36 [i_5]);
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_5))));
                }
            }
        }
        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_39 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)40757)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (300916130U)));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
                {
                    var_40 -= (!(((/* implicit */_Bool) ((unsigned char) var_4))));
                    var_41 = var_6;
                    var_42 = ((/* implicit */short) ((549755813887LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))));
                }
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (-(2783316930U))))));
                    var_44 |= ((/* implicit */short) (+(((/* implicit */int) var_7))));
                }
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
                {
                    arr_55 [i_0] [i_16] [i_13] [i_16] = ((/* implicit */_Bool) var_10);
                    var_45 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_0] [i_12] [i_0] [i_16] [i_0 - 2]))));
                    var_46 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                }
                var_47 = ((/* implicit */int) var_3);
            }
            for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 4; i_18 < 12; i_18 += 4) 
                {
                    var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((unsigned int) arr_44 [i_0] [i_18 - 4] [i_17] [i_0 - 2])))));
                    arr_61 [i_0] [i_0] [i_0] [i_18 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_18 + 1] [i_12] [i_0 + 2] [i_17] [i_0])) ? (((/* implicit */int) arr_59 [i_18 - 2] [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_50 [i_0 - 1] [i_0 + 2] [i_18 - 2]))));
                }
                var_49 = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    arr_64 [i_19] [i_17] [i_12] [i_19] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3526974727U)))));
                    var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 913232856U)) || (((/* implicit */_Bool) 787245754U)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 3; i_20 < 12; i_20 += 2) 
                    {
                        var_51 *= ((/* implicit */short) ((arr_54 [i_17]) ? (((/* implicit */unsigned int) arr_48 [i_17] [i_20 - 1] [i_20 - 1] [i_20] [i_20 + 1] [i_20])) : (var_5)));
                        var_52 = ((/* implicit */unsigned long long int) arr_62 [i_0] [i_19] [i_19] [i_19] [i_20 - 3]);
                        var_53 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_35 [i_20] [i_19] [i_17] [i_12] [i_0])) ? (((/* implicit */int) arr_3 [i_17])) : (((/* implicit */int) arr_50 [i_12] [7] [i_17]))))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        var_54 |= ((/* implicit */short) ((((arr_40 [i_0] [i_0] [i_0 + 2] [4U] [i_21]) + (2147483647))) << (((arr_48 [i_0] [(unsigned char)0] [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1]) - (1799773119)))));
                        var_55 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [i_19])) % (((/* implicit */int) var_9))));
                        arr_70 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0 + 2])) ? (((/* implicit */int) arr_21 [i_0 - 1])) : (((/* implicit */int) (signed char)-18))));
                        var_56 = ((/* implicit */_Bool) ((unsigned char) arr_40 [i_0] [i_12] [i_0] [i_0 + 2] [i_17]));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) var_2))));
                        var_58 = ((/* implicit */int) min((var_58), ((~(17)))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_59 = ((/* implicit */int) ((unsigned char) (unsigned char)246));
                        var_60 = ((/* implicit */unsigned short) ((arr_11 [i_0] [i_0] [i_0 + 1]) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))));
                        arr_76 [0] [i_19] [i_17] [i_19] [i_0] = arr_8 [i_0];
                        var_61 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_0 + 2] [i_0 + 2] [i_0] [i_19] [i_0]))));
                    }
                }
            }
        }
        var_62 = ((/* implicit */short) var_0);
    }
    for (unsigned char i_24 = 2; i_24 < 11; i_24 += 4) /* same iter space */
    {
        arr_80 [i_24 - 1] [i_24 - 1] = ((/* implicit */int) max((min(((short)5), (((/* implicit */short) ((signed char) var_5))))), (((/* implicit */short) arr_52 [i_24 + 2] [i_24] [i_24] [i_24] [i_24 + 2] [i_24 + 2]))));
        arr_81 [i_24] = ((/* implicit */unsigned short) var_8);
    }
    /* LoopSeq 1 */
    for (int i_25 = 2; i_25 < 18; i_25 += 4) 
    {
        arr_86 [i_25 - 1] [i_25] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1937674341U)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14069)))));
        var_63 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_1) != (((/* implicit */int) arr_85 [i_25 + 1])))))));
    }
}
