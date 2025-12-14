/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37983
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), (min(((unsigned char)202), (((/* implicit */unsigned char) var_3))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)3))))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) || (((/* implicit */_Bool) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))))));
                        arr_10 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) ((int) arr_5 [i_0] [i_1] [i_2] [(signed char)6])));
                        var_17 = 2147483624;
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned char) var_4);
                        var_19 = ((/* implicit */unsigned short) (unsigned char)224);
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) ((((int) (unsigned short)32766)) + (((/* implicit */int) (!(arr_12 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 20; i_5 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27263)) ? (((((/* implicit */_Bool) var_10)) ? (arr_14 [i_5]) : (((/* implicit */int) arr_15 [i_5])))) : (((((/* implicit */_Bool) -2147483625)) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) var_5))))));
        var_22 = ((/* implicit */signed char) ((int) var_6));
        var_23 ^= (-(((/* implicit */int) arr_13 [i_5 - 1])));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_24 *= ((/* implicit */unsigned char) max((var_0), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_15 [i_6 - 1])))) > (((/* implicit */int) arr_13 [i_6 - 1])))))));
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_13 [i_6 - 1])) ? (arr_14 [i_6 - 1]) : (((/* implicit */int) arr_18 [(_Bool)1])))) : (((/* implicit */int) arr_18 [6]))))) ? (min((max((((/* implicit */long long int) (unsigned char)144)), (9223372036854775807LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) (_Bool)1))))))));
        arr_19 [i_6] = (+((-(arr_14 [i_6 - 1]))));
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 += ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) <= ((-(((/* implicit */int) arr_13 [i_6])))))))));
            arr_22 [(unsigned char)2] &= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((3740610546597209461LL), (((/* implicit */long long int) arr_16 [i_6 - 1]))))) ? (((/* implicit */int) (unsigned short)32766)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) var_4)))))));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_11)))))) || (((/* implicit */_Bool) var_8))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            arr_27 [i_6] [i_8] [i_6] = ((/* implicit */unsigned short) (short)-1024);
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_8] [i_6])) - (((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_24 [i_8] [i_8])) - (((/* implicit */int) (unsigned char)53)))) : ((+(((/* implicit */int) var_10)))));
            var_29 = ((/* implicit */short) (-(((((/* implicit */int) arr_24 [i_6] [(unsigned short)7])) + (((/* implicit */int) arr_26 [i_6]))))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_30 = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
            /* LoopSeq 4 */
            for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                var_31 &= ((/* implicit */unsigned short) var_3);
                arr_33 [14ULL] [i_9] [(signed char)10] |= ((/* implicit */long long int) ((((min((3802525000975832537ULL), (((/* implicit */unsigned long long int) arr_17 [i_6] [i_6])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) % (((((/* implicit */_Bool) var_2)) ? (7748099924485923362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32752)))))));
            }
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                var_32 = (signed char)0;
                var_33 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) arr_34 [i_6] [i_6 - 1] [i_6 - 1]))) ? (((/* implicit */unsigned long long int) (-(arr_32 [i_6] [i_6] [i_9] [i_11])))) : (((unsigned long long int) (unsigned char)159)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_34 = ((/* implicit */_Bool) var_12);
                var_35 = ((/* implicit */short) (+((+(((/* implicit */int) arr_35 [i_6] [i_6] [i_6]))))));
                var_36 = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_17 [i_6] [i_9])))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_43 [i_6] [i_9] [i_6] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((signed char) arr_16 [i_6 - 1]));
                    var_37 = ((/* implicit */short) (-(2147483624)));
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (-((((_Bool)1) ? (arr_23 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))))))))));
                    var_39 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_12])) ? (2873537279779945200LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_6 - 1] [i_9] [i_12] [i_13]))))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_6]) >= (((/* implicit */int) (unsigned short)20826))))))));
                }
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_14] [i_6 - 1] [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_16 [i_6 - 1])) : (((/* implicit */int) (unsigned char)117))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_6] [i_6])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5603)))));
                            arr_49 [15] [i_9] [(short)9] [i_9] [i_6] [i_9] [i_9] = (+(((/* implicit */int) arr_38 [i_6 - 1] [i_9] [i_12] [i_14])));
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (short)448))));
                            var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
            }
            for (short i_16 = 2; i_16 < 13; i_16 += 2) 
            {
                var_44 -= ((/* implicit */int) var_0);
                var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (unsigned char)95))));
                var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)116))) : ((-9223372036854775807LL - 1LL)))) ^ (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))))))))));
                var_47 -= ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))));
                var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)62988)) ? (((/* implicit */int) var_7)) : (arr_40 [i_16] [i_9] [i_6]))))))));
            }
            var_49 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_47 [i_6] [i_6 - 1] [i_9] [i_9] [i_9 - 1]))))), (arr_39 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
        }
    }
    for (long long int i_17 = 2; i_17 < 14; i_17 += 4) 
    {
        arr_56 [i_17] [i_17 + 1] = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_17 - 2]))))), (min((((/* implicit */long long int) ((var_0) > (((/* implicit */unsigned int) arr_14 [i_17 + 2]))))), (min((((/* implicit */long long int) arr_14 [i_17])), (arr_53 [i_17])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_19 = 1; i_19 < 16; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_51 = ((/* implicit */unsigned short) ((arr_63 [i_18] [i_17 + 3] [i_19] [i_20]) ? (-28) : (((/* implicit */int) var_9))));
                        arr_65 [i_17] [i_18] [i_18] [i_18] [i_19 + 1] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [10LL])) & (((/* implicit */int) (unsigned short)2767))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (signed char)6))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_21 = 0; i_21 < 17; i_21 += 3) 
        {
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                for (unsigned short i_23 = 0; i_23 < 17; i_23 += 2) 
                {
                    {
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_21])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-63))));
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_54 = ((/* implicit */unsigned long long int) var_6);
            arr_74 [i_17] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_17]))));
        }
        var_55 = ((/* implicit */long long int) arr_57 [i_17 - 1] [i_17 - 2]);
    }
    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */int) (short)-32059)) & (((/* implicit */int) var_7)))) ^ (((/* implicit */int) (unsigned char)4))))), (max((((((/* implicit */_Bool) var_0)) ? (9223372036854775802LL) : (((/* implicit */long long int) 31)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))))))))));
}
