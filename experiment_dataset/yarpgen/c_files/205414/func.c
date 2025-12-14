/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205414
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
    var_10 = ((/* implicit */int) min((var_6), (((/* implicit */long long int) max((((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 = min((min((((/* implicit */int) var_7)), (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_5 [i_0] [i_0] [1U] [i_0])))))), (((int) arr_8 [i_0] [i_0 + 1] [i_2 + 1])));
                    var_12 = ((/* implicit */unsigned short) (-((~(max((((/* implicit */unsigned int) arr_8 [(unsigned char)6] [i_2 - 1] [(unsigned char)5])), (var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [8LL]))) + (2288851446077898820LL))))))));
                            var_14 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (2147483632)))) ? (((/* implicit */unsigned long long int) max((min((arr_17 [10LL] [i_2 - 1] [i_2 - 1] [i_1] [i_0]), (((/* implicit */long long int) var_3)))), (((long long int) 8259209693523739707ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_3] [i_5])) >> (((((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_3])) - (84)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))) : ((+(arr_15 [i_0 - 2] [8ULL] [i_2 + 1] [i_2 + 1] [i_5])))))));
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_10 [i_0 - 2] [i_0 - 2]), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) || (var_1)))))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2])) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_13 [i_3] [i_2 + 1] [(unsigned short)15] [i_3] [i_0 - 1] [i_3]))))))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))));
                            var_19 = (+(((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_6])) ? (arr_15 [i_0] [i_1] [i_2] [i_3] [(unsigned char)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [4ULL] [i_2] [4ULL] [i_0]))))));
                        }
                        for (unsigned char i_7 = 3; i_7 < 17; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_20 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */signed char) arr_16 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]))))))))) : (min((((unsigned int) 13U)), (((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2]))));
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                            var_23 *= ((/* implicit */unsigned char) arr_11 [i_3] [i_2] [8LL] [i_0]);
                        }
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_14 [i_0]))));
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)7)), ((-(((unsigned long long int) 4294967286U))))));
                        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_6 [i_0 + 1])), (max((arr_9 [i_0 + 1] [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) arr_14 [i_0 + 1]))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)3050)) ? (-5488650535065694642LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))))));
        var_28 &= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_8 = 1; i_8 < 19; i_8 += 3) 
    {
        var_29 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) 1969532798)));
        /* LoopSeq 4 */
        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_29 [i_8 + 3]))));
            var_31 = ((/* implicit */signed char) (-((~(-2220953587914518291LL)))));
            var_32 -= ((/* implicit */unsigned int) ((arr_28 [i_8 + 1] [i_8 + 1]) << (((((/* implicit */int) arr_29 [i_8 + 1])) + (77)))));
            var_33 = ((/* implicit */long long int) (+(arr_28 [(unsigned short)16] [(unsigned short)5])));
            var_34 = (-(arr_25 [i_8 + 1]));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_35 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_23 [17LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [i_10] [i_10]))) : (arr_22 [i_8 - 1])));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 3924965098U)) - (arr_28 [2LL] [i_8 - 1])));
            var_37 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_8 + 2] [i_8 - 1] [i_8 + 2]))));
            var_38 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2841285889U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24327))) : (17687190576393244600ULL)));
            var_39 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)39))))));
        }
        for (short i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) arr_33 [i_8 - 1]);
                var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_11 + 2]))));
            }
            var_42 = ((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_8]))));
            var_43 *= ((/* implicit */unsigned char) arr_34 [i_11 + 2] [i_11 + 2]);
            var_44 = ((/* implicit */short) (~(((/* implicit */int) arr_31 [i_11 + 2] [i_11] [i_8 + 2]))));
        }
        for (short i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_45 = ((/* implicit */signed char) ((unsigned short) var_2));
            /* LoopSeq 2 */
            for (long long int i_14 = 1; i_14 < 21; i_14 += 3) 
            {
                var_46 = ((/* implicit */signed char) (~(((/* implicit */int) arr_31 [(unsigned char)2] [i_14 + 1] [i_14 - 1]))));
                var_47 = ((/* implicit */short) (-(arr_26 [i_13] [i_14])));
                var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_8 + 2] [i_8 + 2] [i_14 + 1])) >> (((/* implicit */int) arr_31 [i_8] [i_8 + 1] [i_14 + 1]))));
                var_49 *= ((/* implicit */_Bool) arr_38 [i_13] [i_13]);
            }
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                var_50 = ((/* implicit */short) var_5);
                var_51 = ((/* implicit */int) var_4);
            }
            /* LoopSeq 3 */
            for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
            {
                var_52 |= ((/* implicit */unsigned char) ((unsigned short) arr_43 [i_8 + 3] [i_8 + 1] [i_8 + 3]));
                var_53 = ((/* implicit */short) (~(4320307515467034285ULL)));
                var_54 = arr_25 [i_8 + 1];
            }
            for (long long int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                var_55 = ((int) (unsigned short)65535);
                var_56 |= ((/* implicit */_Bool) arr_37 [(short)5] [i_8 + 2]);
                /* LoopSeq 3 */
                for (unsigned char i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)57740))))));
                    var_58 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                }
                for (unsigned char i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2)))))));
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15242)) ? (((/* implicit */int) arr_32 [i_13] [i_17])) : (((/* implicit */int) (unsigned char)54))))) : ((((_Bool)0) ? (arr_46 [(signed char)11] [i_13] [i_17] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
                for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                {
                    var_61 = ((/* implicit */unsigned int) (unsigned short)54946);
                    var_62 |= ((/* implicit */unsigned long long int) 0LL);
                }
                var_63 = ((/* implicit */unsigned short) var_1);
            }
            for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                var_64 = ((/* implicit */unsigned long long int) arr_26 [i_8 - 1] [i_13]);
                var_65 &= ((/* implicit */unsigned long long int) var_8);
            }
            var_66 = ((/* implicit */long long int) arr_26 [i_8] [i_13]);
        }
        var_67 = ((/* implicit */_Bool) ((int) arr_36 [i_8 + 1]));
        var_68 = ((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_8 + 1] [i_8] [i_8 + 3] [i_8]))));
    }
    var_69 = ((/* implicit */unsigned char) 2477960478287300408LL);
}
