/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221717
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((var_14) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_3) : (var_3)))))))))));
    var_17 = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            arr_4 [i_0] [9U] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))));
            arr_6 [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)90))))));
        }
        for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0])))))))))))));
                var_19 *= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_11 [i_4 + 1] [i_4])) % (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_2 + 1] [i_4 - 1])) ? (arr_0 [i_2 - 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~((~(((/* implicit */int) ((_Bool) 2540448839U))))))))));
                var_22 = ((((/* implicit */int) var_15)) != ((-((-(((/* implicit */int) (_Bool)1)))))));
                var_23 = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) min((arr_7 [i_0] [i_4]), (((/* implicit */unsigned short) arr_8 [i_2]))))))));
            }
            for (unsigned int i_5 = 2; i_5 < 7; i_5 += 3) 
            {
                var_24 += ((/* implicit */short) max((((_Bool) var_7)), (((_Bool) ((unsigned int) (_Bool)1)))));
                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0])) | (((/* implicit */int) arr_7 [i_0] [i_2 - 1]))))) | (max((((/* implicit */long long int) arr_10 [i_0])), (var_5)))));
            }
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-2041975882)))) ? (-2041975882) : (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)27790))))))) : (min((((/* implicit */long long int) (unsigned short)38468)), (min((((/* implicit */long long int) (_Bool)0)), (-7346042114366485295LL))))))))));
                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27048)))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_28 += ((/* implicit */unsigned int) (short)32757);
            arr_19 [i_0] [i_7] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_12 [i_0] [i_7] [i_7])), (arr_2 [i_0] [i_0]))) << (((((arr_2 [i_7] [i_7]) << (((((/* implicit */int) arr_12 [i_0] [i_7] [i_7])) - (59))))) - (1879048187U)))));
            /* LoopSeq 1 */
            for (short i_8 = 2; i_8 < 7; i_8 += 3) 
            {
                var_29 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-11790))));
                /* LoopSeq 2 */
                for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */short) (-(-7346042114366485307LL)));
                        arr_29 [i_0] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_8 + 2] [i_8] [i_9]))) - (min((((/* implicit */int) arr_22 [i_8 + 4])), ((+(((/* implicit */int) (short)-11795))))))));
                        var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)73)) >> (((-7346042114366485295LL) + (7346042114366485314LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)33210)) : (((/* implicit */int) (_Bool)1))))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)12540)) == (((/* implicit */int) arr_20 [i_0] [i_11] [i_11] [i_8 - 2])))))) <= (-6759191463250695107LL)));
                        var_33 += ((/* implicit */short) ((((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) (unsigned short)3848)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62)))))));
                        var_34 ^= ((((/* implicit */_Bool) var_9)) ? ((~(var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)8496)))));
                    }
                    var_35 = ((/* implicit */unsigned short) (unsigned char)192);
                    var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0]))))) : (((((/* implicit */int) max(((short)32750), (var_11)))) % (((((/* implicit */_Bool) (short)32750)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (short)-32750))))))));
                    var_37 = ((/* implicit */unsigned int) (!(((max((-5308967433468434012LL), (((/* implicit */long long int) (short)32749)))) == ((~(arr_16 [i_0] [i_7] [i_8])))))));
                }
                for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) var_2);
                        arr_39 [i_0] [i_13] [i_0] [i_12] [i_13] = ((/* implicit */short) max((((/* implicit */long long int) var_11)), (max((var_2), (((/* implicit */long long int) 2065046743U))))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_8 + 4] [(unsigned char)5] [i_8 + 3]))) * (arr_26 [i_12] [i_13] [i_13 - 1] [i_12] [i_13 - 1] [i_7] [i_12])))) == ((((-(10883622502130319909ULL))) * (((/* implicit */unsigned long long int) arr_16 [i_13 - 1] [i_7] [i_8 + 4])))))))));
                        var_40 = ((/* implicit */unsigned short) arr_35 [i_0] [i_12]);
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned int) -2433143447936681459LL);
                        arr_42 [i_12] [i_0] = ((/* implicit */_Bool) var_2);
                    }
                    /* LoopSeq 2 */
                    for (short i_15 = 2; i_15 < 7; i_15 += 2) 
                    {
                        arr_47 [i_0] [i_7] [i_8] [i_8] [i_15 + 3] = var_0;
                        arr_48 [i_0] [i_7] [i_8] [i_12] [i_15 + 2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_23 [i_8] [i_7])), (max((((var_2) - (((/* implicit */long long int) ((/* implicit */int) (short)1060))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_45 [i_15 + 2] [i_7] [i_8 + 1] [(short)8] [i_8])))))))));
                    }
                    for (unsigned int i_16 = 4; i_16 < 9; i_16 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned short) arr_12 [(unsigned short)5] [(short)1] [(unsigned short)5]);
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (+(arr_35 [i_7] [i_0]))))));
                    }
                }
            }
            arr_52 [i_0] [i_0] = ((/* implicit */_Bool) ((((min((-7346042114366485310LL), (((/* implicit */long long int) 2041975882)))) + (9223372036854775807LL))) << (((((var_9) + (arr_44 [i_7] [i_7] [i_7] [4U] [i_7] [i_0]))) - (6257937742602359662ULL)))));
        }
        var_44 = ((/* implicit */unsigned int) max((var_44), (((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)101)))))))) * ((~(max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) var_15))))))))));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) == (((((/* implicit */_Bool) (-(arr_41 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65512))))) : (arr_16 [i_0] [i_0] [i_0])))));
        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) - (87)))))))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_53 [i_17]) ? (5308967433468434006LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_55 [i_17])), (max((((/* implicit */unsigned int) arr_53 [i_17])), (var_3))))))));
        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) -5398508635211304008LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))))));
    }
}
