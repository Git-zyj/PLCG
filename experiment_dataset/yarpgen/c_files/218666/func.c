/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218666
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
    var_14 |= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (((long long int) 2636213760U)))) != (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)40337))))));
    var_15 = 8706938987286483811LL;
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_1))) + (2147483647))) << (((min((11079830793701338916ULL), (((/* implicit */unsigned long long int) (unsigned short)40322)))) - (40322ULL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) (_Bool)1))))) ? (7488307767147884273LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)40345), ((unsigned short)31751))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
        {
            arr_9 [i_0] [1LL] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0])))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) /* same iter space */
            {
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) min((max((5305047570124260576LL), (((/* implicit */long long int) ((-1612981839) ^ (((/* implicit */int) (short)29838))))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)27292)))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_17 [i_0 + 2] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_0] [i_3] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) -2746518662050636708LL)) < (10898881849585115344ULL))) ? (min((((/* implicit */long long int) var_1)), (var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0])))))));
                    var_17 |= ((/* implicit */int) arr_10 [i_1] [i_2 + 4] [i_3]);
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8706938987286483808LL)) ? (arr_12 [i_0 - 1] [i_0] [(unsigned char)15] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((-(((int) (short)-29838)))) : (((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_2 + 3] [i_0 + 1])) : (((/* implicit */int) arr_16 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_2 - 1])))))))));
                    var_19 = ((/* implicit */unsigned char) ((int) (unsigned short)25215));
                    var_20 += ((/* implicit */long long int) ((arr_7 [(short)6] [(short)6]) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0 - 1] [i_0 - 1])))))));
                }
                for (unsigned char i_4 = 4; i_4 < 15; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_23 [i_0] [15LL] [i_0] [i_5] = ((/* implicit */short) (_Bool)1);
                        var_21 = ((/* implicit */signed char) ((unsigned short) arr_16 [i_2 + 4] [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 + 2]));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_5))));
                    }
                    var_23 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) : (10898881849585115344ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_3)))))));
                }
                var_24 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [(short)10] [11U] [i_0]))) * (-8706938987286483808LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_1])))) : (min((((/* implicit */unsigned long long int) var_7)), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 2] [i_1] [i_2 - 1] [i_0 + 1] [i_2 - 2] [i_0 + 2] [i_1]))) : (var_11))))));
            }
            for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1])) ? (var_11) : (8172779671292802756LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)17))))) ? ((~(((/* implicit */int) arr_20 [i_0] [i_0 + 2])))) : ((-(((/* implicit */int) arr_25 [i_0])))))))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min(((unsigned short)65531), (((/* implicit */unsigned short) min(((short)-29830), ((short)-24807)))))))));
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))));
            }
        }
        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (((+(arr_7 [i_0] [i_8]))) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_7]), (((/* implicit */unsigned char) arr_14 [i_0] [(unsigned char)0] [(signed char)9] [i_7] [i_8] [i_8])))))))))));
                arr_32 [i_7] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)18490)), (arr_5 [(short)11] [i_8])));
                arr_33 [i_7] &= ((/* implicit */unsigned char) ((signed char) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_7] [i_0 + 1])) : (((/* implicit */int) (signed char)-123))))), (max((-8706938987286483819LL), (((/* implicit */long long int) (_Bool)1)))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 2; i_10 < 15; i_10 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_29 = ((((/* implicit */int) (short)32748)) + (((/* implicit */int) (short)32758)));
                        arr_43 [(_Bool)1] [i_7] [i_7] [(unsigned char)12] [i_0] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) var_13)))));
                        arr_44 [i_0] = ((/* implicit */long long int) var_12);
                    }
                    for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) arr_12 [i_9] [i_10] [i_9] [i_10 - 1]);
                        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_0 + 1]))));
                        arr_47 [i_0] [i_7] [i_7] [i_10 + 1] [i_12] = ((/* implicit */unsigned long long int) arr_30 [(signed char)13] [(signed char)13]);
                        arr_48 [i_0] [i_0] [i_9 + 2] [(unsigned short)5] [i_12] = (short)10451;
                    }
                    for (signed char i_13 = 1; i_13 < 14; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) arr_0 [i_0] [i_10]);
                        var_33 += ((/* implicit */signed char) var_2);
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0 + 2] [(signed char)8] [i_7])) ? (((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)11))));
                        arr_51 [i_7] [i_7] [i_13] [i_10 - 2] [i_13] |= ((/* implicit */_Bool) ((long long int) (unsigned short)58815));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 2) 
                    {
                        arr_54 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                        var_35 = ((/* implicit */signed char) var_4);
                    }
                    arr_55 [i_0] [i_7] [i_9] [i_10] = ((/* implicit */long long int) (~(((unsigned int) var_11))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) -8706938987286483811LL);
                    var_37 += ((/* implicit */signed char) ((unsigned short) var_13));
                }
                for (int i_16 = 3; i_16 < 15; i_16 += 3) 
                {
                    arr_62 [i_16] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0 + 2] [2] [i_0] [i_0 + 2] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        arr_65 [i_0] [i_0] = arr_40 [i_0] [i_0] [i_0] [i_9 + 4] [i_0];
                        arr_66 [i_0] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_0 + 1] [i_16 - 1]))));
                        arr_67 [(signed char)4] [i_7] [(signed char)9] [i_0] = ((/* implicit */unsigned int) var_1);
                        arr_68 [(short)3] [i_0] [i_0] [i_0] [(short)3] = ((/* implicit */unsigned int) (-(var_9)));
                    }
                }
            }
            /* vectorizable */
            for (long long int i_18 = 1; i_18 < 13; i_18 += 2) 
            {
                arr_72 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_18 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_0])) ? (((/* implicit */unsigned int) -593547447)) : (arr_7 [i_0] [i_7])))) : (((((/* implicit */unsigned long long int) var_11)) * (arr_5 [i_7] [i_18 + 2])))));
                /* LoopSeq 3 */
                for (int i_19 = 4; i_19 < 15; i_19 += 3) 
                {
                    var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((int) var_12)))));
                    var_39 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)25198))));
                    arr_77 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (-(562949919866880LL))));
                }
                for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    var_40 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)53)) <= (((/* implicit */int) (signed char)8))));
                    var_41 = ((((/* implicit */_Bool) (unsigned short)40332)) ? (arr_64 [i_18 + 1] [i_18 + 1] [i_18 + 1]) : (arr_64 [i_18 + 3] [i_18 + 3] [i_18 + 3]));
                }
                for (int i_21 = 1; i_21 < 15; i_21 += 3) 
                {
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_7])))) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_43 += ((/* implicit */_Bool) arr_59 [i_18 - 1] [i_21 - 1]);
                }
                /* LoopSeq 2 */
                for (long long int i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47046)) ? (((/* implicit */int) arr_40 [i_0] [i_0] [i_18 - 1] [(signed char)5] [7U])) : (((/* implicit */int) (unsigned short)56048))));
                    var_45 = ((/* implicit */long long int) var_0);
                    var_46 -= ((/* implicit */unsigned short) (~((+(arr_60 [(_Bool)1] [i_7] [(_Bool)1] [i_18] [i_18] [i_22])))));
                }
                for (short i_23 = 0; i_23 < 16; i_23 += 1) 
                {
                    arr_88 [i_0 + 2] [i_0] [i_0] [10ULL] = ((/* implicit */unsigned long long int) var_8);
                    /* LoopSeq 1 */
                    for (signed char i_24 = 1; i_24 < 15; i_24 += 2) 
                    {
                        arr_91 [i_0] [i_0] [(short)13] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)47030))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32556)) ? (arr_64 [i_18 + 1] [i_18 + 1] [i_24 + 1]) : (arr_64 [i_18 + 1] [i_23] [i_24 + 1])));
                        var_48 = ((int) arr_27 [i_24 + 1]);
                    }
                }
            }
        }
        var_49 = ((/* implicit */signed char) (unsigned short)32133);
        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4ULL)) ? (((((/* implicit */_Bool) min((4000328342U), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0])), ((unsigned short)60594)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40337))))))) : (((((/* implicit */_Bool) arr_14 [i_0 - 1] [15U] [(signed char)15] [(signed char)15] [i_0] [i_0])) ? (((/* implicit */int) (short)32326)) : (((/* implicit */int) arr_56 [i_0] [i_0] [i_0 + 1] [i_0]))))));
    }
    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 3) 
    {
        var_51 = ((/* implicit */unsigned char) arr_20 [i_25] [i_25]);
        var_52 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(var_7))))))));
        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((short) var_4)))));
    }
    var_54 = var_10;
}
