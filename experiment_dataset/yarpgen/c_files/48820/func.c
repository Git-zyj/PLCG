/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48820
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
    var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)31)), (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), (var_1))))) : (max((((/* implicit */unsigned long long int) 0U)), (8ULL))))) < (((((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_13)))))));
    var_18 ^= ((/* implicit */signed char) (((((!((_Bool)1))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 131071U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)(-32767 - 1))))))) < (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((-5LL), ((((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((var_0) + (483489946)))))) : (var_2)))));
        var_20 = ((/* implicit */unsigned long long int) (signed char)-1);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)0))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) | (((/* implicit */int) (short)-1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((/* implicit */int) var_11))))) : (var_10)));
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 + 2])) >> (12ULL)));
        }
        for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65508))) : (0ULL))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [(signed char)14])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32765))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (short)511)) % (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_10 [i_5] [i_1] [i_1 + 2]))))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] [i_5] = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_6 [i_1] [i_3 + 1] [i_1]) - (17451520604123234482ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((arr_6 [i_1] [i_3 + 1] [i_1]) - (17451520604123234482ULL))) - (17020995319876204565ULL))))));
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_1] [i_5] [i_4] [i_3 - 1] [i_3] [i_1] = ((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (((/* implicit */int) ((_Bool) arr_2 [i_1]))) : (((/* implicit */int) (signed char)-104)));
                        arr_20 [i_6] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((0U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1])))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_1 + 2])) << (((4294967292U) - (4294967275U))))))));
                        var_28 = arr_15 [i_1] [i_3] [i_5];
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_1] [i_4] [i_4] [i_5] [i_1] = ((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (signed char)127)) : (arr_15 [(unsigned short)6] [(unsigned short)6] [i_1])))) ? (-9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_30 = ((((/* implicit */unsigned long long int) arr_12 [i_4 + 1] [i_4] [i_8])) > ((~(0ULL))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)24))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_3] [(_Bool)0] [i_1] [(signed char)15] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [(signed char)15] [i_4 - 1] [i_4] [i_1 + 2] [i_3 - 1] [i_3 - 1]))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (arr_21 [i_1 + 1] [13U] [i_1] [i_5] [i_9])));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5U)) ? (((/* implicit */long long int) arr_8 [i_1] [i_4 - 1])) : (arr_3 [i_1] [i_3 - 1])));
                        var_34 = ((/* implicit */unsigned short) (_Bool)0);
                    }
                }
                for (unsigned int i_10 = 3; i_10 < 15; i_10 += 3) 
                {
                    var_35 = ((/* implicit */_Bool) arr_3 [i_1] [i_4 - 2]);
                    var_36 = ((/* implicit */int) (((-(1ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65531)))))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) var_14))));
                    var_38 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
                }
                var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & ((-(((/* implicit */int) (signed char)0)))))))));
                arr_33 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [(_Bool)1]);
            }
            for (int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0LL)))) ? (((4294967287U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (arr_15 [i_1] [i_3] [3ULL]) : (((/* implicit */int) arr_24 [i_11] [i_11]))))))))));
                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                arr_38 [i_1] [i_3 + 1] [i_3 + 1] = ((/* implicit */int) arr_10 [i_1] [i_1] [i_11]);
            }
            for (int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_7)))) ? (1ULL) : (((/* implicit */unsigned long long int) arr_35 [i_3 + 2] [i_3]))));
                var_43 = ((/* implicit */unsigned long long int) var_8);
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_2 [i_1 + 2])) : ((~(((/* implicit */int) (unsigned short)5))))));
            }
            var_45 = ((/* implicit */int) var_13);
            var_46 = ((/* implicit */int) 18446744073709551601ULL);
        }
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned long long int) (+(-2147483623)));
            var_48 = ((/* implicit */int) (signed char)12);
            /* LoopSeq 4 */
            for (long long int i_14 = 3; i_14 < 15; i_14 += 2) 
            {
                var_49 = ((/* implicit */short) arr_42 [i_13]);
                var_50 ^= ((/* implicit */signed char) 12);
                var_51 = (!(((/* implicit */_Bool) (signed char)(-127 - 1))));
                var_52 = ((/* implicit */unsigned short) var_5);
            }
            for (unsigned short i_15 = 2; i_15 < 15; i_15 += 3) 
            {
                var_53 = ((0) > (((/* implicit */int) (_Bool)1)));
                arr_49 [i_1] [i_13] [i_13] [6ULL] = ((/* implicit */signed char) ((unsigned short) -2147483626));
                var_54 = ((/* implicit */int) arr_43 [i_1] [i_15]);
            }
            for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                var_55 -= ((/* implicit */int) arr_45 [i_16]);
                var_56 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)8))));
                arr_54 [i_1] [i_13] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_8))));
            }
            for (signed char i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_17] [(signed char)0] [16] [i_13] [i_1] [i_1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_5 [i_1 + 2]))));
                var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_1 + 2] [i_1 + 2])) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_13 [i_1] [i_1 + 1] [8] [4] [i_1 + 1] [i_1 + 2])) : (((/* implicit */int) ((short) (_Bool)1)))));
                var_59 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (short)32762)))) * (((/* implicit */int) arr_24 [i_1] [(_Bool)1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    var_60 = arr_14 [i_1] [i_13] [i_17] [10LL];
                    var_61 = ((/* implicit */unsigned long long int) 127);
                    var_62 = ((/* implicit */unsigned long long int) (signed char)0);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 2) 
                    {
                        var_63 ^= ((/* implicit */short) ((((/* implicit */int) (short)0)) >> (12ULL)));
                        var_64 = ((/* implicit */short) (+((-(18446744073709551614ULL)))));
                    }
                    for (long long int i_20 = 4; i_20 < 15; i_20 += 4) 
                    {
                        var_65 = ((/* implicit */unsigned short) (-(var_13)));
                        var_66 = (+(((((/* implicit */int) (signed char)(-127 - 1))) * (0))));
                        arr_67 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 2] [i_20 + 2]))));
                    }
                    for (long long int i_21 = 2; i_21 < 16; i_21 += 2) /* same iter space */
                    {
                        var_67 = ((/* implicit */int) var_6);
                        arr_70 [i_1] [i_13] [i_17] = ((/* implicit */int) var_1);
                    }
                    for (long long int i_22 = 2; i_22 < 16; i_22 += 2) /* same iter space */
                    {
                        var_68 = ((((/* implicit */_Bool) arr_41 [(signed char)5] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) arr_43 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27))) : (3ULL))));
                        var_69 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) (short)32756)))) : ((-(var_0)))));
                        arr_73 [i_1] [i_13] [i_1] [i_13] [i_1] = ((/* implicit */unsigned char) (signed char)-7);
                    }
                }
            }
        }
        for (unsigned char i_23 = 0; i_23 < 17; i_23 += 2) /* same iter space */
        {
            var_70 ^= arr_35 [i_23] [i_1 - 1];
            var_71 ^= ((/* implicit */_Bool) arr_47 [i_23] [i_1 + 2] [i_1]);
            arr_77 [i_1] [i_1] = ((/* implicit */_Bool) var_7);
        }
        var_72 = ((/* implicit */unsigned long long int) arr_75 [i_1] [(signed char)12] [i_1]);
        var_73 = ((/* implicit */int) (!(arr_53 [i_1 + 1] [i_1 + 1])));
    }
}
