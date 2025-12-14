/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50625
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
    var_18 &= var_16;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49591)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_13))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */int) arr_13 [i_1]);
                            var_20 = (i_0 % 2 == 0) ? (((/* implicit */short) (((((((+(((/* implicit */int) (short)-32738)))) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 1])) - (6532))))) ^ ((+(((/* implicit */int) min((var_3), (var_5))))))))) : (((/* implicit */short) (((((((+(((/* implicit */int) (short)-32738)))) + (2147483647))) << (((((((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 1])) - (6532))) + (2075))) - (28))))) ^ ((+(((/* implicit */int) min((var_3), (var_5)))))))));
                            arr_20 [i_0] [i_0] [i_0] [(short)15] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_17 [i_0]) / (((/* implicit */int) arr_1 [i_0] [i_2]))));
                            var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)0))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) min((arr_6 [i_0] [i_2] [i_2]), (((/* implicit */unsigned char) var_13))))), (max((var_1), (var_17))))))));
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            arr_23 [i_5] [i_3 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (short)-32751))))), (((((/* implicit */int) arr_13 [i_1 + 1])) ^ ((~(((/* implicit */int) var_12))))))));
                            var_23 = ((/* implicit */unsigned char) min(((+(arr_16 [i_0] [i_3] [i_3] [i_3] [5]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            var_24 = ((/* implicit */signed char) var_1);
                            arr_24 [i_0] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(var_14)))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_1 - 1]))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_0] [i_5]))))) ? ((~(((/* implicit */int) (short)-6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_3] [i_5])))))))));
                            arr_25 [i_0] = ((/* implicit */signed char) (short)1235);
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            var_25 += ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))), (arr_10 [i_0] [i_0] [i_0] [i_0])));
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)23))));
                            arr_29 [(signed char)3] [i_0] [(short)15] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [(unsigned short)5] [i_3] [i_0])) ? (((/* implicit */int) (short)-32735)) : (((/* implicit */int) (signed char)-5)))) >= (((/* implicit */int) arr_12 [i_3 - 1] [i_1 - 1] [i_2])))))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) (+(((var_7) - (((/* implicit */int) arr_7 [i_2] [i_1 - 1] [i_2]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6] [i_3 - 2] [i_1 - 1]))))) : (((((/* implicit */int) max((arr_22 [4] [i_1] [(short)1] [i_3] [5]), (var_1)))) * (((/* implicit */int) (short)-5331)))))))));
                        }
                        var_28 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)1234)))) != (((/* implicit */int) (unsigned short)15945))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_30 [(short)3])))))))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_0] [i_1] [i_7] [i_1 + 1] [i_7]))))) ? ((-(((/* implicit */int) arr_11 [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)-32738)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
            }
            for (unsigned short i_8 = 3; i_8 < 24; i_8 += 2) 
            {
                var_31 = ((/* implicit */int) var_3);
                arr_36 [(unsigned char)0] [(short)7] [(unsigned char)0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) ((arr_10 [i_0] [i_1] [i_8] [i_8]) == (((/* implicit */int) (short)-32762))))))) - (((/* implicit */int) ((((/* implicit */int) (short)1)) == (((((/* implicit */int) var_8)) + (((/* implicit */int) var_1)))))))));
                arr_37 [2ULL] [i_0] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14121)) || (((/* implicit */_Bool) var_3))))) > ((~(((/* implicit */int) (short)13)))))))));
                arr_38 [i_0] [i_8 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-1);
                /* LoopSeq 4 */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) ((var_9) > (((/* implicit */int) (short)7))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 24; i_10 += 3) 
                    {
                        var_33 -= ((/* implicit */int) arr_22 [i_8] [15ULL] [i_8] [i_0] [i_0]);
                        arr_44 [i_1] [i_0] [i_10] = var_3;
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_47 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0])) + (6271)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) ^ ((-(((/* implicit */int) var_8)))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((((((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0])) + (6271))) + (19001)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) ^ ((-(((/* implicit */int) var_8))))))))));
                        var_34 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_0)) % (((/* implicit */int) var_15)))) * (((/* implicit */int) (short)9))))));
                        arr_48 [10ULL] [i_1 - 1] [i_0] [i_9] = ((/* implicit */unsigned short) arr_2 [i_9]);
                    }
                }
                for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        var_35 -= ((/* implicit */unsigned char) var_11);
                        var_36 = min((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), ((short)-1));
                        arr_54 [i_0] [i_1] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */short) max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) arr_26 [i_0] [i_0] [i_8] [i_12] [i_13]))));
                        arr_55 [i_12] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-1))));
                    }
                    for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        arr_59 [i_0] [i_8 - 1] [i_0] [16] [i_14] = (~(min((((/* implicit */int) arr_28 [i_1 + 1] [i_1] [i_8] [i_8 + 1] [i_1])), ((~(((/* implicit */int) var_4)))))));
                        var_37 = ((/* implicit */int) var_3);
                        arr_60 [i_14] [(short)6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                    }
                    for (signed char i_15 = 2; i_15 < 24; i_15 += 4) 
                    {
                        var_38 = ((/* implicit */int) (((~(((((/* implicit */int) var_16)) * (((/* implicit */int) arr_19 [i_0] [i_1 - 1] [(signed char)2] [(signed char)2])))))) > ((+(((/* implicit */int) arr_50 [i_1 + 1] [i_8 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        var_39 = (((~(((/* implicit */int) arr_32 [i_0])))) - (((/* implicit */int) arr_32 [i_0])));
                    }
                    for (short i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        arr_66 [i_0] [i_1] [i_8] [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) arr_40 [i_1 + 1] [i_0] [i_8 - 3] [i_12])))) ^ (((/* implicit */int) max((arr_40 [i_1 + 1] [i_0] [i_8 + 1] [i_1]), (((/* implicit */short) (signed char)46)))))));
                        var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_19 [i_0] [i_12] [i_12] [i_12])))) : (var_9))) <= (((/* implicit */int) arr_57 [(short)1] [i_0] [i_8] [i_12] [i_16]))));
                        var_41 = ((/* implicit */unsigned long long int) var_2);
                        arr_67 [i_0] [i_1 + 1] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_3)), (arr_63 [i_0] [i_1] [i_1 + 1] [i_0] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) var_6))))))));
                    }
                    arr_68 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)0))));
                    arr_69 [i_0] [i_0] = max((((/* implicit */short) (signed char)-47)), ((short)9));
                    arr_70 [(unsigned short)20] [i_1] [i_8] [i_0] = arr_2 [i_12];
                    arr_71 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_8 + 1] [(short)15] [i_8] [i_8 - 3] [i_8 + 1]))));
                }
                for (short i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
                {
                    var_42 |= ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (short i_18 = 2; i_18 < 22; i_18 += 1) 
                    {
                        arr_77 [i_0] [i_0] [i_8] [i_17] [i_18] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_1 + 1]), (((/* implicit */unsigned short) (short)-22917))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32731), (arr_8 [(short)20]))))) : (max((arr_51 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)56))))))));
                        var_43 = ((/* implicit */int) arr_14 [i_18] [i_18 + 1] [(short)20] [i_18 + 1]);
                        arr_78 [19ULL] [i_17] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((arr_42 [i_1 + 1] [i_1 + 1] [(unsigned char)12] [i_0] [i_8 - 1]) > (((/* implicit */int) var_13)))))));
                        var_44 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32730))))) << ((((-(max((((/* implicit */int) var_8)), (var_7))))) + (222)))));
                    }
                    var_45 = min(((-(max((arr_10 [i_0] [i_1 + 1] [i_8] [i_17]), (((/* implicit */int) var_6)))))), (((((((/* implicit */int) (signed char)98)) % (((/* implicit */int) (unsigned char)212)))) ^ (((((/* implicit */int) arr_64 [i_0] [23] [i_0] [i_1] [i_8 - 1] [i_17] [i_0])) << (((((/* implicit */int) var_11)) - (22416))))))));
                }
                for (short i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
                {
                    arr_82 [i_0] [(unsigned char)16] [i_8] [i_19] [i_8] = ((/* implicit */unsigned short) 15661395916765993310ULL);
                    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_19] [i_8 - 3] [i_8] [i_1] [i_0] [i_0]))))) ? (var_7) : ((-(((/* implicit */int) (short)32730)))))), (((/* implicit */int) arr_34 [i_19] [i_1])))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                var_47 = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                var_48 += ((/* implicit */short) var_4);
            }
            for (signed char i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                arr_88 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((+(((((/* implicit */int) var_17)) / (var_7))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) arr_30 [i_21]))))))));
                arr_89 [i_21] [(short)12] [i_21] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_0] [i_1 - 1] [i_1] [i_21]))))));
                arr_90 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)19244)), (-2147483643))))));
            }
            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned long long int) var_14)), (arr_63 [(short)2] [i_1] [22ULL] [(short)4] [i_0])))))))))));
            var_50 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_62 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])) * (((/* implicit */int) var_15)))), (((/* implicit */int) var_16))));
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 2) 
        {
            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_32 [i_22])))))));
            var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) 0))));
        }
    }
}
