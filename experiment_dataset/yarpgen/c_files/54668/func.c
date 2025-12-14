/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54668
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max(((-(-5686592474819547166LL))), (((/* implicit */long long int) min((var_10), (var_11)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */long long int) var_5)), (-8965525409241059334LL))))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) var_13)), (var_2))))))) ? (((((/* implicit */_Bool) min(((short)-14754), (((/* implicit */short) (unsigned char)223))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13)))) : (max((var_10), (((/* implicit */unsigned int) (short)-31517)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) == (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(short)11]))) + (arr_0 [i_0] [i_0])))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (7456009187404298232LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)2] [(signed char)2]))))))));
        var_19 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0]))))));
            var_21 |= ((/* implicit */unsigned char) (-(7456009187404298232LL)));
            var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) var_12)))))) * (arr_0 [i_0] [i_1 - 2])));
        }
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_23 = ((/* implicit */_Bool) var_3);
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0]) * (arr_7 [i_0] [i_0])));
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
            }
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_26 = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_13))))));
                var_27 = arr_2 [i_0];
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_28 = ((((/* implicit */_Bool) var_3)) ? (7456009187404298232LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))));
                    var_29 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])) : (var_12)))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)76))));
                    var_31 = ((/* implicit */unsigned char) 3816112406U);
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [(short)6] [i_4] [i_6])) ? (arr_14 [i_0] [i_2] [i_4] [i_6]) : (((/* implicit */int) arr_2 [i_0]))));
                    var_33 = ((/* implicit */short) 478854889U);
                }
                var_34 = ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (_Bool)1)));
                var_35 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0] [i_2] [i_4])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((9791522085890767769ULL) ^ (14555064744723693589ULL)))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 3; i_8 < 22; i_8 += 2) 
        {
            for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) max((((((((/* implicit */_Bool) 3249135155U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63840))))) << (((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_19 [i_7])))) - (16))))), ((~(arr_27 [i_7] [i_8 - 3] [i_9] [i_10]))))))));
                        var_38 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8 - 1])))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8] [i_8 - 1] [i_9 + 3] [i_9]))) ^ (var_6)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_39 = (-(917982733));
                            var_40 = ((/* implicit */signed char) (+(2309172824U)));
                        }
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) == (((/* implicit */int) min(((short)-14754), (((/* implicit */short) arr_29 [i_7] [i_7] [i_7] [i_8] [i_9] [i_7] [i_12]))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)59))))), (((((/* implicit */_Bool) 4117157779175038940ULL)) ? (((/* implicit */int) arr_26 [i_7] [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_35 [i_7] [i_7] [i_9] [i_10] [i_12]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */short) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7])))))) - ((~(2382755196U)))))));
                            var_42 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -721570499)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_8] [i_7] [i_9 + 3] [i_12]))) : (var_11))), (((/* implicit */unsigned int) arr_21 [i_10]))));
                            var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)73))))))), (min((arr_27 [i_8 - 2] [i_9] [i_9 + 2] [i_9 + 3]), (arr_27 [i_8 - 3] [i_8 - 3] [i_8] [i_9 - 1])))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_44 = max((min((((/* implicit */long long int) arr_35 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_8 - 1])), (arr_31 [i_10] [i_10]))), (min((arr_31 [i_10] [i_10]), (((/* implicit */long long int) arr_35 [(short)14] [i_9 + 2] [i_9 + 3] [i_9 - 1] [i_8 + 1])))));
                            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (~(var_10))))));
                            var_46 = ((/* implicit */unsigned char) 8655221987818783847ULL);
                        }
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)49)) * (((/* implicit */int) (unsigned char)0))))), (4472387943610185201ULL)));
        var_48 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) 2589177583463111388LL))), (((((/* implicit */int) (unsigned short)22726)) % (((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))), (min((((18224443459620015211ULL) % (14329586294534512676ULL))), (8655221987818783835ULL)))));
        var_49 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_23 [i_7] [i_7] [i_7])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21031)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3789)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_7]))))) : (((/* implicit */int) ((3968082048U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-26617))))))))) : (min((9791522085890767754ULL), (9791522085890767769ULL)))));
    }
    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        var_50 |= ((/* implicit */signed char) min((max((((/* implicit */int) arr_30 [8ULL] [i_14])), ((-(((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) -4528610078160331702LL)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_29 [i_14] [(unsigned short)10] [6ULL] [i_14] [i_14] [i_14] [i_14])))) : (((/* implicit */int) ((arr_33 [i_14] [i_14] [i_14] [i_14] [i_14]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_14] [(signed char)16]))))))))));
        /* LoopSeq 1 */
        for (signed char i_15 = 1; i_15 < 19; i_15 += 3) 
        {
            var_51 = ((/* implicit */unsigned short) (+(2147483647)));
            /* LoopNest 2 */
            for (short i_16 = 3; i_16 < 20; i_16 += 2) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    {
                        var_52 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((-775775672) ^ (((/* implicit */int) (unsigned short)29741))))));
                        var_53 = ((/* implicit */signed char) (unsigned char)119);
                        var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_40 [i_14]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_14]))) : (arr_27 [i_16 + 1] [i_15 - 1] [i_16] [i_17])))) ? (((/* implicit */int) max((arr_44 [i_14] [i_15 + 1] [i_16 - 3] [i_16]), (arr_44 [i_15] [i_15 + 2] [i_16 - 2] [i_17])))) : (((/* implicit */int) (unsigned char)127))));
                        var_55 = ((/* implicit */int) var_14);
                    }
                } 
            } 
            var_56 = ((/* implicit */unsigned long long int) (-(((arr_44 [i_15] [i_15] [i_15] [(unsigned short)1]) ? (((/* implicit */int) arr_37 [i_14] [i_14] [i_14])) : (((/* implicit */int) ((((/* implicit */int) (short)14753)) > (((/* implicit */int) var_3)))))))));
        }
    }
}
